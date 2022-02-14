
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(unsigned int VAR_8, unsigned int VAR_9)
{
 int VAR_10;
 char VAR_11[16];
 u32 VAR_12 = FUNC_5(VAR_8);

 if (VAR_9 == VAR_4) {

  if (FUNC_13(VAR_12, VAR_5))
   return 0;
  VAR_9 = VAR_1 | VAR_0;
 }

 if (VAR_9 & (VAR_1 | VAR_0 |
      VAR_2 | VAR_3)) {

  FUNC_12(VAR_11, 16, "gpio-irq%d", VAR_8);
  VAR_10 = FUNC_3(VAR_12, VAR_11);
  if (VAR_10)
   return VAR_10;

  if (FUNC_1(VAR_12, VAR_5))
   FUNC_2(VAR_12);

 } else {
  FUNC_0(VAR_12, VAR_5);
  return 0;
 }

 FUNC_10(VAR_12, 0);
 FUNC_8(VAR_12, 0);

 if ((VAR_9 & (VAR_1 | VAR_0))
     == (VAR_1 | VAR_0))
  FUNC_6(VAR_12, 1);
 else
  FUNC_6(VAR_12, 0);

 if ((VAR_9 & (VAR_0 | VAR_3)))
  FUNC_11(VAR_12, 1);
 else
  FUNC_11(VAR_12, 0);

 if (VAR_9 & (VAR_1 | VAR_0)) {
  FUNC_9(VAR_12, 1);
  FUNC_10(VAR_12, 1);
  FUNC_7(VAR_12, 0);

 } else {
  FUNC_9(VAR_12, 0);
  FUNC_10(VAR_12, 1);
 }

 if (VAR_9 & (VAR_1 | VAR_0))
  FUNC_4(VAR_8, VAR_6);
 else
  FUNC_4(VAR_8, VAR_7);

 return 0;
}
