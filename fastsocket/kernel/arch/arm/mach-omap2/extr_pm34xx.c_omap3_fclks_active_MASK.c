
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 u32 VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0,
  VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

 VAR_14 = FUNC_0(VAR_2,
        VAR_1);
 if (FUNC_1() > VAR_13) {
  VAR_15 = FUNC_0(VAR_2,
         VAR_4);
  VAR_16 = FUNC_0(VAR_5,
       VAR_0);
  VAR_20 = FUNC_0(VAR_6,
           VAR_0);
 } else
  VAR_16 = FUNC_0(VAR_3,
       VAR_4);
 VAR_17 = FUNC_0(VAR_8,
      VAR_0);
 VAR_18 = FUNC_0(VAR_7,
      VAR_0);
 VAR_19 = FUNC_0(VAR_12,
      VAR_0);


 VAR_14 &= ~(VAR_9 | VAR_10);
 VAR_19 &= ~VAR_11;

 if (VAR_14 | VAR_15 | VAR_16 | VAR_17 |
     VAR_18 | VAR_19 | VAR_20)
  return 1;
 return 0;
}
