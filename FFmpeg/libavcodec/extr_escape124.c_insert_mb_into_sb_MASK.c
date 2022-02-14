
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int * pixels32; } ;
struct TYPE_5__ {int * pixels32; } ;
typedef TYPE_1__ SuperBlock ;
typedef TYPE_2__ MacroBlock ;



__attribute__((used)) static void FUNC_0(SuperBlock* VAR_0, MacroBlock VAR_1, unsigned VAR_2) {

   uint32_t *VAR_3 = VAR_0->pixels32 + VAR_2 + (VAR_2 & -4);


   VAR_3[0] = VAR_1.pixels32[0];
   VAR_3[4] = VAR_1.pixels32[1];
}
