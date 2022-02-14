
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; scalar_t__ magic; } ;
struct cp_private {int lock; int regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cp_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
    struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 struct cp_private *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6;
 u16 VAR_7;
 u32 VAR_8 = VAR_3->offset >> 1;
 u32 VAR_9 = VAR_3->len;
 u32 VAR_10 = 0;

 if (VAR_3->magic != VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_5->lock);

 VAR_6 = FUNC_1(VAR_5->regs, 0, 8) == 0x8129 ? 8 : 6;

 if (VAR_3->offset & 1) {
  VAR_7 = FUNC_1(VAR_5->regs, VAR_8, VAR_6) & 0xff;
  VAR_7 |= (u16)VAR_4[VAR_10++] << 8;
  FUNC_4(VAR_5->regs, VAR_8, VAR_7, VAR_6);
  VAR_8++;
 }

 while (VAR_10 < VAR_9 - 1) {
  VAR_7 = (u16)VAR_4[VAR_10++];
  VAR_7 |= (u16)VAR_4[VAR_10++] << 8;
  FUNC_4(VAR_5->regs, VAR_8, VAR_7, VAR_6);
  VAR_8++;
 }

 if (VAR_10 < VAR_9) {
  VAR_7 = FUNC_1(VAR_5->regs, VAR_8, VAR_6) & 0xff00;
  VAR_7 |= (u16)VAR_4[VAR_10];
  FUNC_4(VAR_5->regs, VAR_8, VAR_7, VAR_6);
 }

 FUNC_3(&VAR_5->lock);
 return 0;
}
