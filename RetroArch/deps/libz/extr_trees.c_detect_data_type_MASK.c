
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dyn_ltree; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_4__ {scalar_t__ Freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(deflate_state *VAR_3)
   {




      unsigned long VAR_4 = 0xf3ffc07fUL;
      int VAR_5;


      for (VAR_5 = 0; VAR_5 <= 31; VAR_5++, VAR_4 >>= 1)
         if ((VAR_4 & 1) && (VAR_3->dyn_ltree[VAR_5].Freq != 0))
            return VAR_1;


      if (VAR_3->dyn_ltree[9].Freq != 0 || VAR_3->dyn_ltree[10].Freq != 0
            || VAR_3->dyn_ltree[13].Freq != 0)
         return VAR_2;
      for (VAR_5 = 32; VAR_5 < VAR_0; VAR_5++)
         if (VAR_3->dyn_ltree[VAR_5].Freq != 0)
            return VAR_2;




      return VAR_1;
   }
