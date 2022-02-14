
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** bufcomb; void** bufallpass; } ;
struct TYPE_4__ {void** bufcomb; void** bufallpass; } ;
struct reverb_data {TYPE_1__ right; TYPE_2__ left; } ;


 int FUNC_0 (void*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
   struct reverb_data *VAR_3 = (struct reverb_data*)VAR_2;
   unsigned VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   FUNC_0(VAR_3->left.bufcomb[VAR_4]);
   FUNC_0(VAR_3->right.bufcomb[VAR_4]);
   }

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   FUNC_0(VAR_3->left.bufallpass[VAR_4]);
   FUNC_0(VAR_3->right.bufallpass[VAR_4]);
   }
   FUNC_0(VAR_2);
}
