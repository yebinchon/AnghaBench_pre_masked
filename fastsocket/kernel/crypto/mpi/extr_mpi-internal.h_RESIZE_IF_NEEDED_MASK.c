
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int alloced; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(MPI VAR_0, unsigned VAR_1)
{
 if (VAR_0->alloced < VAR_1)
  return FUNC_0(VAR_0,VAR_1);
 return 0;
}
