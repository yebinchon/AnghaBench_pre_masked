
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ currentIndex; int * savedScope; int * currentEntry; void* currentScope; void* outerScope; } ;
typedef void* RealDTEntry ;
typedef TYPE_1__* DTEntryIterator ;
typedef int * DTEntry ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(const DTEntry VAR_4, DTEntryIterator VAR_5)
{
 if (!VAR_0) {
  return VAR_2;
 }

 if (VAR_4 != ((void*)0)) {
  VAR_5->outerScope = (RealDTEntry) VAR_4;
  VAR_5->currentScope = (RealDTEntry) VAR_4;
 } else {
  VAR_5->outerScope = VAR_1;
  VAR_5->currentScope = VAR_1;
 }
 VAR_5->currentEntry = ((void*)0);
 VAR_5->savedScope = ((void*)0);
 VAR_5->currentIndex = 0;

 return VAR_3;
}
