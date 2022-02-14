
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int alloced; scalar_t__ nbits; scalar_t__ flags; scalar_t__ sign; scalar_t__ nlimbs; int * d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int * FUNC_2 (unsigned int) ;

MPI FUNC_3(unsigned VAR_1)
{
 MPI VAR_2;

 VAR_2 = (MPI) FUNC_1(sizeof *VAR_2,VAR_0);
 if (!VAR_2)
  return VAR_2;

 if (VAR_1) {
  VAR_2->d = FUNC_2(VAR_1);
  if (!VAR_2->d) {
   FUNC_0(VAR_2);
   return ((void*)0);
  }
 }
 else {
  VAR_2->d = ((void*)0);
 }

 VAR_2->alloced = VAR_1;
 VAR_2->nlimbs = 0;
 VAR_2->sign = 0;
 VAR_2->flags = 0;
 VAR_2->nbits = 0;
 return VAR_2;
}
