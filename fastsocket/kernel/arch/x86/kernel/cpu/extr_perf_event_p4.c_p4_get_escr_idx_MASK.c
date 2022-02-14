
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int,char*,unsigned int) ;
 unsigned int* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_3 >= VAR_0 ||
   !VAR_1[VAR_3] ||
   VAR_1[VAR_3] != VAR_2)) {
  FUNC_1(1, "P4 PMU: Wrong address passed: %x\n", VAR_2);
  return -1;
 }

 return VAR_3;
}
