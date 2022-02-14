
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * output; } ;
struct TYPE_4__ {TYPE_2__* encoder_component; scalar_t__ encoder_pool; } ;
typedef TYPE_1__ RASPIVID_STATE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(RASPIVID_STATE *VAR_0)
{

   if (VAR_0->encoder_pool)
   {
      FUNC_1(VAR_0->encoder_component->output[0], VAR_0->encoder_pool);
   }

   if (VAR_0->encoder_component)
   {
      FUNC_0(VAR_0->encoder_component);
      VAR_0->encoder_component = ((void*)0);
   }
}
