
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef unsigned int addr64_t ;
struct TYPE_2__ {unsigned int cache_linesize; } ;


 int FUNC_0 (void*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 () ;

void
FUNC_4(addr64_t VAR_0, unsigned VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_2(VAR_0, VAR_1);
 }
 else {
  uint64_t VAR_3 = FUNC_1()->cache_linesize;
  addr64_t VAR_4 = (VAR_0 + VAR_1 + VAR_3 -1) & ~(VAR_3 - 1);
  FUNC_3();
  while (VAR_0 < VAR_4) {
   FUNC_0((void *) (uintptr_t) VAR_0);
   VAR_0 += VAR_3;
  }
  FUNC_3();
 }
}
