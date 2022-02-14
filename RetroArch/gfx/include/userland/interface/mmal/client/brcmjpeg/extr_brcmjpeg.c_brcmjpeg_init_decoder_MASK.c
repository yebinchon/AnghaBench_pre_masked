
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__** input; int callback; TYPE_2__* user_data; } ;
struct TYPE_9__ {int buffer_num; int buffer_size; int buffer_size_min; TYPE_1__* format; } ;
struct TYPE_8__ {TYPE_4__* mmal; } ;
struct TYPE_7__ {int encoding; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ BRCMJPEG_T ;
typedef int BRCMJPEG_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__**,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static BRCMJPEG_STATUS_T FUNC_5(BRCMJPEG_T *VAR_6)
{
   MMAL_STATUS_T VAR_7;
   BRCMJPEG_STATUS_T VAR_8 = VAR_1;


   VAR_7 = FUNC_3(&VAR_6->mmal, VAR_3);
   FUNC_0(VAR_7, VAR_2, "failed to create decoder");
   VAR_6->mmal->user_data = VAR_6;
   VAR_6->mmal->callback = VAR_5;


   VAR_6->mmal->input[0]->format->encoding = VAR_4;
   VAR_7 = FUNC_2(VAR_6->mmal->input[0]);
   FUNC_0(VAR_7, VAR_2, "failed to commit input port format");

   VAR_6->mmal->input[0]->buffer_size = VAR_6->mmal->input[0]->buffer_size_min;
   VAR_6->mmal->input[0]->buffer_num = 3;
   VAR_7 = FUNC_4(VAR_6->mmal->input[0], 0);
   FUNC_0(VAR_7, VAR_2, "failed to enable input port");

   FUNC_1("decoder initialised (input chunk size %i)",
      VAR_6->mmal->input[0]->buffer_size);
   return VAR_1;

 error:
   return VAR_0;
}
