
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ ogg_reference ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static ogg_reference *FUNC_1(ogg_reference *VAR_0, ogg_reference *VAR_1){
  if(!VAR_0)return VAR_1;

  while(VAR_0->next){
    VAR_0=VAR_0->next;
  }
  VAR_0->next=VAR_1;
  return FUNC_0(VAR_1);
}
