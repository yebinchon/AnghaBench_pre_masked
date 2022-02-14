
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int override ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (char*,unsigned int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_1( void )
{
 unsigned int VAR_10, VAR_11;



 VAR_4 >>= VAR_5;

 if ( FUNC_0("colors", &VAR_11, sizeof (VAR_11)) )
  VAR_10 = VAR_11;
 else if ( VAR_4 )
  VAR_10 = VAR_4;
 else VAR_10 = VAR_1;

 if ( VAR_10 == 0 )
  VAR_10 = 1;
 if ( VAR_10 > VAR_2 )
  VAR_10 = VAR_2;


 if ( ( VAR_10 & (VAR_10 - 1)) != 0 )
         VAR_10 = VAR_1;

 VAR_8 = VAR_10;
 VAR_7 = VAR_10 - 1;

 VAR_9 = VAR_8 * VAR_0;



 if (VAR_3)
  VAR_9 *= (VAR_6 * VAR_3);

}
