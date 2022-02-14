
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unsynced; } ;
typedef TYPE_1__ ogg_sync_state ;
typedef int ogg_page ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 long FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2(ogg_sync_state *VAR_0, ogg_page *VAR_1){

  if(FUNC_0(VAR_0))return 0;





  for(;;){
    long VAR_2=FUNC_1(VAR_0,VAR_1);
    if(VAR_2>0){

      return(1);
    }
    if(VAR_2==0){

      return(0);
    }


    if(!VAR_0->unsynced){
      VAR_0->unsynced=1;
      return(-1);
    }



  }
}
