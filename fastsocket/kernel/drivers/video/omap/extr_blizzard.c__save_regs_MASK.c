
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blizzard_reg_list {int start; int end; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(const struct blizzard_reg_list *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {
  int VAR_4;
  for (VAR_4 = VAR_1->start; VAR_4 <= VAR_1->end; VAR_4 += 2)
   VAR_0[VAR_4 / 2] = FUNC_0(VAR_4);
 }
}
