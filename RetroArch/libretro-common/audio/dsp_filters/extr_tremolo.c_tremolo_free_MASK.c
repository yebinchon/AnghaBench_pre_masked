
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* wavetable; } ;
struct TYPE_3__ {void* wavetable; } ;
struct tremolo {TYPE_2__ right; TYPE_1__ left; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   struct tremolo *VAR_1 = (struct tremolo*)VAR_0;
   FUNC_0(VAR_1->left.wavetable);
   FUNC_0(VAR_1->right.wavetable);
   FUNC_0(VAR_0);
}
