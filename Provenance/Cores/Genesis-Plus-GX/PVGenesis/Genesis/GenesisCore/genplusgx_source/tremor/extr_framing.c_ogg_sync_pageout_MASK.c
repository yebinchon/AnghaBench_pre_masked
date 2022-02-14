
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unsynced; } ;
typedef TYPE_1__ ogg_sync_state ;
typedef int ogg_page ;


 int VAR_0 ;
 long FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(ogg_sync_state *VAR_1, ogg_page *VAR_2){





  while(1){
    long VAR_3=FUNC_0(VAR_1,VAR_2);
    if(VAR_3>0){

      return 1;
    }
    if(VAR_3==0){

      return 0;
    }


    if(!VAR_1->unsynced){
      VAR_1->unsynced=1;
      return VAR_0;
    }



  }
}
