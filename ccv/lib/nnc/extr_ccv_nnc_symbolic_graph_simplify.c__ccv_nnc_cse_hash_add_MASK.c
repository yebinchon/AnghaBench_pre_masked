
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int hash; int d; int ifbit; } ;
typedef TYPE_1__ ccv_nnc_cse_hash_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ccv_nnc_cse_hash_t* const VAR_0, uint64_t VAR_1, int VAR_2, const int VAR_3)
{
 FUNC_0(VAR_1 > 0);
 int VAR_4, VAR_5;
 VAR_4 = (VAR_1 - 1) % VAR_3;
 for (VAR_5 = 0; ; VAR_5++, VAR_4++)
 {
  if (VAR_4 >= VAR_3)
   VAR_4 = 0;
  if (VAR_0[VAR_4].hash == VAR_1)
   return;
  if (VAR_0[VAR_4].hash == 0)
  {

   VAR_0[VAR_4].d = VAR_2;
   VAR_0[VAR_4].ifbit = VAR_5;
   VAR_0[VAR_4].hash = VAR_1;
   return;
  }
  if (VAR_5 > VAR_0[VAR_4].ifbit)
  {
   const ccv_nnc_cse_hash_t VAR_6 = VAR_0[VAR_4];

   VAR_0[VAR_4].d = VAR_2;
   VAR_0[VAR_4].ifbit = VAR_5;
   VAR_0[VAR_4].hash = VAR_1;
   VAR_2 = VAR_6.d;
   VAR_5 = VAR_6.ifbit;
   VAR_1 = VAR_6.hash;
  }
 }
}
