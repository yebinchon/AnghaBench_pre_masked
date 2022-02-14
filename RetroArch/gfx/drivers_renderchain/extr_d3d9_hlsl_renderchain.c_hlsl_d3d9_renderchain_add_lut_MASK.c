
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chain; } ;
typedef TYPE_1__ hlsl_renderchain_t ;
typedef int d3d9_renderchain_t ;


 int FUNC_0 (int *,char const*,char const*,int) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0,
      const char *VAR_1, const char *VAR_2, bool VAR_3)
{
   hlsl_renderchain_t *VAR_4 = (hlsl_renderchain_t*)VAR_0;
   d3d9_renderchain_t *VAR_5 = (d3d9_renderchain_t*)&VAR_4->chain;

   return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
}
