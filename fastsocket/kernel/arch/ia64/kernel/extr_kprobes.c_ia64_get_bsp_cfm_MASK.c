
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct param_bsp_cfm {unsigned long ip; scalar_t__ cfm; int * bsp; } ;


 int FUNC_0 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_1 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_2 (struct unw_frame_info*,unsigned long*) ;
 scalar_t__ FUNC_3 (struct unw_frame_info*) ;

__attribute__((used)) static void FUNC_4(struct unw_frame_info *VAR_0, void *VAR_1)
{
 unsigned long VAR_2;
 struct param_bsp_cfm *VAR_3 = VAR_1;

 do {
  FUNC_2(VAR_0, &VAR_2);
  if (VAR_2 == 0)
   break;
  if (VAR_2 == VAR_3->ip) {
   FUNC_0(VAR_0, (unsigned long*)&VAR_3->bsp);
   FUNC_1(VAR_0, (unsigned long*)&VAR_3->cfm);
   return;
  }
 } while (FUNC_3(VAR_0) >= 0);
 VAR_3->bsp = ((void*)0);
 VAR_3->cfm = 0;
 return;
}
