
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mask_info {struct mask_info* next; int mask; } ;


 struct mask_info VAR_0 ;
 struct mask_info VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct mask_info *VAR_2;

 VAR_2 = &VAR_1;
 while (VAR_2) {
  FUNC_0(VAR_2->mask);
  VAR_2 = VAR_2->next;
 }







}
