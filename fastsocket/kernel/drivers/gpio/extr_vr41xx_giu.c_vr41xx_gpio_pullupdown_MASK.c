
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef scalar_t__ gpio_pull_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(unsigned int VAR_9, gpio_pull_t VAR_10)
{
 u16 VAR_11, VAR_12;
 unsigned long VAR_13;

 if ((VAR_7 & VAR_4) != VAR_4)
  return -VAR_1;

 if (VAR_9 >= 15)
  return -VAR_0;

 VAR_12 = 1 << VAR_9;

 FUNC_2(&VAR_8, VAR_13);

 if (VAR_10 == VAR_6 || VAR_10 == VAR_5) {
  VAR_11 = FUNC_0(VAR_2);
  if (VAR_10 == VAR_6)
   VAR_11 |= VAR_12;
  else
   VAR_11 &= ~VAR_12;
  FUNC_1(VAR_2, VAR_11);

  VAR_11 = FUNC_0(VAR_3);
  VAR_11 |= VAR_12;
  FUNC_1(VAR_3, VAR_11);
 } else {
  VAR_11 = FUNC_0(VAR_3);
  VAR_11 &= ~VAR_12;
  FUNC_1(VAR_3, VAR_11);
 }

 FUNC_3(&VAR_8, VAR_13);

 return 0;
}
