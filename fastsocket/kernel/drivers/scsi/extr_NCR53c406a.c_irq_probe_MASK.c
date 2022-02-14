
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 unsigned long VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_2(VAR_2);
 VAR_8 = FUNC_5();


 VAR_3;
 FUNC_3(0xff, VAR_1);


 VAR_10 = VAR_7 + VAR_6;
 while (FUNC_6(VAR_10, VAR_7) && !(FUNC_2(VAR_5) & 0x80))
  FUNC_0();
 if (FUNC_7(VAR_10, VAR_7)) {
  FUNC_4(VAR_8);
  return -1;
 }

 VAR_9 = FUNC_4(VAR_8);


 FUNC_3(VAR_0, VAR_1);
 FUNC_3(VAR_4, VAR_1);
 FUNC_1();

 return VAR_9;
}
