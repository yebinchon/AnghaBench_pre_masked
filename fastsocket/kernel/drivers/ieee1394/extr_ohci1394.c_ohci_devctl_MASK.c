
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_ohci {int at_resp_context; int at_req_context; } ;
struct hpsb_host {struct ti_ohci* hostdata; } ;
typedef enum devctl_cmd { ____Placeholder_devctl_cmd } devctl_cmd ;




 int FUNC_0 (char*) ;

 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;






 int FUNC_3 (int *) ;
 int FUNC_4 (struct ti_ohci*,int) ;
 int FUNC_5 (struct ti_ohci*,int ) ;
 int FUNC_6 (struct ti_ohci*,int ,int) ;
 int FUNC_7 (struct ti_ohci*,int,int) ;

__attribute__((used)) static int FUNC_8(struct hpsb_host *VAR_8, enum devctl_cmd VAR_9, int VAR_10)
{
 struct ti_ohci *VAR_11 = VAR_8->hostdata;
 int VAR_12 = 0, VAR_13;

 switch (VAR_9) {
 case 133:
  switch (VAR_10) {
  case 130:
   VAR_13 = FUNC_4(VAR_11, 5);
   VAR_13 |= 0x40;
   FUNC_7(VAR_11, 5, VAR_13);
   break;
  case 136:
   VAR_13 = FUNC_4(VAR_11, 1);
   VAR_13 |= 0x40;
   FUNC_7(VAR_11, 1, VAR_13);
   break;
  case 128:
   VAR_13 = FUNC_4(VAR_11, 1);
   if (VAR_13 & 0x80) {
    VAR_13 &= ~0x80;
    FUNC_7(VAR_11, 1, VAR_13);
   }

   VAR_13 = FUNC_4(VAR_11, 5);
   VAR_13 |= 0x40;
   FUNC_7(VAR_11, 5, VAR_13);
   break;
  case 134:
   VAR_13 = FUNC_4(VAR_11, 1);
   VAR_13 &= ~0x80;
   VAR_13 |= 0x40;
   FUNC_7(VAR_11, 1, VAR_13);
   break;
  case 129:
   VAR_13 = FUNC_4(VAR_11, 1);
   if (!(VAR_13 & 0x80)) {
    VAR_13 |= 0x80;
    FUNC_7(VAR_11, 1, VAR_13);
   }

   VAR_13 = FUNC_4(VAR_11, 5);
   VAR_13 |= 0x40;
   FUNC_7(VAR_11, 5, VAR_13);
   break;
  case 135:
   VAR_13 = FUNC_4(VAR_11, 1);
   VAR_13 |= 0xc0;
   FUNC_7(VAR_11, 1, VAR_13);
   break;
  default:
   VAR_12 = -1;
  }
  break;

 case 137:
  VAR_12 = FUNC_5(VAR_11, VAR_1);
  break;

 case 131:
  FUNC_6(VAR_11, VAR_1, VAR_10);
  break;

 case 132:
  FUNC_1(VAR_0, "devctl command SET_BUS_ID err");
  break;

 case 139:
  if (VAR_10) {

   u32 VAR_14 = FUNC_5(VAR_11, VAR_7);
   if ((VAR_14 & (1<<30)) && (VAR_14 & 0x3f)) {



    FUNC_0("Cycle master enabled");
    FUNC_6(VAR_11, VAR_3,
       VAR_6 |
       VAR_4);
   }
  } else {

   FUNC_6(VAR_11, VAR_2,
      VAR_6 |
      VAR_4 |
      VAR_5);
  }
  break;

 case 138:
  FUNC_0("Cancel request received");
  FUNC_3(&VAR_11->at_req_context);
  FUNC_3(&VAR_11->at_resp_context);
  break;

 default:
  FUNC_2(VAR_0, "ohci_devctl cmd %d not implemented yet",
   VAR_9);
  break;
 }
 return VAR_12;
}
