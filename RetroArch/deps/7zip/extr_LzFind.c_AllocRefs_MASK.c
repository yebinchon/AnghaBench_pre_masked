
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef int CLzRef ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static CLzRef* FUNC_1(size_t VAR_0, ISzAlloc *VAR_1)
{
  size_t VAR_2 = (size_t)VAR_0 * sizeof(CLzRef);
  if (VAR_2 / sizeof(CLzRef) != VAR_0)
    return ((void*)0);
  return (CLzRef *)VAR_1->Alloc(VAR_1, VAR_2);
}
