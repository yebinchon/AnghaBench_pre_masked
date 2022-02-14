
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ splitcache; scalar_t__ trigcache; } ;
typedef TYPE_1__ drft_lookup ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(drft_lookup *VAR_0){
  if(VAR_0){
    if(VAR_0->trigcache)FUNC_0(VAR_0->trigcache);
    if(VAR_0->splitcache)FUNC_0(VAR_0->splitcache);
    FUNC_1(VAR_0,0,sizeof(*VAR_0));
  }
}
