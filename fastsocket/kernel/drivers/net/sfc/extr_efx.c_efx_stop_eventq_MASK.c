
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_channel {int enabled; int napi_str; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct efx_channel *VAR_0)
{
 if (!VAR_0->enabled)
  return;

 FUNC_0(&VAR_0->napi_str);
 VAR_0->enabled = 0;
}
