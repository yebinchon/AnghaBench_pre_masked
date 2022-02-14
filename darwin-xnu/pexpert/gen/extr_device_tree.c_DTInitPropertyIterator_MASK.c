
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ currentIndex; int * currentProperty; int entry; } ;
typedef TYPE_1__* DTPropertyIterator ;
typedef int DTEntry ;


 int VAR_0 ;

int
FUNC_0(const DTEntry VAR_1, DTPropertyIterator VAR_2)
{

 VAR_2->entry = VAR_1;
 VAR_2->currentProperty = ((void*)0);
 VAR_2->currentIndex = 0;
 return VAR_0;
}
