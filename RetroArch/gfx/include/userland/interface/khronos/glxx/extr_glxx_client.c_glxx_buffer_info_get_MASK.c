
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ id; } ;
struct TYPE_8__ {int buffers; } ;
typedef scalar_t__ GLuint ;
typedef int GLenum ;
typedef TYPE_1__ GLXX_CLIENT_STATE_T ;
typedef TYPE_2__ GLXX_BUFFER_INFO_T ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

void FUNC_3(GLXX_CLIENT_STATE_T *VAR_0, GLenum VAR_1, GLXX_BUFFER_INFO_T* VAR_2)
{
   GLuint VAR_3 = FUNC_0(VAR_0, VAR_1);

   FUNC_2(VAR_2,0,sizeof(GLXX_BUFFER_INFO_T));

   VAR_2->id = 0;

   if(VAR_3 != 0)
   {
      GLXX_BUFFER_INFO_T *VAR_4 = FUNC_1(&VAR_0->buffers, VAR_3);
      if(VAR_4)
         *VAR_2 = *VAR_4;
   }
}
