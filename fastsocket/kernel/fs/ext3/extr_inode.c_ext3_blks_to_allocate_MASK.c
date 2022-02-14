
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p; } ;
typedef TYPE_1__ Indirect ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(Indirect *VAR_0, int VAR_1, unsigned long VAR_2,
  int VAR_3)
{
 unsigned long VAR_4 = 0;





 if (VAR_1 > 0) {

  if (VAR_2 < VAR_3 + 1)
   VAR_4 += VAR_2;
  else
   VAR_4 += VAR_3 + 1;
  return VAR_4;
 }

 VAR_4++;
 while (VAR_4 < VAR_2 && VAR_4 <= VAR_3 &&
  FUNC_0(*(VAR_0[0].p + VAR_4)) == 0) {
  VAR_4++;
 }
 return VAR_4;
}
