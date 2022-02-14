
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qhandle_t ;
struct TYPE_2__ {int (* DrawStretchPic ) (float,float,float,float,int ,int ,int,int,int ) ;int (* RegisterShader ) (char const*) ;} ;


 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (float,float,float,float,int ,int ,int,int,int ) ;

void FUNC_4( float VAR_1, float VAR_2, float VAR_3, float VAR_4, const char *VAR_5 ) {
 qhandle_t VAR_6;

 FUNC_1( VAR_3 != 0 );

 VAR_6 = VAR_0.RegisterShader( VAR_5 );
 FUNC_0( &VAR_1, &VAR_2, &VAR_3, &VAR_4 );
 VAR_0.DrawStretchPic( VAR_1, VAR_2, VAR_3, VAR_4, 0, 0, 1, 1, VAR_6 );
}
