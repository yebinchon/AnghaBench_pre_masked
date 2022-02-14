
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffers; } ;
typedef int GLuint ;
typedef TYPE_1__ GLXX_CLIENT_STATE_T ;
typedef int GLXX_BUFFER_INFO_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(GLXX_CLIENT_STATE_T *VAR_0, GLuint VAR_1)
{
   GLXX_BUFFER_INFO_T *VAR_2 = FUNC_2(&VAR_0->buffers, VAR_1);
   if(VAR_2)
   {
      FUNC_0(VAR_2);
      FUNC_1(&VAR_0->buffers,VAR_1);
   }
}
