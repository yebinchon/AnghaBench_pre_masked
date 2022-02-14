
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct dst_state {int frequency; scalar_t__ dst_type; int* tx_tuna; int type_flags; int dst_hw_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(struct dst_state *VAR_9, u32 VAR_10)
{
 VAR_9->frequency = VAR_10;
 FUNC_0(VAR_8, VAR_0, 1, "set Frequency %u", VAR_10);

 if (VAR_9->dst_type == VAR_5) {
  VAR_10 = VAR_10 / 1000;
  if (VAR_10 < 950 || VAR_10 > 2150)
   return -VAR_7;
  VAR_9->tx_tuna[2] = (VAR_10 >> 8);
  VAR_9->tx_tuna[3] = (u8) VAR_10;
  VAR_9->tx_tuna[4] = 0x01;
  VAR_9->tx_tuna[8] &= ~0x04;
  if (VAR_9->type_flags & VAR_2) {
   if (VAR_10 < 1531)
    VAR_9->tx_tuna[8] |= 0x04;
  }
 } else if (VAR_9->dst_type == VAR_6) {
  VAR_10 = VAR_10 / 1000;
  if (VAR_10 < 137000 || VAR_10 > 858000)
   return -VAR_7;
  VAR_9->tx_tuna[2] = (VAR_10 >> 16) & 0xff;
  VAR_9->tx_tuna[3] = (VAR_10 >> 8) & 0xff;
  VAR_9->tx_tuna[4] = (u8) VAR_10;
 } else if (VAR_9->dst_type == VAR_4) {
  VAR_10 = VAR_10 / 1000;
  VAR_9->tx_tuna[2] = (VAR_10 >> 16) & 0xff;
  VAR_9->tx_tuna[3] = (VAR_10 >> 8) & 0xff;
  VAR_9->tx_tuna[4] = (u8) VAR_10;
 } else if (VAR_9->dst_type == VAR_3) {
  VAR_10 = VAR_10 / 1000;
  if (VAR_10 < 51000 || VAR_10 > 858000)
   return -VAR_7;
  VAR_9->tx_tuna[2] = (VAR_10 >> 16) & 0xff;
  VAR_9->tx_tuna[3] = (VAR_10 >> 8) & 0xff;
  VAR_9->tx_tuna[4] = (u8) VAR_10;
  VAR_9->tx_tuna[5] = 0x00;
  VAR_9->tx_tuna[6] = 0x00;
  if (VAR_9->dst_hw_cap & VAR_1)
   VAR_9->tx_tuna[7] = 0x00;
 } else
  return -VAR_7;

 return 0;
}
