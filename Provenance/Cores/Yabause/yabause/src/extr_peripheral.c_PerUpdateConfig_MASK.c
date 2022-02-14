
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* controller; int * base; } ;
typedef int PerConfig_struct ;
typedef int PerBaseConfig_struct ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(PerBaseConfig_struct * VAR_2, int VAR_3, void * VAR_4)
{
   u32 VAR_5 = VAR_1;
   u32 VAR_6, VAR_7;

   VAR_1 += VAR_3;
   VAR_0 = FUNC_0(VAR_0, VAR_1 * sizeof(PerConfig_struct));
   VAR_7 = 0;
   for(VAR_6 = VAR_5;VAR_6 < VAR_1;VAR_6++)
   {
      VAR_0[VAR_6].base = VAR_2 + VAR_7;
      VAR_0[VAR_6].controller = VAR_4;
      VAR_7++;
   }
}
