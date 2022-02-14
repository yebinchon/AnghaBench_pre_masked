
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int glIndex_t ;
struct TYPE_2__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int const*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ,int const*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_2( int VAR_6, const glIndex_t *VAR_7 ) {
 int VAR_8;

 VAR_8 = VAR_5->integer;


 if ( VAR_8 == 0 ) {
  if ( VAR_4 ) {
   VAR_8 = 2;
  } else {
   VAR_8 = 1;
  }
 }


 if ( VAR_8 == 2 ) {
  FUNC_1( VAR_1,
      VAR_6,
      VAR_0,
      VAR_7 );
  return;
 }

 if ( VAR_8 == 1 ) {
  FUNC_0( VAR_6, VAR_7, VAR_3 );
  return;
 }

 if ( VAR_8 == 3 ) {
  FUNC_0( VAR_6, VAR_7, VAR_2 );
  return;
 }


}
