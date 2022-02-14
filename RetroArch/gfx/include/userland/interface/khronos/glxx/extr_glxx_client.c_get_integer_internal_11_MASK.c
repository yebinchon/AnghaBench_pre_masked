
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pack; int unpack; } ;
struct TYPE_8__ {size_t client; } ;
struct TYPE_9__ {int element_array; int array; } ;
struct TYPE_11__ {TYPE_1__ alignment; TYPE_4__* attrib; TYPE_2__ active_texture; TYPE_3__ bound_buffer; } ;
struct TYPE_10__ {int buffer; int stride; int type; int size; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_5__ GLXX_CLIENT_STATE_T ;
typedef int CLIENT_THREAD_STATE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_5__* FUNC_0 (int *) ;
 int VAR_7 ;
 size_t VAR_8 ;





 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(CLIENT_THREAD_STATE_T *VAR_10, GLenum VAR_11, GLint *VAR_12)
{
   GLXX_CLIENT_STATE_T *VAR_13 = FUNC_0(VAR_10);

   FUNC_2(VAR_13 != ((void*)0));

   switch (VAR_11) {
   case 159:
      VAR_12[0] = (GLint) VAR_13->active_texture.client;
      return 1;
   case 134:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_6].size;
      return 1;
   case 132:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_6].type;
      return 1;
   case 133:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_6].stride;
      return 1;
   case 145:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_3].type;
      return 1;
   case 146:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_3].stride;
      return 1;
   case 157:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_0].size;
      return 1;
   case 155:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_0].type;
      return 1;
   case 156:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_0].stride;
      return 1;
   case 139:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_13->active_texture.client - VAR_8 + VAR_5].size;
      return 1;
   case 137:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_13->active_texture.client - VAR_8 + VAR_5].type;
      return 1;
   case 138:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_13->active_texture.client - VAR_8 + VAR_5].stride;
      return 1;
   case 141:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_4].type;
      return 1;
   case 142:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_4].stride;
      return 1;
   case 150:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_1].size;
      return 1;
   case 148:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_1].type;
      return 1;
   case 149:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_1].stride;
      return 1;
   case 130:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_2].size;
      return 1;
   case 128:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_2].type;
      return 1;
   case 129:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_2].stride;
      return 1;
   case 160:
      VAR_12[0] = (GLint) VAR_13->bound_buffer.array;
      return 1;
   case 154:
      VAR_12[0] = (GLint) VAR_13->bound_buffer.element_array;
      return 1;
   case 135:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_6].buffer;
      return 1;
   case 147:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_3].buffer;
      return 1;
   case 158:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_0].buffer;
      return 1;
   case 140:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_13->active_texture.client - VAR_8 + VAR_5].buffer;
      return 1;
   case 143:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_4].buffer;
      return 1;
   case 151:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_1].buffer;
      return 1;
   case 131:
      VAR_12[0] = (GLint) VAR_13->attrib[VAR_2].buffer;
      return 1;

   case 136:
      VAR_12[0] = (GLint) VAR_13->alignment.unpack;
      return 1;
   case 144:
      VAR_12[0] = (GLint) VAR_13->alignment.pack;
      return 1;



   case 152:
      VAR_12[0] = (GLint) VAR_9;
      return 1;
   case 153:
      VAR_12[0] = (GLint) VAR_7;
      return 1;


   default:
      FUNC_1();
      break;
   }

   return 0;
}
