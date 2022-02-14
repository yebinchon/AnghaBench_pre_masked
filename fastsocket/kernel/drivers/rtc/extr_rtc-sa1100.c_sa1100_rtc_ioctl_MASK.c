
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long,unsigned long*) ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long VAR_12 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_13, unsigned int VAR_14,
  unsigned long VAR_15)
{
 switch(VAR_14) {
 case 135:
  FUNC_1(&VAR_11);
  VAR_6 &= ~VAR_7;
  FUNC_2(&VAR_11);
  return 0;
 case 134:
  FUNC_1(&VAR_11);
  VAR_6 |= VAR_7;
  FUNC_2(&VAR_11);
  return 0;
 case 129:
  FUNC_1(&VAR_11);
  VAR_6 &= ~VAR_8;
  FUNC_2(&VAR_11);
  return 0;
 case 128:
  FUNC_1(&VAR_11);
  VAR_6 |= VAR_8;
  FUNC_2(&VAR_11);
  return 0;
 case 131:
  FUNC_1(&VAR_11);
  VAR_2 &= ~VAR_3;
  FUNC_2(&VAR_11);
  return 0;
 case 130:
  FUNC_1(&VAR_11);
  VAR_5 = VAR_12 / VAR_9 + VAR_4;
  VAR_2 |= VAR_3;
  VAR_10 = 1;
  FUNC_2(&VAR_11);
  return 0;
 case 133:
  return FUNC_0(VAR_9, (unsigned long *)VAR_15);
 case 132:
  if (VAR_15 < 1 || VAR_15 > VAR_12)
   return -VAR_0;
  VAR_9 = VAR_15;
  return 0;
 }
 return -VAR_1;
}
