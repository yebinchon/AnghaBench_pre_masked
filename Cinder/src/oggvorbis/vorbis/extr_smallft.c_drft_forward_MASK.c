
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int splitcache; scalar_t__ trigcache; } ;
typedef TYPE_1__ drft_lookup ;


 int FUNC_0 (int,float*,scalar_t__,scalar_t__,int ) ;

void FUNC_1(drft_lookup *VAR_0,float *VAR_1){
  if(VAR_0->n==1)return;
  FUNC_0(VAR_0->n,VAR_1,VAR_0->trigcache,VAR_0->trigcache+VAR_0->n,VAR_0->splitcache);
}
