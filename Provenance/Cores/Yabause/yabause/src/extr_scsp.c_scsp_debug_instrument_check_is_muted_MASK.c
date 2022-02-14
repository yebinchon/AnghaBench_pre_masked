
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ is_muted; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int*,int*) ;

int FUNC_1(u32 VAR_2)
{
   int VAR_3 = 0, VAR_4 = 0;
   FUNC_0(VAR_2, &VAR_3, &VAR_4);

   if (VAR_4 >= VAR_0)
      return 0;

   if (VAR_3 && VAR_1[VAR_4].is_muted)
      return 1;

   return 0;
}
