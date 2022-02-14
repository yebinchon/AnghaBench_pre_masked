
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__** output; int control; int callback; TYPE_2__* user_data; } ;
struct TYPE_9__ {int buffer_num; int buffer_size; int buffer_size_min; TYPE_1__* format; } ;
struct TYPE_8__ {TYPE_4__* mmal; } ;
struct TYPE_7__ {int encoding; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ BRCMJPEG_T ;
typedef int BRCMJPEG_STATUS_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_4__**,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static BRCMJPEG_STATUS_T FUNC_6(BRCMJPEG_T *VAR_7)
{
   MMAL_STATUS_T VAR_8;
   BRCMJPEG_STATUS_T VAR_9 = VAR_0;


   VAR_8 = FUNC_4(&VAR_7->mmal, VAR_2);
   FUNC_0(VAR_8, VAR_1, "failed to create encoder");
   VAR_7->mmal->user_data = VAR_7;
   VAR_7->mmal->callback = VAR_6;


   FUNC_3(VAR_7->mmal->control,
      VAR_4, VAR_5);

   VAR_7->mmal->output[0]->format->encoding = VAR_3;
   VAR_8 = FUNC_2(VAR_7->mmal->output[0]);
   FUNC_0(VAR_8, VAR_1, "failed to commit output port format");

   VAR_7->mmal->output[0]->buffer_size = VAR_7->mmal->output[0]->buffer_size_min;
   VAR_7->mmal->output[0]->buffer_num = 3;
   VAR_8 = FUNC_5(VAR_7->mmal->output[0], 0);
   FUNC_0(VAR_8, VAR_1, "failed to enable output port");

   FUNC_1("encoder initialised (output chunk size %i)",
      VAR_7->mmal->output[0]->buffer_size);
   return VAR_0;

 error:
   return VAR_9;
}
