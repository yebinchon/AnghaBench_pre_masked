
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long localtop; long localalloc; void* localstore; struct alloc_chain* reap; int totaluse; } ;
typedef TYPE_1__ vorbis_block ;
struct alloc_chain {void* ptr; struct alloc_chain* next; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

void *FUNC_1(vorbis_block *VAR_1,long VAR_2){
  VAR_2=(VAR_2+(VAR_0-1)) & ~(VAR_0-1);
  if(VAR_2+VAR_1->localtop>VAR_1->localalloc){

    if(VAR_1->localstore){
      struct alloc_chain *VAR_3=FUNC_0(sizeof(*VAR_3));
      VAR_1->totaluse+=VAR_1->localtop;
      VAR_3->next=VAR_1->reap;
      VAR_3->ptr=VAR_1->localstore;
      VAR_1->reap=VAR_3;
    }

    VAR_1->localalloc=VAR_2;
    VAR_1->localstore=FUNC_0(VAR_1->localalloc);
    VAR_1->localtop=0;
  }
  {
    void *VAR_4=(void *)(((char *)VAR_1->localstore)+VAR_1->localtop);
    VAR_1->localtop+=VAR_2;
    return VAR_4;
  }
}
