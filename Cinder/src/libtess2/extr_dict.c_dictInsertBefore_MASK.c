
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nodePool; int frame; int (* leq ) (int ,int *,int *) ;} ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; int * key; } ;
typedef TYPE_1__ DictNode ;
typedef int * DictKey ;
typedef TYPE_2__ Dict ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;

DictNode *FUNC_2( Dict *VAR_0, DictNode *VAR_1, DictKey VAR_2 )
{
 DictNode *VAR_3;

 do {
  VAR_1 = VAR_1->prev;
 } while( VAR_1->key != ((void*)0) && ! (*VAR_0->leq)(VAR_0->frame, VAR_1->key, VAR_2));

 VAR_3 = (DictNode *)FUNC_0( VAR_0->nodePool );
 if (VAR_3 == ((void*)0)) return ((void*)0);

 VAR_3->key = VAR_2;
 VAR_3->next = VAR_1->next;
 VAR_1->next->prev = VAR_3;
 VAR_3->prev = VAR_1;
 VAR_1->next = VAR_3;

 return VAR_3;
}
