
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
typedef int cheatlist_struct ;
struct TYPE_4__ {int type; int enable; int * desc; void* val; void* addr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(int VAR_4, u32 VAR_5, u32 VAR_6)
{
   if (VAR_1 == ((void*)0))
      return -1;

   VAR_1[VAR_3].type = VAR_4;
   VAR_1[VAR_3].addr = VAR_5;
   VAR_1[VAR_3].val = VAR_6;
   VAR_1[VAR_3].desc = ((void*)0);
   VAR_1[VAR_3].enable = 1;
   VAR_3++;


   if (VAR_3 >= VAR_2)
   {
      VAR_1 = FUNC_0(VAR_1, sizeof(cheatlist_struct) * (VAR_2 * 2));
      VAR_2 *= 2;
   }

   VAR_1[VAR_3].type = VAR_0;

   return 0;
}
