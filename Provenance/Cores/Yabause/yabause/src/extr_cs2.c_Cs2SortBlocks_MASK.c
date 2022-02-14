
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** block; } ;
typedef TYPE_1__ partition_struct ;


 unsigned int VAR_0 ;

void FUNC_0(partition_struct * VAR_1) {
  unsigned int VAR_2, VAR_3;

  for (VAR_2 = VAR_3 = 0; VAR_2 < VAR_0; VAR_2++)
  {
     if (VAR_1->block[VAR_2] != ((void*)0))
     {
        if (VAR_3 != VAR_2)
        {
           VAR_1->block[VAR_3] = VAR_1->block[VAR_2];
        }
        VAR_3++;
     }
  }

  for (; VAR_3 < VAR_0; VAR_3++) {
      VAR_1->block[VAR_3] = ((void*)0);
  }
}
