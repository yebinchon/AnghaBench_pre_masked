
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_6__ {int integer; } ;
struct TYPE_4__ {int smoke2; } ;
struct TYPE_5__ {TYPE_1__ media; } ;


 int FUNC_0 (double*,double*,int ) ;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (double*,double*) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 double FUNC_2 () ;

void FUNC_3( vec3_t VAR_4 ) {
 vec3_t VAR_5, VAR_6;

 if ( !VAR_2.integer ) {
  return;
 }

 FUNC_1( VAR_4, VAR_5 );
 VAR_6[0] = FUNC_2()*VAR_1;
 VAR_6[1] = FUNC_2()*VAR_1;
 VAR_6[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_5, VAR_6, VAR_3.media.smoke2 );

 FUNC_1( VAR_4, VAR_5 );
 VAR_6[0] = FUNC_2()*VAR_1;
 VAR_6[1] = FUNC_2()*VAR_1;
 VAR_6[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_5, VAR_6, VAR_3.media.smoke2 );

 FUNC_1( VAR_4, VAR_5 );
 VAR_6[0] = FUNC_2()*VAR_1*1.5;
 VAR_6[1] = FUNC_2()*VAR_1*1.5;
 VAR_6[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_5, VAR_6, VAR_3.media.smoke2 );

 FUNC_1( VAR_4, VAR_5 );
 VAR_6[0] = FUNC_2()*VAR_1*2.0;
 VAR_6[1] = FUNC_2()*VAR_1*2.0;
 VAR_6[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_5, VAR_6, VAR_3.media.smoke2 );

 FUNC_1( VAR_4, VAR_5 );
 VAR_6[0] = FUNC_2()*VAR_1*2.5;
 VAR_6[1] = FUNC_2()*VAR_1*2.5;
 VAR_6[2] = VAR_0 + FUNC_2()*VAR_1;
 FUNC_0( VAR_5, VAR_6, VAR_3.media.smoke2 );
}
