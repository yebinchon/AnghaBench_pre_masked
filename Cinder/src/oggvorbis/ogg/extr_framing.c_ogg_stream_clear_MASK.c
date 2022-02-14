
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ granule_vals; scalar_t__ lacing_vals; scalar_t__ body_data; } ;
typedef TYPE_1__ ogg_stream_state ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(ogg_stream_state *VAR_0){
  if(VAR_0){
    if(VAR_0->body_data)FUNC_0(VAR_0->body_data);
    if(VAR_0->lacing_vals)FUNC_0(VAR_0->lacing_vals);
    if(VAR_0->granule_vals)FUNC_0(VAR_0->granule_vals);

    FUNC_1(VAR_0,0,sizeof(*VAR_0));
  }
  return(0);
}
