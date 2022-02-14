
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {int board_atten; char* boardname; int majrev; int minrev; int unit; int pcidev; int revision; int boardversion; int flags; } ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct qib_devdata*,char*,...) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static unsigned FUNC_6(struct qib_devdata *VAR_13)
{

 char *VAR_14;
 u32 VAR_15, VAR_16;
 unsigned VAR_17 = VAR_2;

 VAR_15 = FUNC_0(VAR_13->revision, VAR_9, VAR_1);

 switch (VAR_15) {
 case 0:
  VAR_14 = "InfiniPath_QLE7342_Emulation";
  break;
 case 1:
  VAR_14 = "InfiniPath_QLE7340";
  VAR_13->flags |= VAR_8;
  VAR_17 = VAR_4;
  break;
 case 2:
  VAR_14 = "InfiniPath_QLE7342";
  VAR_13->flags |= VAR_8;
  break;
 case 3:
  VAR_14 = "InfiniPath_QMI7342";
  break;
 case 4:
  VAR_14 = "InfiniPath_Unsupported7342";
  FUNC_2(VAR_13, "Unsupported version of QMH7342\n");
  VAR_17 = 0;
  break;
 case 128:
  VAR_14 = "InfiniPath_QMH7342";
  VAR_17 = 0x24;
  break;
 case 129:
  VAR_14 = "InfiniPath_QME7342";
  break;
 case 8:
  VAR_14 = "InfiniPath_QME7362";
  VAR_13->flags |= VAR_8;
  break;
 case 15:
  VAR_14 = "InfiniPath_QLE7342_TEST";
  VAR_13->flags |= VAR_8;
  break;
 default:
  VAR_14 = "InfiniPath_QLE73xy_UNKNOWN";
  FUNC_2(VAR_13, "Unknown 7322 board type %u\n", VAR_15);
  break;
 }
 VAR_13->board_atten = 1;

 VAR_16 = FUNC_5(VAR_14) + 1;
 VAR_13->boardname = FUNC_1(VAR_16, VAR_3);
 if (!VAR_13->boardname)
  FUNC_2(VAR_13, "Failed allocation for board name: %s\n", VAR_14);
 else
  FUNC_4(VAR_13->boardname, VAR_16, "%s", VAR_14);

 FUNC_4(VAR_13->boardversion, sizeof(VAR_13->boardversion),
   "ChipABI %u.%u, %s, InfiniPath%u %u.%u, SW Compat %u\n",
   VAR_6, VAR_7, VAR_13->boardname,
   (unsigned)FUNC_0(VAR_13->revision, VAR_10, VAR_0),
   VAR_13->majrev, VAR_13->minrev,
   (unsigned)FUNC_0(VAR_13->revision, VAR_10, VAR_11));

 if (VAR_12 && (VAR_17 >> VAR_5) & VAR_4) {
  FUNC_3(VAR_13->pcidev,
   "IB%u: Forced to single port mode by module parameter\n",
   VAR_13->unit);
  VAR_17 &= VAR_4;
 }

 return VAR_17;
}
