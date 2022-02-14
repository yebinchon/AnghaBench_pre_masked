
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_chainmask; int rx_chainmask; int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;

void FUNC_2(struct ath_hw *VAR_6, u8 VAR_7, u8 VAR_8)
{
 if (VAR_6->caps.tx_chainmask == 5 || VAR_6->caps.rx_chainmask == 5)
  FUNC_0(VAR_6, VAR_0,
       VAR_3);

 FUNC_1(VAR_6, VAR_2, VAR_7);
 FUNC_1(VAR_6, VAR_1, VAR_7);

 if ((VAR_6->caps.hw_caps & VAR_5) && (VAR_8 == 0x7))
  VAR_8 = 3;

 FUNC_1(VAR_6, VAR_4, VAR_8);
}
