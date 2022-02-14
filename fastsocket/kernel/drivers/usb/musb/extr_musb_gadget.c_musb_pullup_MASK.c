
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb {int mregs; TYPE_1__* gadget_driver; } ;
struct TYPE_2__ {int function; } ;


 int FUNC_0 (int,char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct musb *VAR_2, int VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_1(VAR_2->mregs, VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;



 FUNC_0(3, "gadget %s D+ pullup %s\n",
  VAR_2->gadget_driver->function, VAR_3 ? "on" : "off");
 FUNC_2(VAR_2->mregs, VAR_0, VAR_4);
}
