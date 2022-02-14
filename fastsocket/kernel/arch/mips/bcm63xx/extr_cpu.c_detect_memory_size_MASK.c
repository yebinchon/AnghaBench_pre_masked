
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(void)
{
 unsigned int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17;

 if (FUNC_1())
  return (8 * 1024 * 1024);

 if (FUNC_0() || FUNC_2()) {
  VAR_17 = FUNC_5(VAR_10);
  VAR_14 = (VAR_17 & VAR_11) >> VAR_12;
  VAR_13 = (VAR_17 & VAR_8) >> VAR_9;
  VAR_15 = (VAR_17 & VAR_6) ? 1 : 0;
  VAR_16 = (VAR_17 & VAR_7) ? 2 : 1;
 }

 if (FUNC_3()) {
  VAR_17 = FUNC_4(VAR_3);
  VAR_14 = (VAR_17 & VAR_4) >> VAR_5;
  VAR_13 = (VAR_17 & VAR_1) >> VAR_2;
  VAR_15 = (VAR_17 & VAR_0) ? 0 : 1;
  VAR_16 = 2;
 }


 VAR_14 += 11;


 VAR_13 += 8;

 return 1 << (VAR_13 + VAR_14 + (VAR_15 + 1) + VAR_16);
}
