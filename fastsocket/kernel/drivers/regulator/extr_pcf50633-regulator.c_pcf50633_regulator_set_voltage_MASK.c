
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pcf50633*,int ,int ) ;
 int * VAR_2 ;
 struct pcf50633* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_3,
      int VAR_4, int VAR_5)
{
 struct pcf50633 *VAR_6;
 int VAR_7, VAR_8;
 u8 VAR_9, VAR_10;

 VAR_6 = FUNC_4(VAR_3);

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7 >= VAR_1)
  return -VAR_0;

 VAR_8 = VAR_4 / 1000;

 VAR_10 = VAR_2[VAR_7];

 switch (VAR_7) {
 case 137:
  VAR_9 = FUNC_0(VAR_8);
  break;
 case 136:
  VAR_9 = FUNC_1(VAR_8);
  break;
 case 135:
  VAR_9 = FUNC_1(VAR_8);
  break;
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 134:
  VAR_9 = FUNC_2(VAR_8);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_3(VAR_6, VAR_10, VAR_9);
}
