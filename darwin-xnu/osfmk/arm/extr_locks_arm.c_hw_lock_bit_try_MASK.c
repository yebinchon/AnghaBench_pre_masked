
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int hw_lock_bit_t ;
typedef unsigned int boolean_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int *,int,int,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

unsigned int
FUNC_6(hw_lock_bit_t *VAR_4, unsigned int VAR_5)
{
 uint32_t VAR_6 = (1 << VAR_5);

 uint32_t VAR_7;

 boolean_t VAR_8 = VAR_0;

 FUNC_1();




 VAR_7 = FUNC_4(VAR_4);
 if (!(VAR_6 & VAR_7)) {
  FUNC_5(VAR_4, VAR_7 | VAR_6);
  VAR_8 = VAR_2;
 }

 if (!VAR_8)
  FUNC_2();






 return VAR_8;
}
