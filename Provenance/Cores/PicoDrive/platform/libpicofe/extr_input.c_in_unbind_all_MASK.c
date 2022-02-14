
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_count; int* binds; } ;
typedef TYPE_1__ in_dev_t ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_1 - 1;
 int VAR_8, VAR_9;
 in_dev_t *VAR_10;

 if (VAR_3 >= 0)
  VAR_6 = VAR_7 = VAR_3;

 if (VAR_5 >= VAR_0)
  return;

 for (; VAR_6 <= VAR_7; VAR_6++) {
  VAR_10 = &VAR_2[VAR_6];
  VAR_9 = VAR_10->key_count;

  if (VAR_10->binds == ((void*)0))
   continue;

  if (VAR_4 != -1) {
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    VAR_10->binds[FUNC_0(VAR_8, VAR_5)] &= ~VAR_4;
  }
  else
   FUNC_1(VAR_10->binds, 0, sizeof(VAR_10->binds[0]) * VAR_9 * VAR_0);
 }
}
