
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int * key; } ;
struct TYPE_6__ {int frame; int (* leq ) (int ,int ,int *) ;TYPE_1__ head; } ;
typedef TYPE_1__ DictNode ;
typedef int DictKey ;
typedef TYPE_2__ Dict ;


 int FUNC_0 (int ,int ,int *) ;

DictNode *FUNC_1( Dict *VAR_0, DictKey VAR_1 )
{
 DictNode *VAR_2 = &VAR_0->head;

 do {
  VAR_2 = VAR_2->next;
 } while( VAR_2->key != ((void*)0) && ! (*VAR_0->leq)(VAR_0->frame, VAR_1, VAR_2->key));

 return VAR_2;
}
