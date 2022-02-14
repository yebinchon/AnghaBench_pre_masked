
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; void* splitcache; void* trigcache; } ;
typedef TYPE_1__ drft_lookup ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,void*,void*) ;

void FUNC_2(drft_lookup *VAR_0,int VAR_1){
  VAR_0->n=VAR_1;
  VAR_0->trigcache=FUNC_0(3*VAR_1,sizeof(*VAR_0->trigcache));
  VAR_0->splitcache=FUNC_0(32,sizeof(*VAR_0->splitcache));
  FUNC_1(VAR_1, VAR_0->trigcache, VAR_0->splitcache);
}
