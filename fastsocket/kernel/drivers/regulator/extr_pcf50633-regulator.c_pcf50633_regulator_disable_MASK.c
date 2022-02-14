
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct regulator_dev {int dummy; } ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcf50633*,scalar_t__,int ,int ) ;
 scalar_t__* VAR_3 ;
 struct pcf50633* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4)
{
 struct pcf50633 *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 >= VAR_1)
  return -VAR_0;


 VAR_7 = VAR_3[VAR_6] + 1;

 return FUNC_0(VAR_5, VAR_7,
     VAR_2, 0);
}
