
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int eeprom; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1))
  VAR_2 = FUNC_1(VAR_1);
 else
  VAR_2 = FUNC_2(VAR_1, VAR_1->eeprom,
            VAR_0);

 return VAR_2;
}
