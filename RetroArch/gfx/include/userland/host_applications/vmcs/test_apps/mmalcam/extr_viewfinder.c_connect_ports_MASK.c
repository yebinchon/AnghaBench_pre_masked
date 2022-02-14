
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ buffer_size; scalar_t__ buffer_size_recommended; scalar_t__ buffer_size_min; scalar_t__ buffer_num; scalar_t__ buffer_num_recommended; scalar_t__ buffer_num_min; scalar_t__ is_enabled; int format; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int **,int **) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_11(MMAL_PORT_T *VAR_2, MMAL_PORT_T *VAR_3, MMAL_QUEUE_T **VAR_4, MMAL_POOL_T **VAR_5)
{
   MMAL_STATUS_T VAR_6;

   VAR_6 = FUNC_2(VAR_3->format, VAR_2->format);
   if (VAR_6 != VAR_0)
      return VAR_6;

   VAR_6 = FUNC_8(VAR_3);
   if (VAR_6 != VAR_0)
      return VAR_6;

   if (FUNC_1())
   {
      VAR_6 = FUNC_4(VAR_2, VAR_3);
      if (VAR_6 != VAR_0)
         return VAR_6;

      VAR_6 = FUNC_7(VAR_2, ((void*)0));
      if (VAR_6 != VAR_0)
         FUNC_6(VAR_2);

      return VAR_6;
   }


   VAR_3->buffer_size = VAR_3->buffer_size_recommended;
   if (VAR_3->buffer_size < VAR_3->buffer_size_min)
      VAR_3->buffer_size = VAR_3->buffer_size_min;
   VAR_3->buffer_num = VAR_3->buffer_num_recommended;
   if (VAR_3->buffer_num < VAR_3->buffer_num_min)
      VAR_3->buffer_num = VAR_3->buffer_num_min;
   VAR_2->buffer_size = VAR_2->buffer_size_recommended;
   if (VAR_2->buffer_size < VAR_2->buffer_size_min)
      VAR_2->buffer_size = VAR_2->buffer_size_min;
   VAR_2->buffer_num = VAR_2->buffer_num_recommended;
   if (VAR_2->buffer_num < VAR_2->buffer_num_min)
      VAR_2->buffer_num = VAR_2->buffer_num_min;

   VAR_3->buffer_num = VAR_2->buffer_num =
      FUNC_0(VAR_3->buffer_num, VAR_2->buffer_num);
   VAR_3->buffer_size = VAR_2->buffer_size =
      FUNC_0(VAR_3->buffer_size, VAR_2->buffer_size);

   VAR_6 = FUNC_10(VAR_2, VAR_4, VAR_5);
   if (VAR_6 != VAR_0)
      goto error;

   VAR_6 = FUNC_7(VAR_3, VAR_1);
   if (VAR_6 != VAR_0)
      goto error;

   return VAR_6;

error:
   if (VAR_3->is_enabled)
      FUNC_5(VAR_3);
   if (VAR_2->is_enabled)
      FUNC_5(VAR_2);
   if (*VAR_5)
      FUNC_3(*VAR_5);
   if (*VAR_4)
      FUNC_9(*VAR_4);

   return VAR_6;
}
