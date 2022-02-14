
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char const* mmal_name; } ;
typedef TYPE_1__ MMALOMX_PARAM_TRANSLATION_T ;


 TYPE_1__* FUNC_0 (int ) ;

const char *FUNC_1(uint32_t VAR_0)
{
   const MMALOMX_PARAM_TRANSLATION_T *VAR_1 = FUNC_0(VAR_0);
   return VAR_1 ? VAR_1->mmal_name : 0;
}
