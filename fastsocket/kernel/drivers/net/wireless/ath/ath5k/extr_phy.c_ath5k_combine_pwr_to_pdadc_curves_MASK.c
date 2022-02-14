
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {size_t* txp_pd_table; size_t** tmpL; int txp_min_idx; } ;
struct ath5k_hw {TYPE_1__ ah_txpower; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (size_t,size_t) ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 (struct ath5k_hw*,int ) ;
 int FUNC_2 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct ath5k_hw *VAR_9,
   s16 *VAR_10, s16 *VAR_11, u8 VAR_12)
{
 u8 VAR_13[VAR_0];
 u8 *VAR_14 = VAR_9->ah_txpower.txp_pd_table;
 u8 *VAR_15;
 s16 VAR_16;
 u8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u8 VAR_23;




 VAR_23 = (u8) FUNC_1(VAR_9, VAR_2) &
  VAR_7;


 for (VAR_20 = 0, VAR_17 = 0; VAR_20 < VAR_12; VAR_20++) {
  VAR_15 = VAR_9->ah_txpower.tmpL[VAR_20];

  if (VAR_20 == VAR_12 - 1)


   VAR_13[VAR_20] = VAR_11[VAR_20] + 4;
  else


   VAR_13[VAR_20] =
    (VAR_11[VAR_20] + VAR_10[VAR_20 + 1]) / 2;



  if (VAR_13[VAR_20] > VAR_8)
   VAR_13[VAR_20] = VAR_8;



  if (VAR_20 == 0)
   VAR_16 = 0;
  else

   VAR_16 = (VAR_13[VAR_20 - 1] - VAR_10[VAR_20]) -
       VAR_23;


  if ((VAR_15[1] - VAR_15[0]) > 1)
   VAR_19 = VAR_15[1] - VAR_15[0];
  else
   VAR_19 = 1;



  while ((VAR_16 < 0) && (VAR_17 < 128)) {
   s16 VAR_24 = VAR_15[0] + VAR_16 * VAR_19;
   VAR_14[VAR_17++] = (VAR_24 < 0) ? 0 : (u8) VAR_24;
   VAR_16++;
  }


  VAR_18 = VAR_13[VAR_20] + VAR_23 - VAR_10[VAR_20];

  VAR_22 = VAR_11[VAR_20] - VAR_10[VAR_20];
  VAR_21 = (VAR_18 < VAR_22) ? VAR_18 : VAR_22;


  while (VAR_16 < VAR_21 && VAR_17 < 128)
   VAR_14[VAR_17++] = VAR_15[VAR_16++];


  if (VAR_18 <= VAR_21)
   continue;


  if ((VAR_15[VAR_22 - 1] - VAR_15[VAR_22 - 2]) > 1)
   VAR_19 = VAR_15[VAR_22 - 1] -
      VAR_15[VAR_22 - 2];
  else
   VAR_19 = 1;


  while ((VAR_16 < (s16) VAR_18) &&
  (VAR_17 < VAR_1 * 2)) {
   s16 VAR_25 = VAR_15[VAR_22 - 1] +
     (VAR_16 - VAR_21) * VAR_19;
   VAR_14[VAR_17++] = (VAR_25 > 127) ? 127 : (u8) VAR_25;
   VAR_16++;
  }
 }

 while (VAR_20 < VAR_0) {
  VAR_13[VAR_20] = VAR_13[VAR_20 - 1];
  VAR_20++;
 }

 while (VAR_17 < VAR_1 * 2) {
  VAR_14[VAR_17] = VAR_14[VAR_17 - 1];
  VAR_17++;
 }


 FUNC_2(VAR_9,
  FUNC_0(VAR_23,
   VAR_7) |
  FUNC_0(VAR_13[0],
   VAR_3) |
  FUNC_0(VAR_13[1],
   VAR_4) |
  FUNC_0(VAR_13[2],
   VAR_5) |
  FUNC_0(VAR_13[3],
   VAR_6),
  VAR_2);


 VAR_9->ah_txpower.txp_min_idx = VAR_10[0];

}
