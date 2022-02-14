
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* di_map; } ;
typedef TYPE_1__ hil_mlc ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(hil_mlc *VAR_1)
{
 int VAR_2;




 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  int VAR_3, VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < 7 ; VAR_3++)
   if (VAR_1->di_map[VAR_3] == VAR_2)
    VAR_4++;

  if (!VAR_4)
   break;
 }

 return VAR_2;
}
