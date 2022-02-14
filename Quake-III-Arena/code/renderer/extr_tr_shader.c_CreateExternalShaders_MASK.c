
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* sunShader; void* flareShader; void* projectionShadowShader; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1( void ) {
 VAR_2.projectionShadowShader = FUNC_0( "projectionShadow", VAR_0, VAR_1 );
 VAR_2.flareShader = FUNC_0( "flareShader", VAR_0, VAR_1 );
 VAR_2.sunShader = FUNC_0( "sun", VAR_0, VAR_1 );
}
