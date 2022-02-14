
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ read; scalar_t__ draw; scalar_t__ context; } ;
struct TYPE_5__ {scalar_t__ read; scalar_t__ draw; scalar_t__ context; } ;
struct TYPE_7__ {int high_priority; int async_error_notification; scalar_t__ glgeterror_hack; scalar_t__ merge_end; scalar_t__ merge_pos; TYPE_2__ openvg; TYPE_1__ opengl; int bound_api; int error; } ;
typedef TYPE_3__ CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(CLIENT_THREAD_STATE_T *VAR_2)
{
   VAR_2->error = VAR_1;

   VAR_2->bound_api = VAR_0;

   VAR_2->opengl.context = 0;
   VAR_2->opengl.draw = 0;
   VAR_2->opengl.read = 0;

   VAR_2->openvg.context = 0;
   VAR_2->openvg.draw = 0;
   VAR_2->openvg.read = 0;

   VAR_2->high_priority = 0;

   VAR_2->merge_pos = 0;
   VAR_2->merge_end = 0;

 VAR_2->glgeterror_hack = 0;
 VAR_2->async_error_notification = 0;
}
