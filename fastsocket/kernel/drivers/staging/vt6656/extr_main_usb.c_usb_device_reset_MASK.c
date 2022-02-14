
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usb; } ;
typedef TYPE_1__* PSDevice ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(PSDevice VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_1(VAR_0->usb);
 if (VAR_1)
            FUNC_0("usb_device_reset fail status=%d\n",VAR_1);
 return ;
}
