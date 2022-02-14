
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ifbit; int const hash; int d; } ;
typedef TYPE_1__ ccv_nnc_cse_hash_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(ccv_nnc_cse_hash_t* const VAR_0, const uint64_t VAR_1, const int VAR_2)
{
 FUNC_0(VAR_1 > 0);
 int VAR_3, VAR_4;
 VAR_3 = (VAR_1 - 1) % VAR_2;
 for (VAR_4 = 0; ; VAR_4++, VAR_3++)
 {
  if (VAR_3 >= VAR_2)
   VAR_3 = 0;
  if (VAR_4 > VAR_0[VAR_3].ifbit)
   return -1;
  if (VAR_0[VAR_3].hash == VAR_1)
   return VAR_0[VAR_3].d;
 }
}
