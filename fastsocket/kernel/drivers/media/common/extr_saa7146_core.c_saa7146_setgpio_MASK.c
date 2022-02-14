
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_dev*,int ) ;
 int FUNC_2 (struct saa7146_dev*,int ,int) ;

void FUNC_3(struct saa7146_dev *VAR_1, int VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;

 FUNC_0(VAR_2 > 3);

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 VAR_4 &= ~(0xff << (8*VAR_2));
 VAR_4 |= (VAR_3 << (8*VAR_2));
 FUNC_2(VAR_1, VAR_0, VAR_4);
}
