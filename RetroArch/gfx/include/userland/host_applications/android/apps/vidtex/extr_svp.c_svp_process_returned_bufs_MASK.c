
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int data; } ;
struct TYPE_11__ {int ctx; int (* video_frame_cb ) (int ,int ) ;} ;
struct TYPE_9__ {int video_frame_count; } ;
struct TYPE_10__ {TYPE_1__ stats; int queue; TYPE_3__ callbacks; } ;
typedef TYPE_2__ SVP_T ;
typedef TYPE_3__ SVP_CALLBACKS_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(SVP_T *VAR_1)
{
   SVP_CALLBACKS_T *VAR_2 = &VAR_1->callbacks;
   MMAL_BUFFER_HEADER_T *VAR_3;

   while ((VAR_3 = FUNC_1(VAR_1->queue)) != ((void*)0))
   {
      if ((FUNC_3(VAR_1) & VAR_0) == 0)
      {
         VAR_2->video_frame_cb(VAR_2->ctx, VAR_3->data);
      }

      VAR_1->stats.video_frame_count++;
      FUNC_0(VAR_3);
   }
}
