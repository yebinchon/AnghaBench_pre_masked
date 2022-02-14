
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct saa7146_dev {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct saa7146_dev*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct saa7146_dev *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u8 VAR_3;
 u8 VAR_4[4];

 FUNC_0(4, "freq: 0x%08x\n", VAR_1);



 VAR_2 = VAR_1 + 614;

 VAR_4[0] = (VAR_2 >> 8) & 0x7f;
 VAR_4[1] = VAR_2 & 0xff;
 VAR_4[2] = 0x8e;

 if (VAR_1 < (u32) (16 * 168.25))
  VAR_3 = 0xa0;
 else if (VAR_1 < (u32) (16 * 447.25))
  VAR_3 = 0x90;
 else
  VAR_3 = 0x30;
 VAR_3 &= ~0x02;

 VAR_4[3] = VAR_3;

 return FUNC_1(VAR_0, 0x61, VAR_4);
}
