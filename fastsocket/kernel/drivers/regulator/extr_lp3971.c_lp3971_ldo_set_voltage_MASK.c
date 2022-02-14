
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct regulator_dev {int dummy; } ;
struct lp3971 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lp3971*,int ,int,size_t) ;
 struct lp3971* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_5,
      int VAR_6, int VAR_7)
{
 struct lp3971 *VAR_8 = FUNC_4(VAR_5);
 int VAR_9 = FUNC_5(VAR_5) - VAR_4;
 int VAR_10 = VAR_6 / 1000, VAR_11 = VAR_7 / 1000;
 const int *VAR_12 = FUNC_1(VAR_9);
 u16 VAR_13;

 if (VAR_10 < VAR_12[VAR_3] ||
     VAR_10 > VAR_12[VAR_2])
  return -VAR_0;

 for (VAR_13 = VAR_3; VAR_13 <= VAR_2; VAR_13++)
  if (VAR_12[VAR_13] >= VAR_10)
   break;

 if (VAR_12[VAR_13] > VAR_11)
  return -VAR_0;

 return FUNC_3(VAR_8, FUNC_2(VAR_9),
  VAR_1 << FUNC_0(VAR_9), VAR_13);
}
