
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int whiteShader; } ;
struct TYPE_3__ {int (* SetColor ) (float const*) ;int (* DrawStretchPic ) (float,float,float,float,int ,int ,int ,int ,int ) ;} ;


 int FUNC_0 (float*,float*,float*,float*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (float const*) ;
 int FUNC_2 (float,float,float,float,int ,int ,int ,int ,int ) ;
 int FUNC_3 (float const*) ;

void FUNC_4( float VAR_2, float VAR_3, float VAR_4, float VAR_5, const float *VAR_6 ) {
 VAR_1.SetColor( VAR_6 );

 FUNC_0( &VAR_2, &VAR_3, &VAR_4, &VAR_5 );
 VAR_1.DrawStretchPic( VAR_2, VAR_3, VAR_4, VAR_5, 0, 0, 0, 0, VAR_0.whiteShader );

 VAR_1.SetColor( ((void*)0) );
}
