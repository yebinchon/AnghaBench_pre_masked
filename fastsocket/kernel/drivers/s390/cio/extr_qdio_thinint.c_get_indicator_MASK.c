
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ind; int count; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static u32 *FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!FUNC_1(&VAR_2[VAR_3].count)) {
   FUNC_2(&VAR_2[VAR_3].count, 1);
   return &VAR_2[VAR_3].ind;
  }


 FUNC_0(&VAR_2[VAR_1].count);
 return &VAR_2[VAR_1].ind;
}
