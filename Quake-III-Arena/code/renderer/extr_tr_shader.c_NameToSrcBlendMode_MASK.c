
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Printf ) (int ,char*,char const*,int ) ;} ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char const*,char*) ;
 TYPE_2__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_1 (int ,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_2( const char *VAR_12 )
{
 if ( !FUNC_0( VAR_12, "GL_ONE" ) )
 {
  return VAR_3;
 }
 else if ( !FUNC_0( VAR_12, "GL_ZERO" ) )
 {
  return VAR_8;
 }
 else if ( !FUNC_0( VAR_12, "GL_DST_COLOR" ) )
 {
  return VAR_2;
 }
 else if ( !FUNC_0( VAR_12, "GL_ONE_MINUS_DST_COLOR" ) )
 {
  return VAR_5;
 }
 else if ( !FUNC_0( VAR_12, "GL_SRC_ALPHA" ) )
 {
  return VAR_7;
 }
 else if ( !FUNC_0( VAR_12, "GL_ONE_MINUS_SRC_ALPHA" ) )
 {
  return VAR_6;
 }
 else if ( !FUNC_0( VAR_12, "GL_DST_ALPHA" ) )
 {
  return VAR_1;
 }
 else if ( !FUNC_0( VAR_12, "GL_ONE_MINUS_DST_ALPHA" ) )
 {
  return VAR_4;
 }
 else if ( !FUNC_0( VAR_12, "GL_SRC_ALPHA_SATURATE" ) )
 {
  return VAR_0;
 }

 VAR_10.Printf( VAR_9, "WARNING: unknown blend mode '%s' in shader '%s', substituting GL_ONE\n", VAR_12, VAR_11.name );
 return VAR_3;
}
