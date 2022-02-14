
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ key_defined; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

unsigned FUNC_2(const LodePNGColorMode* VAR_0)
{
  return VAR_0->key_defined
      || FUNC_1(VAR_0)
      || FUNC_0(VAR_0);
}
