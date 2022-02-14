
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int body_storage; int lacing_storage; int serialno; void* granule_vals; void* lacing_vals; void* body_data; } ;
typedef TYPE_1__ ogg_stream_state ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(ogg_stream_state *VAR_0,int VAR_1){
  if(VAR_0){
    FUNC_1(VAR_0,0,sizeof(*VAR_0));
    VAR_0->body_storage=16*1024;
    VAR_0->lacing_storage=1024;

    VAR_0->body_data=FUNC_0(VAR_0->body_storage*sizeof(*VAR_0->body_data));
    VAR_0->lacing_vals=FUNC_0(VAR_0->lacing_storage*sizeof(*VAR_0->lacing_vals));
    VAR_0->granule_vals=FUNC_0(VAR_0->lacing_storage*sizeof(*VAR_0->granule_vals));

    if(!VAR_0->body_data || !VAR_0->lacing_vals || !VAR_0->granule_vals){
      FUNC_2(VAR_0);
      return -1;
    }

    VAR_0->serialno=VAR_1;

    return(0);
  }
  return(-1);
}
