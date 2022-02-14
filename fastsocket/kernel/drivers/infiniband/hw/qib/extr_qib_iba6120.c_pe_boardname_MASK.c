
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {char* boardname; int majrev; int minrev; int revision; int boardversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct qib_devdata*,char*,...) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct qib_devdata *VAR_8)
{
 char *VAR_9;
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_8->revision, VAR_5,
       VAR_1);

 switch (VAR_10) {
 case 2:
  VAR_9 = "InfiniPath_QLE7140";
  break;
 default:
  FUNC_2(VAR_8, "Unknown 6120 board with ID %u\n", VAR_10);
  VAR_9 = "Unknown_InfiniPath_6120";
  break;
 }
 VAR_11 = FUNC_4(VAR_9) + 1;
 VAR_8->boardname = FUNC_1(VAR_11, VAR_2);
 if (!VAR_8->boardname)
  FUNC_2(VAR_8, "Failed allocation for board name: %s\n", VAR_9);
 else
  FUNC_3(VAR_8->boardname, VAR_11, "%s", VAR_9);

 if (VAR_8->majrev != 4 || !VAR_8->minrev || VAR_8->minrev > 2)
  FUNC_2(VAR_8,
   "Unsupported InfiniPath hardware revision %u.%u!\n",
   VAR_8->majrev, VAR_8->minrev);

 FUNC_3(VAR_8->boardversion, sizeof(VAR_8->boardversion),
   "ChipABI %u.%u, %s, InfiniPath%u %u.%u, SW Compat %u\n",
   VAR_3, VAR_4, VAR_8->boardname,
   (unsigned)FUNC_0(VAR_8->revision, VAR_6, VAR_0),
   VAR_8->majrev, VAR_8->minrev,
   (unsigned)FUNC_0(VAR_8->revision, VAR_6, VAR_7));

}
