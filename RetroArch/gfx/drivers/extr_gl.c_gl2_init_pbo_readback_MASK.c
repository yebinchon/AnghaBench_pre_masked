
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
typedef TYPE_2__ gl_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct scaler_ctx*) ;

__attribute__((used)) static bool FUNC_7(gl_t *VAR_3)
{

   unsigned VAR_4;

   FUNC_5(4, VAR_3->pbo_readback);

   for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   {
      FUNC_1(VAR_3->pbo_readback[VAR_4]);
      FUNC_2(VAR_3->vp.width *
            VAR_3->vp.height * sizeof(uint32_t), ((void*)0));
   }
   FUNC_3();


   {
      struct scaler_ctx *VAR_5 = &VAR_3->pbo_readback_scaler;
      VAR_5->in_width = VAR_3->vp.width;
      VAR_5->in_height = VAR_3->vp.height;
      VAR_5->out_width = VAR_3->vp.width;
      VAR_5->out_height = VAR_3->vp.height;
      VAR_5->in_stride = VAR_3->vp.width * sizeof(uint32_t);
      VAR_5->out_stride = VAR_3->vp.width * 3;
      VAR_5->in_fmt = VAR_0;
      VAR_5->out_fmt = VAR_1;
      VAR_5->scaler_type = VAR_2;

      if (!FUNC_6(VAR_5))
      {
         VAR_3->pbo_readback_enable = 0;
         FUNC_0("[GL]: Failed to initialize pixel conversion for PBO.\n");
         FUNC_4(4, VAR_3->pbo_readback);
         return 0;
      }
   }


   return 1;





}
