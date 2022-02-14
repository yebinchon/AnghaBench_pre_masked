
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

u32 FUNC_3( u32 VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 u32 VAR_5, VAR_6;

 if ( VAR_1 <= 0) return 0;
 VAR_0 = VAR_0 & (0xffffffff >> (32 - VAR_1));

 VAR_2 = VAR_1 / 2;
 for ( VAR_3 = 0, VAR_4 = VAR_1-1 ; VAR_3 < VAR_2; VAR_3++, VAR_4--)
 {
  VAR_5 = FUNC_1( VAR_0, VAR_3);
  VAR_6 = FUNC_1( VAR_0, VAR_4);
  if (VAR_5 && !VAR_6) {
   VAR_0 = FUNC_0( VAR_0, VAR_3);
   VAR_0 = FUNC_2( VAR_0, VAR_4);
  } else if (!VAR_5 && VAR_6) {
   VAR_0 = FUNC_2( VAR_0, VAR_3);
   VAR_0 = FUNC_0( VAR_0, VAR_4);
  } else
  {

  }
 }

 return VAR_0;
}
