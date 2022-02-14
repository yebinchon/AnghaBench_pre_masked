
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* di_map; int di_scratch; scalar_t__ di; } ;
typedef TYPE_1__ hil_mlc ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_1(hil_mlc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  int VAR_3, VAR_4 = 0;


  for (VAR_3 = 0; VAR_3 < 7 ; VAR_3++)
   if (VAR_1->di_map[VAR_3] == VAR_2)
    VAR_4++;

  if (VAR_4)
   continue;

  if (!FUNC_0(VAR_1->di + VAR_2, &VAR_1->di_scratch,
    sizeof(VAR_1->di_scratch)))
   break;
 }
 return VAR_2 >= VAR_0 ? -1 : VAR_2;
}
