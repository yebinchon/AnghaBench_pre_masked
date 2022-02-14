
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_hub {int hdev; TYPE_1__* descriptor; int intfdev; } ;
struct TYPE_2__ {int bPwrOn2PwrGood; int bNbrPorts; int wHubCharacteristics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static unsigned FUNC_5(struct usb_hub *VAR_2, bool VAR_3)
{
 int VAR_4;
 unsigned VAR_5 = VAR_2->descriptor->bPwrOn2PwrGood * 2;
 unsigned VAR_6;
 u16 VAR_7 =
   FUNC_1(VAR_2->descriptor->wHubCharacteristics);







 if ((VAR_7 & VAR_0) < 2)
  FUNC_0(VAR_2->intfdev, "enabling power on all ports\n");
 else
  FUNC_0(VAR_2->intfdev, "trying to enable port power on "
    "non-switchable hub\n");
 for (VAR_4 = 1; VAR_4 <= VAR_2->descriptor->bNbrPorts; VAR_4++)
  FUNC_4(VAR_2->hdev, VAR_4, VAR_1);


 VAR_6 = FUNC_2(VAR_5, (unsigned) 100);
 if (VAR_3)
  FUNC_3(VAR_6);
 return VAR_6;
}
