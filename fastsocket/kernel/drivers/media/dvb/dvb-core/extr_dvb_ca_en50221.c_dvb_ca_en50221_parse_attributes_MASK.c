
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_ca_private {TYPE_3__* slot_info; TYPE_2__* dvbdev; } ;
struct TYPE_6__ {int config_base; int config_option; } ;
struct TYPE_5__ {TYPE_1__* adapter; } ;
struct TYPE_4__ {int num; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (struct dvb_ca_private*,int,int*,int*,int*,int*) ;
 char* FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,int ,char,char,char,char) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_private *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5;
 u8 VAR_6[257];
 char *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;



 if ((VAR_9 =
      FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_5, &VAR_4, VAR_6)) < 0)
  return VAR_9;
 if (VAR_5 != 0x1D)
  return -VAR_0;




 if ((VAR_9 =
      FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_5, &VAR_4, VAR_6)) < 0)
  return VAR_9;
 if (VAR_5 != 0x1C)
  return -VAR_0;




 if ((VAR_9 =
      FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_5, &VAR_4, VAR_6)) < 0)
  return VAR_9;
 if (VAR_5 != 0x15)
  return -VAR_0;




 if ((VAR_9 = FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_5,
      &VAR_4, VAR_6)) < 0)
  return VAR_9;
 if (VAR_5 != 0x20)
  return -VAR_0;
 if (VAR_4 != 4)
  return -VAR_0;
 VAR_13 = (VAR_6[1] << 8) | VAR_6[0];
 VAR_14 = (VAR_6[3] << 8) | VAR_6[2];




 if ((VAR_9 = FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_5,
      &VAR_4, VAR_6)) < 0)
  return VAR_9;
 if (VAR_5 != 0x1A)
  return -VAR_0;
 if (VAR_4 < 3)
  return -VAR_0;


 VAR_8 = VAR_6[0] & 3;
 if (VAR_4 < (3 + VAR_8 + 14))
  return -VAR_0;
 VAR_1->slot_info[VAR_2].config_base = 0;
 for (VAR_12 = 0; VAR_12 < VAR_8 + 1; VAR_12++) {
  VAR_1->slot_info[VAR_2].config_base |= (VAR_6[2 + VAR_12] << (8 * VAR_12));
 }


 VAR_7 = FUNC_2((char *)VAR_6, VAR_4, "DVB_CI_V", 8);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 if (VAR_4 < ((VAR_7 - (char *) VAR_6) + 12))
  return -VAR_0;


 if (FUNC_4(VAR_7 + 8, "1.00", 4)) {
  FUNC_3("dvb_ca adapter %d: Unsupported DVB CAM module version %c%c%c%c\n",
         VAR_1->dvbdev->adapter->num, VAR_7[8], VAR_7[9], VAR_7[10], VAR_7[11]);
  return -VAR_0;
 }


 while ((!VAR_11) && (VAR_3 < 0x1000)) {
  if ((VAR_9 = FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_5,
       &VAR_4, VAR_6)) < 0)
   return VAR_9;
  switch (VAR_5) {
  case 0x1B:
   if (VAR_4 < (2 + 11 + 17))
    break;


   if (VAR_10)
    break;


   VAR_1->slot_info[VAR_2].config_option = VAR_6[0] & 0x3f;


   if ((FUNC_2((char *)VAR_6, VAR_4, "DVB_HOST", 8) == ((void*)0)) ||
       (FUNC_2((char *)VAR_6, VAR_4, "DVB_CI_MODULE", 13) == ((void*)0)))
    break;

   VAR_10 = 1;
   break;

  case 0x14:
   break;

  case 0xFF:
   VAR_11 = 1;
   break;

  default:
   FUNC_0("dvb_ca: Skipping unknown tuple type:0x%x length:0x%x\n", VAR_5,
    VAR_4);
   break;
  }
 }

 if ((VAR_3 > 0x1000) || (!VAR_10))
  return -VAR_0;

 FUNC_0("Valid DVB CAM detected MANID:%x DEVID:%x CONFIGBASE:0x%x CONFIGOPTION:0x%x\n",
  VAR_13, VAR_14, VAR_1->slot_info[VAR_2].config_base, VAR_1->slot_info[VAR_2].config_option);


 return 0;
}
