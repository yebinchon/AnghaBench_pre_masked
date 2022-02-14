
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcf50633*,int ) ;
 int * VAR_2 ;
 int FUNC_1 (int,int ) ;
 struct pcf50633* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3)
{
 struct pcf50633 *VAR_4;
 int VAR_5;
 u8 VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_3);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 >= VAR_1)
  return -VAR_0;

 VAR_7 = VAR_2[VAR_5];

 VAR_6 = FUNC_0(VAR_4, VAR_7);

 return FUNC_1(VAR_5, VAR_6);
}
