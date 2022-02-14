
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7134_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct saa7134_dev*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_6,
      int VAR_7, int VAR_8)
{
 u8 VAR_9;

 switch (VAR_7) {
 case 0:
  FUNC_0(VAR_6, 22, VAR_8) ;
  break;
 case 1:
  FUNC_1(VAR_4, 0x80, 0x80);
  FUNC_1(VAR_5, 0x0f, 0x03);
  if (VAR_8 == 1)
   VAR_9 = 11;
  else
   VAR_9 = 17;
  FUNC_2(VAR_2, VAR_9);
  FUNC_2(VAR_3, VAR_9 + 1);
  FUNC_1(VAR_1, 0x03, 0x00);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
