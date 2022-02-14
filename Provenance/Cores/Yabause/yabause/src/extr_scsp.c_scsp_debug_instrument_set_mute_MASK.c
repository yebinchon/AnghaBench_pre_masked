
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int is_muted; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int*,int*) ;

void FUNC_1(u32 VAR_2, int VAR_3)
{
   int VAR_4 = 0, VAR_5 = 0;
   FUNC_0(VAR_2, &VAR_4, &VAR_5);

   if (VAR_5 >= VAR_0)
      return;

   if (VAR_4)
      VAR_1[VAR_5].is_muted = VAR_3;
}
