
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_o_s; scalar_t__ lacing_fill; scalar_t__ e_o_s; } ;
typedef TYPE_1__ ogg_stream_state ;
typedef int ogg_page ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;

int FUNC_2(ogg_stream_state *VAR_0, ogg_page *VAR_1, int VAR_2){
  int VAR_3=0;
  if(FUNC_0(VAR_0)) return 0;

  if((VAR_0->e_o_s&&VAR_0->lacing_fill) ||
     (VAR_0->lacing_fill&&!VAR_0->b_o_s))
    VAR_3=1;

  return(FUNC_1(VAR_0,VAR_1,VAR_3,VAR_2));
}
