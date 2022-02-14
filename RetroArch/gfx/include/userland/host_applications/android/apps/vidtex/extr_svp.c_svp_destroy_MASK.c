
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int created; int sema; int mutex; int timer; int wd_timer; scalar_t__ queue; scalar_t__ out_pool; scalar_t__ connection; int * camera; int * video_decode; int * reader; } ;
typedef TYPE_1__ SVP_T ;
typedef int MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(SVP_T *VAR_4)
{
   if (VAR_4)
   {
      MMAL_COMPONENT_T *VAR_5[] = { VAR_4->reader, VAR_4->video_decode, VAR_4->camera };
      MMAL_COMPONENT_T **VAR_6;


      FUNC_5(VAR_4);

      for (VAR_6 = VAR_5; VAR_6 < VAR_5 + FUNC_6(VAR_5); VAR_6++)
      {
         FUNC_1(*VAR_6);
      }


      if (VAR_4->connection)
      {
         FUNC_2(VAR_4->connection);
      }

      for (VAR_6 = VAR_5; VAR_6 < VAR_5 + FUNC_6(VAR_5); VAR_6++)
      {
         FUNC_0(*VAR_6);
      }


      if (VAR_4->out_pool)
      {
         FUNC_3(VAR_4->out_pool);
      }

      if (VAR_4->queue)
      {
         FUNC_4(VAR_4->queue);
      }

      if (VAR_4->created & VAR_3)
      {
         FUNC_10(&VAR_4->wd_timer);
      }

      if (VAR_4->created & VAR_2)
      {
         FUNC_10(&VAR_4->timer);
      }

      if (VAR_4->created & VAR_0)
      {
         FUNC_8(&VAR_4->mutex);
      }

      if (VAR_4->created & VAR_1)
      {
         FUNC_9(&VAR_4->sema);
      }

      FUNC_7(VAR_4);
   }
}
