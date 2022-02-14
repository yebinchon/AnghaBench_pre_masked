
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gl_error_assist; } ;
typedef int GLenum ;





 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_2(GLenum VAR_3, const char *VAR_4)
{
   if (VAR_1.gl_error_assist && VAR_3 != VAR_0)
   {
      FUNC_1(VAR_2, "V3D ERROR ASSIST : ");
      switch (VAR_3)
      {
      case 131 : FUNC_1(VAR_2, "GL_INVALID_ENUM in %s\n", VAR_4); break;
      case 129 : FUNC_1(VAR_2, "GL_INVALID_VALUE in %s\n", VAR_4); break;
      case 130 : FUNC_1(VAR_2, "GL_INVALID_OPERATION in %s\n", VAR_4); break;
      case 128 : FUNC_1(VAR_2, "GL_OUT_OF_MEMORY in %s\n", VAR_4); break;
      default : FUNC_1(VAR_2, "ERROR CODE %d in %s\n", (int)VAR_3, VAR_4); break;
      }
      FUNC_0(VAR_2);
   }
}
