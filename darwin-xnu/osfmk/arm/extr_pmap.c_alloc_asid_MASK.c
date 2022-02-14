
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static unsigned int
FUNC_5(
 void)
{
 unsigned int VAR_5;

 FUNC_3(&VAR_4);
 for (VAR_5 = 0; VAR_5 < (VAR_1 / (sizeof(uint32_t) * VAR_2)); VAR_5++) {
  unsigned int VAR_6 = FUNC_1(VAR_3[VAR_5]);
  if (VAR_6 > 0) {
   VAR_6 -= 1;
   VAR_3[VAR_5] &= ~(1 << VAR_6);
   FUNC_4(&VAR_4);





   FUNC_0(((VAR_5 * sizeof(uint32_t) * VAR_2 + VAR_6) % VAR_0) != 0);






   return (VAR_5 * sizeof(uint32_t) * VAR_2 + VAR_6);
  }
 }
 FUNC_4(&VAR_4);




 FUNC_2("alloc_asid(): out of ASID number");
 return VAR_1;
}
