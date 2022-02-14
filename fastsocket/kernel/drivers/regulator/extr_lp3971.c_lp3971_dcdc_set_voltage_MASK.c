
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct regulator_dev {int dummy; } ;
struct lp3971 {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_2 (struct lp3971*,int ,size_t,size_t) ;
 struct lp3971* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_9,
      int VAR_10, int VAR_11)
{
 struct lp3971 *VAR_12 = FUNC_3(VAR_9);
 int VAR_13 = FUNC_4(VAR_9) - VAR_7;
 int VAR_14 = VAR_10 / 1000, VAR_15 = VAR_11 / 1000;
 const int *VAR_16 = VAR_8;
 u16 VAR_17;
 int VAR_18;

 if (VAR_14 < VAR_16[VAR_2] ||
     VAR_14 > VAR_16[VAR_1])
  return -VAR_5;

 for (VAR_17 = VAR_2; VAR_17 <= VAR_1;
      VAR_17++)
  if (VAR_16[VAR_17] >= VAR_14)
   break;

 if (VAR_16[VAR_17] > VAR_15)
  return -VAR_5;

 VAR_18 = FUNC_2(VAR_12, FUNC_1(VAR_13),
        VAR_0, VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_12, VAR_6,
        VAR_4 << FUNC_0(VAR_13),
        VAR_3 << FUNC_0(VAR_13));
 if (VAR_18)
  return VAR_18;

 return FUNC_2(VAR_12, VAR_6,
        VAR_4 << FUNC_0(VAR_13),
        0 << FUNC_0(VAR_13));
}
