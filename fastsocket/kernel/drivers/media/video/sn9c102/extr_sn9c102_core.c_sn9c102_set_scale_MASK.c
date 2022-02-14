
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sn9c102_device {int* reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device* VAR_1, u8 VAR_2)
{
 u8 VAR_3 = 0;
 int VAR_4 = 0;

 if (VAR_2 == 1)
  VAR_3 = VAR_1->reg[0x18] & 0xcf;
 else if (VAR_2 == 2) {
  VAR_3 = VAR_1->reg[0x18] & 0xcf;
  VAR_3 |= 0x10;
 } else if (VAR_2 == 4)
  VAR_3 = VAR_1->reg[0x18] | 0x20;

 VAR_4 += FUNC_1(VAR_1, VAR_3, 0x18);
 if (VAR_4)
  return -VAR_0;

 FUNC_0("Scaling factor: %u", VAR_2);

 return 0;
}
