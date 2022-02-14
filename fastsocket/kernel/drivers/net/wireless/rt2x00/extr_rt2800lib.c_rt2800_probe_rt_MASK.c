
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_1 (struct rt2x00_dev*,char*,int,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (FUNC_3(VAR_5, 134))
  FUNC_0(VAR_5, VAR_2, &VAR_6);
 else
  FUNC_0(VAR_5, VAR_1, &VAR_6);

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 VAR_8 = FUNC_2(VAR_6, VAR_4);

 switch (VAR_7) {
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_1(VAR_5, "Invalid RT chipset 0x%04x, rev %04x detected\n",
      VAR_7, VAR_8);
  return -VAR_0;
 }

 FUNC_4(VAR_5, VAR_7, VAR_8);

 return 0;
}
