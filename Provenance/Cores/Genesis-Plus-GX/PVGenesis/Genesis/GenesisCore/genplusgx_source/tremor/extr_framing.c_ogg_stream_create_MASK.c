
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serialno; int pageno; } ;
typedef TYPE_1__ ogg_stream_state ;


 TYPE_1__* FUNC_0 (int,int) ;

ogg_stream_state *FUNC_1(int VAR_0){
  ogg_stream_state *VAR_1=FUNC_0(1,sizeof(*VAR_1));
  VAR_1->serialno=VAR_0;
  VAR_1->pageno=-1;
  return VAR_1;
}
