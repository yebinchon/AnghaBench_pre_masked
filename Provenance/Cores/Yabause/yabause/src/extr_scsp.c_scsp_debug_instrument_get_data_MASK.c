
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int is_muted; int sa; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0(int VAR_2, u32 * VAR_3, int * VAR_4)
{
   if(VAR_2 >= VAR_0)
      return;

   *VAR_3 = VAR_1[VAR_2].sa;
   *VAR_4 = VAR_1[VAR_2].is_muted;
}
