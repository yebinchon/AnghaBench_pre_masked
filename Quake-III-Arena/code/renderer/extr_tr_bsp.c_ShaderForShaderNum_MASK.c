
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ defaultShader; } ;
typedef TYPE_1__ shader_t ;
struct TYPE_12__ {int shader; } ;
typedef TYPE_2__ dshader_t ;
struct TYPE_18__ {scalar_t__ hardwareType; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {int (* Error ) (int ,char*,int) ;} ;
struct TYPE_14__ {int numShaders; TYPE_2__* shaders; } ;
struct TYPE_13__ {TYPE_1__* defaultShader; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 TYPE_8__ VAR_4 ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static shader_t *FUNC_3( int VAR_11, int VAR_12 ) {
 shader_t *VAR_13;
 dshader_t *VAR_14;

 VAR_11 = FUNC_0( VAR_11 );
 if ( VAR_11 < 0 || VAR_11 >= VAR_9.numShaders ) {
  VAR_8.Error( VAR_0, "ShaderForShaderNum: bad num %i", VAR_11 );
 }
 VAR_14 = &VAR_9.shaders[ VAR_11 ];

 if ( VAR_7->integer || VAR_4.hardwareType == VAR_1 ) {
  VAR_12 = VAR_2;
 }

 if ( VAR_6->integer ) {
  VAR_12 = VAR_3;
 }

 VAR_13 = FUNC_1( VAR_14->shader, VAR_12, VAR_5 );


 if ( VAR_13->defaultShader ) {
  return VAR_10.defaultShader;
 }

 return VAR_13;
}
