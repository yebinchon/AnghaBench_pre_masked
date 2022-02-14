
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bitrev; scalar_t__ trig; } ;
typedef TYPE_1__ mdct_lookup ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(mdct_lookup *VAR_0){
  if(VAR_0){
    if(VAR_0->trig)FUNC_0(VAR_0->trig);
    if(VAR_0->bitrev)FUNC_0(VAR_0->bitrev);
    FUNC_1(VAR_0,0,sizeof(*VAR_0));
  }
}
