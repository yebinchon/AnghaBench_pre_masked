
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct scaler_ctx {int in_width; int in_height; int out_width; int out_height; int in_stride; int out_stride; int scaler_type; int out_fmt; int in_fmt; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {int pbo_readback_enable; int * pbo_readback; TYPE_1__ vp; struct scaler_ctx pbo_readback_scaler; } ;
typedef TYPE_2__ gl_core_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct scaler_ctx*) ;

__attribute__((used)) static bool FUNC_7(gl_core_t *VAR_6)
{
   unsigned VAR_7;
   struct scaler_ctx *VAR_8 = ((void*)0);

   FUNC_4(VAR_0, VAR_6->pbo_readback);

   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   {
      FUNC_1(VAR_1, VAR_6->pbo_readback[VAR_7]);
      FUNC_2(VAR_1, VAR_6->vp.width * VAR_6->vp.height * sizeof(uint32_t), ((void*)0), VAR_2);
   }
   FUNC_1(VAR_1, 0);

   VAR_8 = &VAR_6->pbo_readback_scaler;

   VAR_8->in_width = VAR_6->vp.width;
   VAR_8->in_height = VAR_6->vp.height;
   VAR_8->out_width = VAR_6->vp.width;
   VAR_8->out_height = VAR_6->vp.height;
   VAR_8->in_stride = VAR_6->vp.width * sizeof(uint32_t);
   VAR_8->out_stride = VAR_6->vp.width * 3;
   VAR_8->in_fmt = VAR_3;
   VAR_8->out_fmt = VAR_4;
   VAR_8->scaler_type = VAR_5;

   if (!FUNC_6(VAR_8))
   {
      VAR_6->pbo_readback_enable = 0;
      FUNC_0("[GLCore]: Failed to initialize pixel conversion for PBO.\n");
      FUNC_3(4, VAR_6->pbo_readback);
      FUNC_5(VAR_6->pbo_readback, 0, sizeof(VAR_6->pbo_readback));
      return 0;
   }

   return 1;
}
