
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long long VAR_7 ;
 scalar_t__ FUNC_2 (unsigned long long) ;

uint64_t
FUNC_3(uint32_t VAR_8)
{
 uint32_t VAR_9 = FUNC_1();
 uint64_t VAR_10 = 0ULL, VAR_11 = 0ULL, VAR_12 = 0ULL;


 if (((VAR_8 & (VAR_1 | VAR_2)) == 0) ||
     (VAR_9 == 0))
 {
  goto exit;
 }

 FUNC_0(VAR_9 < 64);
 VAR_12 = (1ULL << VAR_9) - 1;

 if (VAR_8 & VAR_1) {
  if (VAR_4 == VAR_3)
   VAR_10 |= VAR_12;
  else
   VAR_10 |= (~VAR_7) & VAR_12;
 }






 if ((VAR_4 == VAR_0) &&
     (VAR_5 != ((void*)0)) &&
     (VAR_6 == VAR_0) &&
     (VAR_8 & VAR_2))
 {
  VAR_11 |= VAR_7 & VAR_12;
 }

exit:

 FUNC_0( ((VAR_10 | VAR_11) & (~VAR_12)) == 0 );
 FUNC_0( FUNC_2(VAR_10 | VAR_11) <= FUNC_1() );
 FUNC_0( (VAR_10 & VAR_11) == 0ULL );

 return VAR_10 | VAR_11;
}
