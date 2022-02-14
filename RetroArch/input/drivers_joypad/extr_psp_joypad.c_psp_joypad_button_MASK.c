
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_2, uint16_t VAR_3)
{
   if (VAR_2 >= VAR_0)
      return 0;

   return (VAR_1[VAR_2] & (FUNC_0(1) << VAR_3));
}
