
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath5k_hw {scalar_t__ ah_ant_mode; int** ah_ant_ctl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;

void
FUNC_2(struct ath5k_hw *VAR_10, u8 VAR_11)
{
 u8 VAR_12, VAR_13;





 if (VAR_10->ah_ant_mode == VAR_0)
  VAR_12 = VAR_13 = VAR_3;
 else if (VAR_10->ah_ant_mode == VAR_1)
  VAR_12 = VAR_13 = VAR_4;
 else {
  VAR_12 = VAR_3;
  VAR_13 = VAR_4;
 }


 FUNC_0(VAR_10, VAR_5,
   VAR_6,
   (VAR_10->ah_ant_ctl[VAR_11][VAR_2] |
   VAR_7));


 FUNC_1(VAR_10, VAR_10->ah_ant_ctl[VAR_11][VAR_12],
  VAR_8);
 FUNC_1(VAR_10, VAR_10->ah_ant_ctl[VAR_11][VAR_13],
  VAR_9);
}
