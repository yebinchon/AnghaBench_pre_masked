
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {size_t* txp_pd_table; size_t** tmpL; } ;
struct ath5k_hw {TYPE_1__ ah_txpower; } ;
typedef size_t s16 ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct ath5k_hw *VAR_1, s16* VAR_2,
       s16 *VAR_3)
{
 u8 *VAR_4 = VAR_1->ah_txpower.txp_pd_table;
 u8 *VAR_5 = VAR_1->ah_txpower.tmpL[0];
 u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 s16 VAR_11, VAR_12;


 VAR_11 = VAR_2[0];
 VAR_6 = VAR_5[0];

 VAR_12 = VAR_3[0];
 VAR_7 = VAR_5[VAR_3[0] - VAR_2[0]];


 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  VAR_4[VAR_8++] = VAR_6;


 VAR_9 = VAR_11;
 for (VAR_10 = 0; VAR_9 <= VAR_12 &&
      VAR_8 < VAR_0; VAR_10++) {
  VAR_4[VAR_8++] = VAR_5[VAR_10];
  VAR_9++;
 }


 while (VAR_8 < VAR_0)
  VAR_4[VAR_8++] = VAR_7;

}
