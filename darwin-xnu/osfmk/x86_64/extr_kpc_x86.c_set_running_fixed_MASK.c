
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long long) ;

__attribute__((used)) static void
FUNC_4(boolean_t VAR_5)
{
 uint64_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 int VAR_9;
 boolean_t VAR_10;

 if( VAR_5 )

  VAR_8 = VAR_1 | VAR_2;
 else

  return;

 FUNC_3( VAR_3, VAR_8 );

 VAR_10 = FUNC_1(VAR_0);


 VAR_6 = FUNC_2(VAR_4);
 for( VAR_9 = 0; VAR_9 < (int) FUNC_0(); VAR_9++ )
  VAR_7 |= (1ULL<<(32+VAR_9));

 if( VAR_5 )
  VAR_6 |= VAR_7;
 else
  VAR_6 &= ~VAR_7;

 FUNC_3(VAR_4, VAR_6);

 FUNC_1(VAR_10);
}
