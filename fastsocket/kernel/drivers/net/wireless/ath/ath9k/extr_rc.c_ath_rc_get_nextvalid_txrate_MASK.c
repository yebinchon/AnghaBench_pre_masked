
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_rate_table {int dummy; } ;
struct ath_rate_priv {int max_valid_rate; int* valid_rate_index; } ;



__attribute__((used)) static inline
int FUNC_0(const struct ath_rate_table *VAR_0,
    struct ath_rate_priv *VAR_1,
    u8 VAR_2,
    u8 *VAR_3)
{
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->max_valid_rate - 1; VAR_4++) {
  if (VAR_1->valid_rate_index[VAR_4] == VAR_2) {
   *VAR_3 = VAR_1->valid_rate_index[VAR_4+1];
   return 1;
  }
 }


 *VAR_3 = 0;

 return 0;
}
