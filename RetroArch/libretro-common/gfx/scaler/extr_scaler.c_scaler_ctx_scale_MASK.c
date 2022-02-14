
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int stride; void* frame; } ;
struct TYPE_3__ {void* frame; int stride; } ;
struct scaler_ctx {int in_stride; int out_stride; scalar_t__ in_fmt; scalar_t__ out_fmt; TYPE_2__ output; int out_height; int out_width; int (* out_pixconv ) (void*,void*,int ,int ,int,int) ;int (* scaler_vert ) (struct scaler_ctx*,void*,int) ;int (* scaler_horiz ) (struct scaler_ctx*,void const*,int) ;int in_height; int in_width; int (* scaler_special ) (struct scaler_ctx*,void*,void const*,int ,int ,int ,int ,int,int) ;TYPE_1__ input; int (* in_pixconv ) (void*,void const*,int ,int ,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void const*,int ,int ,int,int) ;
 int FUNC_1 (struct scaler_ctx*,void*,void const*,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (struct scaler_ctx*,void const*,int) ;
 int FUNC_3 (struct scaler_ctx*,void*,int) ;
 int FUNC_4 (void*,void*,int ,int ,int,int) ;

void FUNC_5(struct scaler_ctx *VAR_1,
      void *VAR_2, const void *VAR_3)
{
   const void *VAR_4 = VAR_3;
   void *VAR_5 = VAR_2;
   int VAR_6 = VAR_1->in_stride;
   int VAR_7 = VAR_1->out_stride;

   if (VAR_1->in_fmt != VAR_0)
   {
      VAR_1->in_pixconv(VAR_1->input.frame, VAR_3,
            VAR_1->in_width, VAR_1->in_height,
            VAR_1->input.stride, VAR_1->in_stride);

      VAR_4 = VAR_1->input.frame;
      VAR_6 = VAR_1->input.stride;
   }

   if (VAR_1->out_fmt != VAR_0)
   {
      VAR_5 = VAR_1->output.frame;
      VAR_7 = VAR_1->output.stride;
   }


   if (VAR_1->scaler_special)
      VAR_1->scaler_special(VAR_1, VAR_5, VAR_4,
            VAR_1->out_width, VAR_1->out_height,
            VAR_1->in_width, VAR_1->in_height,
            VAR_7, VAR_6);
   else
   {

      if (VAR_1->scaler_horiz)
         VAR_1->scaler_horiz(VAR_1, VAR_4, VAR_6);
      if (VAR_1->scaler_vert)
         VAR_1->scaler_vert (VAR_1, VAR_2, VAR_7);
   }

   if (VAR_1->out_fmt != VAR_0)
      VAR_1->out_pixconv(VAR_2, VAR_1->output.frame,
            VAR_1->out_width, VAR_1->out_height,
            VAR_1->out_stride, VAR_1->output.stride);
}
