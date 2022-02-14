
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * counter; } ;
struct super_block {TYPE_1__ s_writers; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1)
{
 int VAR_2;


 if (FUNC_2(!FUNC_1(VAR_1)))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->s_writers.counter[VAR_2]);
}
