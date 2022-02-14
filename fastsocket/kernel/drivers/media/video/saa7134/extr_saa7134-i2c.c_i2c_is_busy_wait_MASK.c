
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum i2c_status { ____Placeholder_i2c_status } i2c_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_2)
{
 enum i2c_status VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2);
  if (!FUNC_1(VAR_3))
   break;
  FUNC_2(VAR_0);
 }
 if (VAR_1 == VAR_4)
  return 0;
 return 1;
}
