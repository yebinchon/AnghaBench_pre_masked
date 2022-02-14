
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long windowstart; unsigned long windowbase; int wmask; int* areg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int*) ;
 scalar_t__ FUNC_1 (void*,int*,int) ;

int
FUNC_2(struct pt_regs *VAR_1)
{
 const unsigned long VAR_2 = VAR_1->windowstart;
 const unsigned long VAR_3 = VAR_1->windowbase;
 unsigned long VAR_4 = 0;
 unsigned long VAR_5;
 int VAR_6 = 1;
 int VAR_7;



 if (VAR_1->wmask == 1)
  return 0;



 VAR_5 = (VAR_2 >> VAR_3) | (VAR_2 << (VAR_0 / 4 - VAR_3));
 VAR_7 = (VAR_0 / 4) - (VAR_1->wmask >> 4);



 if ((VAR_1->wmask & 2) == 0)
  if (FUNC_0(VAR_4, (int*)(VAR_1->areg[VAR_7 * 4 + 1] - 12)))
   goto errout;



 while (VAR_7 < VAR_0 / 4) {

  int VAR_8 = (VAR_5 >> VAR_7);
  int VAR_9 = 0;



  if (VAR_8 & 2) {
   VAR_9 = 1;

  } else if (VAR_8 & 4) {
   if (FUNC_1((void*)(VAR_4 - 32),
        &VAR_1->areg[(VAR_7 + 1) * 4], 16))
    goto errout;
   VAR_9 = 2;

  } else if (VAR_8 & 8) {
   if (FUNC_1((void*)(VAR_4 - 48),
        &VAR_1->areg[(VAR_7 + 1) * 4], 32))
    goto errout;
   VAR_9 = 3;
  }



  VAR_4 = VAR_1->areg[((VAR_7 + VAR_9) * 4 + 1) % VAR_0];
  if (FUNC_1((void*)(VAR_4 - 16), &VAR_1->areg[VAR_7 * 4], 16))
   goto errout;



  VAR_4 = VAR_1->areg[VAR_7 * 4 + 1];
  VAR_7 += VAR_9;
 }

 VAR_1->wmask = 1;
 VAR_1->windowstart = 1 << VAR_3;

 return 0;

errout:
 return VAR_6;
}
