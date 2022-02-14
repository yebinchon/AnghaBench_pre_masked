
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__* cothread_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 uintptr_t VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__* FUNC_2 (unsigned int,uintptr_t) ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;

cothread_t FUNC_3( unsigned int VAR_3, void (*VAR_4)( void ) )
{
 uintptr_t VAR_5 = (uintptr_t) VAR_4;
 uint32_t* VAR_6 = ((void*)0);


 if ( FUNC_1() )
 {
  VAR_3 += VAR_2 + VAR_0 + VAR_1;
  VAR_6 = FUNC_2( VAR_3, VAR_5 );
 }

 if ( VAR_6 )
 {
  uintptr_t VAR_7;
  int VAR_8;



  FUNC_0( VAR_6, VAR_6 );







  VAR_7 = (uintptr_t) VAR_6 + VAR_3 - VAR_0;
  VAR_7 -= VAR_7 % VAR_1;
   VAR_8 = 0;



  VAR_6 [8] = (uint32_t) (VAR_5 >> VAR_8 >> VAR_8);
  VAR_6 [9] = (uint32_t) VAR_5;

  VAR_6 [10] = (uint32_t) (VAR_7 >> VAR_8 >> VAR_8);
  VAR_6 [11] = (uint32_t) VAR_7;
 }

 return VAR_6;
}
