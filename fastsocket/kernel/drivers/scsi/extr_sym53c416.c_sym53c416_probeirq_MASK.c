
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,int) ;

__attribute__((used)) static int FUNC_8(int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 unsigned long VAR_12;


 FUNC_1(VAR_8 + VAR_3);

 VAR_11 = FUNC_4();

 FUNC_5(VAR_8, VAR_9);

 FUNC_2(VAR_4, VAR_8 + VAR_0);
 FUNC_2(VAR_2, VAR_8 + VAR_0);
 FUNC_2(0x07, VAR_8 + VAR_1);
 FUNC_2(0x00, VAR_8 + VAR_1);

 VAR_12 = VAR_7 + 20;
 while(FUNC_6(VAR_7, VAR_12) && !(FUNC_1(VAR_8 + VAR_6) & VAR_5))
  FUNC_0();
 if(FUNC_7(VAR_12, VAR_7))
  return 0;

 VAR_10 = FUNC_3(VAR_11);
 FUNC_5(VAR_8, VAR_9);
 return VAR_10;
}
