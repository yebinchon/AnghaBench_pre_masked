
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int intfdev; int hdev; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(
 struct usb_hub *VAR_1,
 int VAR_2,
 int VAR_3
)
{
 int VAR_4 = FUNC_1(VAR_1->hdev, (VAR_3 << 8) | VAR_2,
   VAR_0);
 if (VAR_4 < 0)
  FUNC_0 (VAR_1->intfdev,
   "port %d indicator %s status %d\n",
   VAR_2,
   ({ char *VAR_5; switch (VAR_3) {
   case 131: VAR_5 = "amber"; break;
   case 129: VAR_5 = "green"; break;
   case 128: VAR_5 = "off"; break;
   case 130: VAR_5 = "auto"; break;
   default: VAR_5 = "??"; break;
   }; VAR_5; }),
   VAR_4);
}
