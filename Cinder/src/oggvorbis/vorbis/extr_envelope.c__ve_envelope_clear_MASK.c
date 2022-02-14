
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mark; int filter; int mdct_win; TYPE_1__* band; int mdct; } ;
typedef TYPE_2__ envelope_lookup ;
struct TYPE_5__ {int window; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

void FUNC_3(envelope_lookup *VAR_1){
  int VAR_2;
  FUNC_1(&VAR_1->mdct);
  for(VAR_2=0;VAR_2<VAR_0;VAR_2++)
    FUNC_0(VAR_1->band[VAR_2].window);
  FUNC_0(VAR_1->mdct_win);
  FUNC_0(VAR_1->filter);
  FUNC_0(VAR_1->mark);
  FUNC_2(VAR_1,0,sizeof(*VAR_1));
}
