
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ keepSizeBefore; scalar_t__ keepSizeAfter; scalar_t__ blockSize; unsigned char* bufferBase; scalar_t__ directInput; } ;
struct TYPE_8__ {scalar_t__ (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CMatchFinder ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;

__attribute__((used)) static int FUNC_2(CMatchFinder *VAR_0, uint32_t VAR_1, ISzAlloc *VAR_2)
{
  uint32_t VAR_3 = VAR_0->keepSizeBefore + VAR_0->keepSizeAfter + VAR_1;
  if (VAR_0->directInput)
  {
    VAR_0->blockSize = VAR_3;
    return 1;
  }
  if (!VAR_0->bufferBase || VAR_0->blockSize != VAR_3)
  {
    FUNC_0(VAR_0, VAR_2);
    VAR_0->blockSize = VAR_3;
    VAR_0->bufferBase = (unsigned char*)VAR_2->Alloc(VAR_2, (size_t)VAR_3);
  }
  return (VAR_0->bufferBase != ((void*)0));
}
