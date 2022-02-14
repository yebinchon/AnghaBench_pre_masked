
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ stride; int * frame; } ;
struct TYPE_9__ {scalar_t__ stride; int * frame; } ;
struct TYPE_8__ {scalar_t__ stride; scalar_t__ height; scalar_t__ width; int * frame; } ;
struct TYPE_7__ {int * filter_pos; scalar_t__ filter_stride; scalar_t__ filter_len; int * filter; } ;
struct TYPE_6__ {int * filter_pos; scalar_t__ filter_stride; scalar_t__ filter_len; int * filter; } ;
struct scaler_ctx {TYPE_5__ output; TYPE_4__ input; TYPE_3__ scaled; TYPE_2__ vert; TYPE_1__ horiz; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct scaler_ctx *VAR_0)
{
   if (VAR_0->horiz.filter)
      FUNC_0(VAR_0->horiz.filter);
   if (VAR_0->horiz.filter_pos)
      FUNC_0(VAR_0->horiz.filter_pos);
   if (VAR_0->vert.filter)
      FUNC_0(VAR_0->vert.filter);
   if (VAR_0->vert.filter_pos)
      FUNC_0(VAR_0->vert.filter_pos);
   if (VAR_0->scaled.frame)
      FUNC_0(VAR_0->scaled.frame);
   if (VAR_0->input.frame)
      FUNC_0(VAR_0->input.frame);
   if (VAR_0->output.frame)
      FUNC_0(VAR_0->output.frame);

   VAR_0->horiz.filter = ((void*)0);
   VAR_0->horiz.filter_len = 0;
   VAR_0->horiz.filter_stride = 0;
   VAR_0->horiz.filter_pos = ((void*)0);

   VAR_0->vert.filter = ((void*)0);
   VAR_0->vert.filter_len = 0;
   VAR_0->vert.filter_stride = 0;
   VAR_0->vert.filter_pos = ((void*)0);

   VAR_0->scaled.frame = ((void*)0);
   VAR_0->scaled.width = 0;
   VAR_0->scaled.height = 0;
   VAR_0->scaled.stride = 0;

   VAR_0->input.frame = ((void*)0);
   VAR_0->input.stride = 0;

   VAR_0->output.frame = ((void*)0);
   VAR_0->output.stride = 0;
}
