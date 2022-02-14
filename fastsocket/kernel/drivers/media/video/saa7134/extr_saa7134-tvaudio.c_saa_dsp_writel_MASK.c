
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7134_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct saa7134_dev*,int ) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(struct saa7134_dev *VAR_1, int VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_0("dsp write reg 0x%x = 0x%06x\n",VAR_2<<2,VAR_3);
 VAR_4 = FUNC_1(VAR_1,VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_2(VAR_2,VAR_3);
 VAR_4 = FUNC_1(VAR_1,VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
