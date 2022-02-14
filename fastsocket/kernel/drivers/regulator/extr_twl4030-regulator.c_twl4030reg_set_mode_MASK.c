
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int id; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct twlreg_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_9, unsigned VAR_10)
{
 struct twlreg_info *VAR_11 = FUNC_1(VAR_9);
 unsigned VAR_12;
 int VAR_13;


 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_0(VAR_0, VAR_11->id, VAR_6);
  break;
 case 128:
  VAR_12 = FUNC_0(VAR_0, VAR_11->id, VAR_7);
  break;
 default:
  return -VAR_2;
 }


 VAR_13 = FUNC_3(VAR_9);
 if (VAR_13 < 0)
  return VAR_13;
 if (!(VAR_13 & (VAR_5 | VAR_4 | VAR_3)))
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_8,
   VAR_12 >> 8, 0x15 );
 if (VAR_13 >= 0)
  return VAR_13;

 return FUNC_2(VAR_8,
   VAR_12, 0x16 );
}
