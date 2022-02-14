
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
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) __attribute__((always_inline))
static boolean_t
FUNC_2(
 lck_mtx_t *VAR_4,
 uint32_t* VAR_5)
{
 uint32_t VAR_6;

 for ( ; ; ) {
  FUNC_0();
  VAR_6 = FUNC_1(VAR_4);
  if (!(VAR_6 & (VAR_1 | VAR_2))) {
   *VAR_5 = VAR_6;
   return VAR_3;
  }
  if (VAR_6 & VAR_2) {

   return VAR_0;
  }
 }
}
