
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct chan_centers {int synth_center; } ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int FUNC_3 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_4 (struct ath_hw*,int,int*,int*) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_6,
          struct ath9k_channel *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = 0x64000000;
 struct chan_centers VAR_12;

 if (FUNC_0(VAR_7))
  VAR_11 = VAR_11 >> 1;
 else if (FUNC_1(VAR_7))
  VAR_11 = VAR_11 >> 2;

 FUNC_3(VAR_6, VAR_7, &VAR_12);
 VAR_8 = VAR_11 / VAR_12.synth_center;

 FUNC_4(VAR_6, VAR_8, &VAR_10,
          &VAR_9);

 FUNC_2(VAR_6, VAR_3,
        VAR_5, VAR_10);
 FUNC_2(VAR_6, VAR_3,
        VAR_4, VAR_9);

 VAR_8 = (9 * VAR_8) / 10;

 FUNC_4(VAR_6, VAR_8, &VAR_10,
          &VAR_9);

 FUNC_2(VAR_6, VAR_0,
        VAR_2, VAR_10);
 FUNC_2(VAR_6, VAR_0,
        VAR_1, VAR_9);
}
