
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_rate_table {TYPE_1__* info; } ;
struct ath_rate_priv {int max_valid_rate; int* valid_rate_index; struct ath_rate_table* rate_table; } ;
struct TYPE_2__ {scalar_t__ ratekbps; } ;



__attribute__((used)) static void FUNC_0(struct ath_rate_priv *VAR_0)
{
 const struct ath_rate_table *VAR_1 = VAR_0->rate_table;
 u8 VAR_2, VAR_3, VAR_4, VAR_5;

 for (VAR_2 = VAR_0->max_valid_rate - 1; VAR_2 > 0; VAR_2--) {
  for (VAR_3 = 0; VAR_3 <= VAR_2-1; VAR_3++) {
   VAR_4 = VAR_0->valid_rate_index[VAR_3];
   VAR_5 = VAR_0->valid_rate_index[VAR_3+1];

   if (VAR_1->info[VAR_4].ratekbps >
    VAR_1->info[VAR_5].ratekbps) {
    VAR_0->valid_rate_index[VAR_3] = VAR_5;
    VAR_0->valid_rate_index[VAR_3+1] = VAR_4;
   }
  }
 }
}
