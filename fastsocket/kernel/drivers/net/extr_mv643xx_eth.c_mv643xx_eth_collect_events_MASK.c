
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv643xx_eth_private {int int_mask; int work_tx_end; int work_rx; int work_link; int work_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mv643xx_eth_private*,int ) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mv643xx_eth_private *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_0) & VAR_8->int_mask;
 if (VAR_9 == 0)
  return 0;

 VAR_10 = 0;
 if (VAR_9 & VAR_2) {
  VAR_9 &= ~VAR_2;
  VAR_10 = FUNC_0(VAR_8, VAR_1);
 }

 if (VAR_9) {
  FUNC_1(VAR_8, VAR_0, ~VAR_9);
  VAR_8->work_tx_end |= ((VAR_9 & VAR_6) >> 19) &
    ~(FUNC_0(VAR_8, VAR_7) & 0xff);
  VAR_8->work_rx |= (VAR_9 & VAR_5) >> 2;
 }

 VAR_10 &= VAR_3 | VAR_4;
 if (VAR_10) {
  FUNC_1(VAR_8, VAR_1, ~VAR_10);
  if (VAR_10 & VAR_3)
   VAR_8->work_link = 1;
  VAR_8->work_tx |= VAR_10 & VAR_4;
 }

 return 1;
}
