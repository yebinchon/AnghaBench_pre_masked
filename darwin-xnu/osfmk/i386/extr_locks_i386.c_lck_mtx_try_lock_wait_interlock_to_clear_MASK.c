
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lck_mtx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) __attribute__((always_inline))
static boolean_t
FUNC_2(
 lck_mtx_t *VAR_5,
 uint32_t* VAR_6)
{
 uint32_t VAR_7;

 for ( ; ; ) {
  FUNC_0();
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 & (VAR_2 | VAR_3)) {

   return VAR_0;
  }
  if (!(VAR_7 & VAR_1)) {
   *VAR_6 = VAR_7;
   return VAR_4;
  }
 }
}
