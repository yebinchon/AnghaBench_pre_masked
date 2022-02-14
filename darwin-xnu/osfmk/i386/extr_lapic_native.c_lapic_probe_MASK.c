
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;

boolean_t
FUNC_6(void)
{
 uint32_t VAR_10;
 uint32_t VAR_11;

 if (FUNC_1() & VAR_0)
  return VAR_7;

 if (FUNC_0() == 6 || FUNC_0() == 15) {





  FUNC_4(VAR_4, VAR_10, VAR_11);
  VAR_10 &= ~VAR_5;
  VAR_10 |= VAR_6 | VAR_3;
  VAR_10 |= VAR_6;
  FUNC_5(VAR_4, VAR_10, VAR_11);




  FUNC_2();




  if (FUNC_1() & VAR_0) {
   FUNC_3("Local APIC discovered and enabled\n");
   VAR_9 = VAR_7;
   VAR_8 = VAR_2;
   return VAR_7;
  }
 }

 return VAR_1;
}
