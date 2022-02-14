
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_9__ {int buffers; } ;
typedef scalar_t__ GLuint ;
typedef int GLenum ;
typedef TYPE_1__ GLXX_CLIENT_STATE_T ;
typedef TYPE_2__ GLXX_BUFFER_INFO_T ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_1 (int,char*) ;
 int FUNC_2 (int *,scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;

void FUNC_4(GLXX_CLIENT_STATE_T *VAR_0, GLenum VAR_1, GLXX_BUFFER_INFO_T* VAR_2)
{
   GLuint VAR_3 = FUNC_0(VAR_0, VAR_1);

   if(VAR_3 != 0)
   {
      GLXX_BUFFER_INFO_T *VAR_4 = FUNC_3(&VAR_0->buffers, VAR_3);
      if(!VAR_4)
      {
         VAR_4 = FUNC_1(sizeof(GLXX_BUFFER_INFO_T), "GLXX_BUFFER_INFO_T");
         FUNC_2(&VAR_0->buffers, VAR_3, VAR_4);
      }
      VAR_2->id = VAR_3;

      *VAR_4 = *VAR_2;
   }
}
