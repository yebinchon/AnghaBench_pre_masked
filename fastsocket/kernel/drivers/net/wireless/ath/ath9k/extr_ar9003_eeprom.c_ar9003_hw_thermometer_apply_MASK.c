
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_chainmask; } ;
struct ath_hw {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 int FUNC_2 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_5)
{
 int VAR_6 = FUNC_2(VAR_5);
 u8 VAR_7 = (VAR_6 < 0) ? 0 : 1;

 FUNC_1(VAR_5, VAR_0,
        VAR_2, VAR_7);
 if (VAR_5->caps.tx_chainmask & FUNC_0(1))
  FUNC_1(VAR_5, VAR_3,
         VAR_2, VAR_7);
 if (VAR_5->caps.tx_chainmask & FUNC_0(2))
  FUNC_1(VAR_5, VAR_4,
         VAR_2, VAR_7);

 VAR_7 = (VAR_6 < 0) ? 0 : (VAR_6 == 0);
 FUNC_1(VAR_5, VAR_0,
        VAR_1, VAR_7);
 if (VAR_5->caps.tx_chainmask & FUNC_0(1)) {
  VAR_7 = (VAR_6 < 0) ? 0 : (VAR_6 == 1);
  FUNC_1(VAR_5, VAR_3,
         VAR_1, VAR_7);
 }
 if (VAR_5->caps.tx_chainmask & FUNC_0(2)) {
  VAR_7 = (VAR_6 < 0) ? 0 : (VAR_6 == 2);
  FUNC_1(VAR_5, VAR_4,
         VAR_1, VAR_7);
 }
}
