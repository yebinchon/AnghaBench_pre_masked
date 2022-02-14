
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rx_status_len; } ;
struct ath_hw {int tx_trig_level; TYPE_1__ caps; } ;
struct ath_common {scalar_t__ rx_bufsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int) ;
 int FUNC_8 (struct ath_hw*,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_13(struct ath_hw *VAR_17)
{
 struct ath_common *VAR_18 = FUNC_10(VAR_17);
 int VAR_19;

 FUNC_4(VAR_17);




 if (!FUNC_2(VAR_17))
  FUNC_8(VAR_17, VAR_2, VAR_3);




 FUNC_6(VAR_17, VAR_14, VAR_15, VAR_16);

 FUNC_5(VAR_17);






 if (!FUNC_2(VAR_17))
  FUNC_7(VAR_17, VAR_14, VAR_4, VAR_17->tx_trig_level);

 FUNC_4(VAR_17);




 FUNC_6(VAR_17, VAR_10, VAR_11, VAR_12);




 FUNC_9(VAR_17, VAR_13, 0x200);

 if (FUNC_2(VAR_17)) {
  FUNC_7(VAR_17, VAR_7, VAR_8, 0x1);
  FUNC_7(VAR_17, VAR_7, VAR_9, 0x1);

  FUNC_12(VAR_17, VAR_18->rx_bufsize -
   VAR_17->caps.rx_status_len);
 }





 if (FUNC_1(VAR_17)) {




  VAR_19 = VAR_0;
 } else if (FUNC_3(VAR_17)) {

  VAR_19 = VAR_1;
 } else {
  VAR_19 = VAR_6;
 }

 if (!FUNC_0(VAR_17))
  FUNC_9(VAR_17, VAR_5, VAR_19);

 FUNC_5(VAR_17);

 if (FUNC_2(VAR_17))
  FUNC_11(VAR_17);
}
