
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct DTSavedScope {int dummy; } ;
struct TYPE_5__ {scalar_t__ currentIndex; int * currentEntry; int outerScope; int currentScope; TYPE_1__* savedScope; } ;
struct TYPE_4__ {struct TYPE_4__* nextScope; } ;
typedef TYPE_1__* DTSavedScopePtr ;
typedef TYPE_2__* DTEntryIterator ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;

int
FUNC_1(DTEntryIterator VAR_2)
{
 VAR_2->currentEntry = ((void*)0);
 VAR_2->currentIndex = 0;
 return VAR_0;
}
