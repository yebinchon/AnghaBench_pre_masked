
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* lengthlist; struct TYPE_5__* quantlist; } ;
typedef TYPE_1__ static_codebook ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(static_codebook *VAR_0){
  if(VAR_0->quantlist)FUNC_0(VAR_0->quantlist);
  if(VAR_0->lengthlist)FUNC_0(VAR_0->lengthlist);
  FUNC_1(VAR_0,0,sizeof(*VAR_0));
  FUNC_0(VAR_0);
}
