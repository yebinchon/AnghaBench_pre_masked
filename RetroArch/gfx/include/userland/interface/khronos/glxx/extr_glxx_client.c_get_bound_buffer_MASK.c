
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int element_array; int array; } ;
struct TYPE_5__ {TYPE_1__ bound_buffer; } ;
typedef int GLuint ;
typedef int GLenum ;
typedef TYPE_2__ GLXX_CLIENT_STATE_T ;





__attribute__((used)) static GLuint FUNC_0(GLXX_CLIENT_STATE_T *VAR_0, GLenum VAR_1)
{
   GLuint VAR_2 = 0;

   switch (VAR_1) {
   case 129:
      VAR_2 = VAR_0->bound_buffer.array;
      break;
   case 128:
      VAR_2 = VAR_0->bound_buffer.element_array;
      break;
   default:
      break;
   }
   return VAR_2;
}
