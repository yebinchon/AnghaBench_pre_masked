
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int * radio_timer; int * wdtimer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct brcms_c_info *VAR_0)
{

 if (VAR_0->wdtimer) {
  FUNC_0(VAR_0->wdtimer);
  VAR_0->wdtimer = ((void*)0);
 }
 if (VAR_0->radio_timer) {
  FUNC_0(VAR_0->radio_timer);
  VAR_0->radio_timer = ((void*)0);
 }
}
