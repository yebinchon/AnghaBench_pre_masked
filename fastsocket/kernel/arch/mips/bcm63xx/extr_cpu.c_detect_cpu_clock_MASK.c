
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(void)
{
 unsigned int VAR_14, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;


 if (FUNC_0())
  return 240000000;


 if (FUNC_1())
  return 140000000;




 if (FUNC_2()) {

  VAR_14 = FUNC_5(VAR_13);
  VAR_15 = (VAR_14 & VAR_9) >> VAR_10;
  VAR_16 = (VAR_14 & VAR_11) >> VAR_12;
  VAR_17 = (VAR_14 & VAR_7) >> VAR_8;
  VAR_15 += 1;
  VAR_16 += 2;
  VAR_17 += 1;
 }

 if (FUNC_3()) {

  VAR_14 = FUNC_4(VAR_0);
  VAR_15 = (VAR_14 & VAR_3) >> VAR_4;
  VAR_16 = (VAR_14 & VAR_5) >> VAR_6;
  VAR_17 = (VAR_14 & VAR_1) >> VAR_2;
 }

 return (16 * 1000000 * VAR_15 * VAR_16) / VAR_17;
}
