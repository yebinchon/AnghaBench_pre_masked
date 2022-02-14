
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int addr64_t ;
struct TYPE_2__ {unsigned int cache_linesize; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(addr64_t VAR_0, unsigned int VAR_1)
{
 addr64_t VAR_2 = FUNC_2()->cache_linesize;
 addr64_t VAR_3 = (VAR_0 + VAR_1 + VAR_2 - 1) & ~(VAR_2 - 1);

 FUNC_3();

 while (VAR_0 < VAR_3) {
  FUNC_1(FUNC_0(VAR_0));
  VAR_0 += VAR_2;
 }

 FUNC_3();
}
