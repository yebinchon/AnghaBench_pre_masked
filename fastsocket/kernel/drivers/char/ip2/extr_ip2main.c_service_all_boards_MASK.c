
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ i2eBordStrPtr ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(void)
{
 int VAR_2;
 i2eBordStrPtr VAR_3;


 for( VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2 ) {
  VAR_3 = VAR_1[VAR_2];
  if ( VAR_3 ) {
   FUNC_0( VAR_3 );
  }
 }
}
