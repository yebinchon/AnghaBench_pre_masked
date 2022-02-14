
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct DTSavedScope {int dummy; } ;
struct TYPE_6__ {int currentEntry; int currentIndex; int currentScope; TYPE_1__* savedScope; } ;
struct TYPE_5__ {int index; int entry; int scope; struct TYPE_5__* nextScope; } ;
typedef TYPE_1__* DTSavedScopePtr ;
typedef TYPE_2__* DTEntryIterator ;
typedef int DTEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1(DTEntryIterator VAR_2, DTEntry *VAR_3)
{
 DTSavedScopePtr VAR_4;

 VAR_4 = VAR_2->savedScope;
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }
 VAR_2->savedScope = VAR_4->nextScope;
 VAR_2->currentScope = VAR_4->scope;
 VAR_2->currentEntry = VAR_4->entry;
 VAR_2->currentIndex = VAR_4->index;
 *VAR_3 = VAR_2->currentEntry;

 FUNC_0(VAR_4, sizeof(struct DTSavedScope));

 return VAR_1;
}
