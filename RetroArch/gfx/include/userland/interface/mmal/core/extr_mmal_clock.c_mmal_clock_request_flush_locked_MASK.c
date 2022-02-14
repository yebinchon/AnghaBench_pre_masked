
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int * list_free; int * list_pending; } ;
struct TYPE_7__ {scalar_t__ media_time_at_timer; int clock; TYPE_1__ request; } ;
struct TYPE_6__ {int link; int priv; int cb_data; int (* cb ) (int *,int ,int ,int ) ;} ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_LIST_T ;
typedef TYPE_2__ MMAL_CLOCK_REQUEST_T ;
typedef TYPE_3__ MMAL_CLOCK_PRIVATE_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_CLOCK_PRIVATE_T *VAR_1,
                                                     int64_t VAR_2)
{
   MMAL_LIST_T *VAR_3 = VAR_1->request.list_pending;
   MMAL_LIST_T *VAR_4 = VAR_1->request.list_free;
   MMAL_CLOCK_REQUEST_T *VAR_5;

   while ((VAR_5 = (MMAL_CLOCK_REQUEST_T *)FUNC_0(VAR_3)) != ((void*)0))
   {

      VAR_5->cb(&VAR_1->clock, VAR_2, VAR_5->cb_data, VAR_5->priv);

      FUNC_1(VAR_4, &VAR_5->link);
   }

   VAR_1->media_time_at_timer = 0;

   return VAR_0;
}
