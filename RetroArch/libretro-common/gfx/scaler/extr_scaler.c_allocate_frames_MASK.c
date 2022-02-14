
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int stride; int * frame; } ;
struct TYPE_5__ {int stride; int * frame; } ;
struct TYPE_4__ {int stride; int width; int height; int * frame; } ;
struct scaler_ctx {int out_width; int in_height; scalar_t__ in_fmt; int in_width; scalar_t__ out_fmt; int out_height; TYPE_3__ output; TYPE_2__ input; TYPE_1__ scaled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static bool FUNC_1(struct scaler_ctx *VAR_1)
{
   uint64_t *VAR_2 = ((void*)0);
   VAR_1->scaled.stride = ((VAR_1->out_width + 7) & ~7) * sizeof(uint64_t);
   VAR_1->scaled.width = VAR_1->out_width;
   VAR_1->scaled.height = VAR_1->in_height;
   VAR_2 = (uint64_t*)FUNC_0(sizeof(uint64_t),
            (VAR_1->scaled.stride * VAR_1->scaled.height) >> 3);

   if (!VAR_2)
      return 0;

   VAR_1->scaled.frame = VAR_2;

   if (VAR_1->in_fmt != VAR_0)
   {
      uint32_t *VAR_3 = ((void*)0);
      VAR_1->input.stride = ((VAR_1->in_width + 7) & ~7) * sizeof(uint32_t);
      VAR_3 = (uint32_t*)FUNC_0(sizeof(uint32_t),
               (VAR_1->input.stride * VAR_1->in_height) >> 2);

      if (!VAR_3)
         return 0;

      VAR_1->input.frame = VAR_3;
   }

   if (VAR_1->out_fmt != VAR_0)
   {
      uint32_t *VAR_4 = ((void*)0);
      VAR_1->output.stride = ((VAR_1->out_width + 7) & ~7) * sizeof(uint32_t);

      VAR_4 = (uint32_t*)FUNC_0(sizeof(uint32_t),
               (VAR_1->output.stride * VAR_1->out_height) >> 2);

      if (!VAR_4)
         return 0;

      VAR_1->output.frame = VAR_4;
   }

   return 1;
}
