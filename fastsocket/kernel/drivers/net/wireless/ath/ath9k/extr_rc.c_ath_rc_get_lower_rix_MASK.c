
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ath_rate_priv {size_t max_valid_rate; scalar_t__* valid_rate_index; } ;
typedef size_t int8_t ;



__attribute__((used)) static inline int
FUNC_0(struct ath_rate_priv *VAR_0,
       u8 VAR_1, u8 *VAR_2)
{
 int8_t VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_0->max_valid_rate ; VAR_3++) {
  if (VAR_0->valid_rate_index[VAR_3] == VAR_1) {
   *VAR_2 = VAR_0->valid_rate_index[VAR_3-1];
   return 1;
  }
 }

 return 0;
}
