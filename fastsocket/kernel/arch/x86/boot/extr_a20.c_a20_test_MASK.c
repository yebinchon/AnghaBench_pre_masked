
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3, VAR_4;

 FUNC_3(0x0000);
 FUNC_4(0xffff);

 VAR_3 = VAR_4 = FUNC_1(VAR_0);

 while (VAR_1--) {
  FUNC_5(++VAR_4, VAR_0);
  FUNC_0();
  VAR_2 = FUNC_2(VAR_0+0x10) ^ VAR_4;
  if (VAR_2)
   break;
 }

 FUNC_5(VAR_3, VAR_0);
 return VAR_2;
}
