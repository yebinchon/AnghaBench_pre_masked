
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct pcf50633 {int dummy; } ;




 int FUNC_0 (int,unsigned int) ;
 struct pcf50633* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
      unsigned int VAR_1)
{
 struct pcf50633 *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);

 VAR_3 = FUNC_2(VAR_0);

 switch (VAR_3) {
 case 129:
  VAR_1 += 0x2f;
  break;
 case 128:
  VAR_1 += 0x01;
  break;
 default:
  break;
 }

 return FUNC_0(VAR_3, VAR_1);
}
