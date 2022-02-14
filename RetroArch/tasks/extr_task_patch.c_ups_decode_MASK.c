
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct ups_data {int dummy; } ;


 int FUNC_0 (struct ups_data*) ;

__attribute__((used)) static uint64_t FUNC_1(struct ups_data *VAR_0)
{
   uint64_t VAR_1 = 0, VAR_2 = 1;
   while (1)
   {
      uint8_t VAR_3 = FUNC_0(VAR_0);
      VAR_1 += (VAR_3 & 0x7f) * VAR_2;

      if (VAR_3 & 0x80)
         break;
      VAR_2 <<= 7;
      VAR_1 += VAR_2;
   }
   return VAR_1;
}
