
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int shader_t ;
typedef size_t qhandle_t ;
struct TYPE_4__ {int (* Printf ) (int ,char*,size_t) ;} ;
struct TYPE_3__ {size_t numShaders; int ** shaders; int * defaultShader; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,char*,size_t) ;
 TYPE_1__ VAR_2 ;

shader_t *FUNC_2( qhandle_t VAR_3 ) {
 if ( VAR_3 < 0 ) {
   VAR_1.Printf( VAR_0, "R_GetShaderByHandle: out of range hShader '%d'\n", VAR_3 );
  return VAR_2.defaultShader;
 }
 if ( VAR_3 >= VAR_2.numShaders ) {
  VAR_1.Printf( VAR_0, "R_GetShaderByHandle: out of range hShader '%d'\n", VAR_3 );
  return VAR_2.defaultShader;
 }
 return VAR_2.shaders[VAR_3];
}
