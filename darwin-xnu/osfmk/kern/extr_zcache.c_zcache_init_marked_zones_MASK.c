
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cpu_cache_enable_when_ready; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

void FUNC_1(void){
 unsigned int VAR_3;
 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3 ++){
  if(VAR_2[VAR_3].cpu_cache_enable_when_ready){
   FUNC_0(&VAR_2[VAR_3]);
   VAR_2[VAR_3].cpu_cache_enable_when_ready = VAR_0;
  }
 }
}
