
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct bcma_drv_cc *VAR_3, u32 VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_3, VAR_0,
   VAR_2 | VAR_4);
 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  if (!(FUNC_0(VAR_3, VAR_0) &
        VAR_1))
   return;
  FUNC_3();
 }
 FUNC_2(VAR_3->core->bus, "SFLASH control command failed (timeout)!\n");
}
