
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct mthca_dev*,int ,int ,int,int ,int ) ;

int FUNC_1(struct mthca_dev *VAR_3, int VAR_4, u32 VAR_5)
{
 u8 VAR_6;

 switch (VAR_4) {
 case 128:
  VAR_6 = 0;
  break;
 case 131:
  VAR_6 = 1;
  break;
 case 129:
  VAR_6 = 2;
  break;
 case 130:
  VAR_6 = 3;
  break;
 default:
  return -VAR_2;
 }

 return FUNC_0(VAR_3, 0, VAR_5, VAR_6, VAR_0,
    VAR_1);
}
