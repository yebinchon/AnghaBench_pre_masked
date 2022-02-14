
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
struct cp_private {int lock; int regs; } ;


 int VAR_0 ;
 struct cp_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
    struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct cp_private *VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5;
 u16 VAR_6;
 u32 VAR_7 = VAR_2->offset >> 1;
 u32 VAR_8 = VAR_2->len;
 u32 VAR_9 = 0;

 VAR_2->magic = VAR_0;

 FUNC_2(&VAR_4->lock);

 VAR_5 = FUNC_1(VAR_4->regs, 0, 8) == 0x8129 ? 8 : 6;

 if (VAR_2->offset & 1) {
  VAR_6 = FUNC_1(VAR_4->regs, VAR_7, VAR_5);
  VAR_3[VAR_9++] = (u8)(VAR_6 >> 8);
  VAR_7++;
 }

 while (VAR_9 < VAR_8 - 1) {
  VAR_6 = FUNC_1(VAR_4->regs, VAR_7, VAR_5);
  VAR_3[VAR_9++] = (u8)VAR_6;
  VAR_3[VAR_9++] = (u8)(VAR_6 >> 8);
  VAR_7++;
 }

 if (VAR_9 < VAR_8) {
  VAR_6 = FUNC_1(VAR_4->regs, VAR_7, VAR_5);
  VAR_3[VAR_9] = (u8)VAR_6;
 }

 FUNC_3(&VAR_4->lock);
 return 0;
}
