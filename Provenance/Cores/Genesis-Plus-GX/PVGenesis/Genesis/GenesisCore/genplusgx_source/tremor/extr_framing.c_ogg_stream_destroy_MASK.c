
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int body_tail; int header_tail; } ;
typedef TYPE_1__ ogg_stream_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(ogg_stream_state *VAR_1){
  if(VAR_1){
    FUNC_2(VAR_1->header_tail);
    FUNC_2(VAR_1->body_tail);
    FUNC_1(VAR_1,0,sizeof(*VAR_1));
    FUNC_0(VAR_1);
  }
  return VAR_0;
}
