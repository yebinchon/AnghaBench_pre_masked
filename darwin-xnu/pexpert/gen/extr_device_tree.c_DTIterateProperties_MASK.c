
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int currentIndex; TYPE_2__* currentProperty; TYPE_1__* entry; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {int nProperties; } ;
typedef TYPE_2__ DeviceTreeNodeProperty ;
typedef TYPE_3__* DTPropertyIterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;

int
FUNC_1(DTPropertyIterator VAR_2, char **VAR_3)
{
 if (VAR_2->currentIndex >= VAR_2->entry->nProperties) {
  *VAR_3 = ((void*)0);
  return VAR_0;
 } else {
  VAR_2->currentIndex++;
  if (VAR_2->currentIndex == 1) {
   VAR_2->currentProperty = (DeviceTreeNodeProperty *) (VAR_2->entry + 1);
  } else {
   VAR_2->currentProperty = FUNC_0(VAR_2->currentProperty);
  }
  *VAR_3 = VAR_2->currentProperty->name;
  return VAR_1;
 }
}
