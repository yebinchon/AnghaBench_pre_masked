
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int memSizeActual; int memSize; } ;


 TYPE_1__* VAR_0 ;

uint64_t FUNC_0(void)
{
 uint64_t VAR_1;
 uint64_t VAR_2 = 512*1024*1024ULL;
 VAR_1 = VAR_0->memSizeActual;
 if (!VAR_1) {
  VAR_1 = VAR_0->memSize;
  if (VAR_1 < (2 * VAR_2)) VAR_2 >>= 1;
  VAR_1 = (VAR_1 + VAR_2 - 1) & ~(VAR_2 - 1);
  VAR_1 -= VAR_0->memSize;
 }
 return (VAR_1);
}
