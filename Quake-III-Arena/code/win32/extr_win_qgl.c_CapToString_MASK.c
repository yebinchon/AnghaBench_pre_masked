
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLenum ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char * FUNC_1( GLenum VAR_0 )
{
 static char VAR_1[1024];

 switch ( VAR_0 )
 {
 case 130:
  return "GL_TEXTURE_2D";
 case 136:
  return "GL_BLEND";
 case 132:
  return "GL_DEPTH_TEST";
 case 133:
  return "GL_CULL_FACE";
 case 135:
  return "GL_CLIP_PLANE0";
 case 134:
  return "GL_COLOR_ARRAY";
 case 129:
  return "GL_TEXTURE_COORD_ARRAY";
 case 128:
  return "GL_VERTEX_ARRAY";
 case 137:
  return "GL_ALPHA_TEST";
 case 131:
  return "GL_STENCIL_TEST";
 default:
  FUNC_0( VAR_1, "0x%x", VAR_0 );
 }

 return VAR_1;
}
