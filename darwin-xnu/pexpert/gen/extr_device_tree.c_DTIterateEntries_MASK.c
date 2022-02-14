
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nChildren; } ;
struct TYPE_4__ {int currentIndex; int * currentEntry; TYPE_2__* currentScope; } ;
typedef TYPE_1__* DTEntryIterator ;
typedef int * DTEntry ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2(DTEntryIterator VAR_2, DTEntry *VAR_3)
{
 if (VAR_2->currentIndex >= VAR_2->currentScope->nChildren) {
  *VAR_3 = ((void*)0);
  return VAR_0;
 } else {
  VAR_2->currentIndex++;
  if (VAR_2->currentIndex == 1) {
   VAR_2->currentEntry = FUNC_0(VAR_2->currentScope);
  } else {
   VAR_2->currentEntry = FUNC_1(VAR_2->currentEntry);
  }
  *VAR_3 = VAR_2->currentEntry;
  return VAR_1;
 }
}
