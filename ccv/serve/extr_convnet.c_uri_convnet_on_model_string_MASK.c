
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* context; int * convnet_and_words; } ;
typedef TYPE_2__ convnet_param_parser_t ;
struct TYPE_3__ {int * image_net; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, char* VAR_1)
{
 convnet_param_parser_t* VAR_2 = (convnet_param_parser_t*)VAR_0;
 if (FUNC_0(VAR_1, "image-net-2012") == 0)
  VAR_2->convnet_and_words = &VAR_2->context->image_net[0];
 else if (FUNC_0(VAR_1, "image-net-2012-vgg-d") == 0)
  VAR_2->convnet_and_words = &VAR_2->context->image_net[1];
}
