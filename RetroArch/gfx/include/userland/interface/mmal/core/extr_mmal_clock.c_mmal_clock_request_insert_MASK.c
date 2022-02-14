
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* list_pending; } ;
struct TYPE_13__ {scalar_t__ scale; scalar_t__ stop_thread; TYPE_1__ request; } ;
struct TYPE_12__ {scalar_t__ media_time_adj; int link; } ;
struct TYPE_11__ {scalar_t__ length; scalar_t__ last; } ;
typedef TYPE_2__ MMAL_LIST_T ;
typedef TYPE_3__ MMAL_CLOCK_REQUEST_T ;
typedef TYPE_4__ MMAL_CLOCK_PRIVATE_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_3(MMAL_CLOCK_PRIVATE_T *VAR_4, MMAL_CLOCK_REQUEST_T *VAR_5)
{
   MMAL_LIST_T *VAR_6 = VAR_4->request.list_pending;
   MMAL_CLOCK_REQUEST_T *VAR_7;

   if (VAR_4->stop_thread)
      return VAR_0;

   if (VAR_6->length == 0)
   {
      FUNC_2(VAR_6, &VAR_5->link);
      return VAR_1;
   }




   VAR_7 = (MMAL_CLOCK_REQUEST_T*)VAR_6->last;
   if ((VAR_4->scale >= 0 && (VAR_5->media_time_adj >= VAR_7->media_time_adj)) ||
       (VAR_4->scale < 0 && (VAR_5->media_time_adj <= VAR_7->media_time_adj)))
   {
      FUNC_1(VAR_6, &VAR_5->link);
   }
   else
   {
      FUNC_0(VAR_6, &VAR_5->link,
            (VAR_4->scale >= 0) ? VAR_3 : VAR_2);
   }
   return VAR_1;
}
