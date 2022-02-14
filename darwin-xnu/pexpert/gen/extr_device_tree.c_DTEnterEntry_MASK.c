
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct DTSavedScope {int dummy; } ;
struct TYPE_5__ {scalar_t__ currentIndex; TYPE_1__* savedScope; int * currentEntry; int * currentScope; } ;
struct TYPE_4__ {scalar_t__ index; int * entry; int * scope; struct TYPE_4__* nextScope; } ;
typedef TYPE_1__* DTSavedScopePtr ;
typedef TYPE_2__* DTEntryIterator ;
typedef int * DTEntry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

int
FUNC_1(DTEntryIterator VAR_2, DTEntry VAR_3)
{
 DTSavedScopePtr VAR_4;

 if (VAR_3 == ((void*)0)) {
  return VAR_0;
 }
 VAR_4 = (DTSavedScopePtr) FUNC_0(sizeof(struct DTSavedScope));
 VAR_4->nextScope = VAR_2->savedScope;
 VAR_4->scope = VAR_2->currentScope;
 VAR_4->entry = VAR_2->currentEntry;
 VAR_4->index = VAR_2->currentIndex;

 VAR_2->currentScope = VAR_3;
 VAR_2->currentEntry = ((void*)0);
 VAR_2->savedScope = VAR_4;
 VAR_2->currentIndex = 0;

 return VAR_1;
}
