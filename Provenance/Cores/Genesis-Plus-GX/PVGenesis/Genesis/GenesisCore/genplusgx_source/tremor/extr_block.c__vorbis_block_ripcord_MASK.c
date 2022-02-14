
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct alloc_chain* reap; scalar_t__ localtop; scalar_t__ totaluse; scalar_t__ localalloc; int localstore; } ;
typedef TYPE_1__ vorbis_block ;
struct alloc_chain {struct alloc_chain* ptr; struct alloc_chain* next; } ;


 int FUNC_0 (struct alloc_chain*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct alloc_chain*,int ,int) ;

void FUNC_3(vorbis_block *VAR_0){

  struct alloc_chain *VAR_1=VAR_0->reap;
  while(VAR_1){
    struct alloc_chain *VAR_2=VAR_1->next;
    FUNC_0(VAR_1->ptr);
    FUNC_2(VAR_1,0,sizeof(*VAR_1));
    FUNC_0(VAR_1);
    VAR_1=VAR_2;
  }

  if(VAR_0->totaluse){
    VAR_0->localstore=FUNC_1(VAR_0->localstore,VAR_0->totaluse+VAR_0->localalloc);
    VAR_0->localalloc+=VAR_0->totaluse;
    VAR_0->totaluse=0;
  }


  VAR_0->localtop=0;
  VAR_0->reap=((void*)0);
}
