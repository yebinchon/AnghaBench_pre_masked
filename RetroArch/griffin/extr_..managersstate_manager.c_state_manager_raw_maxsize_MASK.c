
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(size_t VAR_1)
{

   const int VAR_2 = VAR_0 * sizeof(uint16_t);

   size_t VAR_3 = (VAR_1 + sizeof(uint16_t) - 1) & -sizeof(uint16_t);

   size_t VAR_4 = (VAR_1 + VAR_2 - 1) / VAR_2;
   return VAR_3 + VAR_4 * sizeof(uint16_t) * 2 + sizeof(uint16_t) *
      3;
}
