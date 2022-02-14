
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double* vec3_t ;
typedef int clipHandle_t ;
struct TYPE_7__ {scalar_t__ deferred; int modelIcon; int headSkin; int headModel; int headOffset; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_6__ {int deferShader; } ;
struct TYPE_8__ {TYPE_1__ media; TYPE_2__* clientinfo; } ;


 int FUNC_0 (float,float,float,float,int ,int ,double*,double*) ;
 int FUNC_1 (float,float,float,float,int ) ;
 int FUNC_2 (double*,int ,double*) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (int ,double*,double*) ;

void FUNC_4( float VAR_3, float VAR_4, float VAR_5, float VAR_6, int VAR_7, vec3_t VAR_8 ) {
 clipHandle_t VAR_9;
 clientInfo_t *VAR_10;
 float VAR_11;
 vec3_t VAR_12;
 vec3_t VAR_13, VAR_14;

 VAR_10 = &VAR_2.clientinfo[ VAR_7 ];

 if ( VAR_0.integer ) {
  VAR_9 = VAR_10->headModel;
  if ( !VAR_9 ) {
   return;
  }


  FUNC_3( VAR_9, VAR_13, VAR_14 );

  VAR_12[2] = -0.5 * ( VAR_13[2] + VAR_14[2] );
  VAR_12[1] = 0.5 * ( VAR_13[1] + VAR_14[1] );



  VAR_11 = 0.7 * ( VAR_14[2] - VAR_13[2] );
  VAR_12[0] = VAR_11 / 0.268;


  FUNC_2( VAR_12, VAR_10->headOffset, VAR_12 );

  FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6, VAR_10->headModel, VAR_10->headSkin, VAR_12, VAR_8 );
 } else if ( VAR_1.integer ) {
  FUNC_1( VAR_3, VAR_4, VAR_5, VAR_6, VAR_10->modelIcon );
 }


 if ( VAR_10->deferred ) {
  FUNC_1( VAR_3, VAR_4, VAR_5, VAR_6, VAR_2.media.deferShader );
 }
}
