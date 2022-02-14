
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int enable_conf_interval; int n_subsample; int n_threads; int pool; int ms_ssim; int ssim; int psnr; int phone_model; int enable_transform; int log_fmt; int log_path; int model_path; int height; int width; int vmaf_score; int error; TYPE_2__* desc; } ;
struct TYPE_7__ {scalar_t__ name; TYPE_1__* comp; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_3__ LIBVMAFContext ;


 int FUNC_0 (int *,char*,int ,int ,int (*) (float*,float*,float*,int,void*),TYPE_3__*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (float*,float*,float*,int,void*) ;
 int FUNC_2 (float*,float*,float*,int,void*) ;

__attribute__((used)) static void FUNC_3(LIBVMAFContext *VAR_0)
{
    int (*VAR_1)(float *VAR_2, float *VAR_3, float *VAR_4,
                      int VAR_5, void *VAR_6);
    char *VAR_7;

    if (VAR_0->desc->comp[0].depth <= 8) {
        VAR_1 = FUNC_2;
    } else {
        VAR_1 = FUNC_1;
    }

    VAR_7 = (char *) VAR_0->desc->name;

    VAR_0->error = FUNC_0(&VAR_0->vmaf_score, VAR_7, VAR_0->width, VAR_0->height,
                            VAR_1, VAR_0, VAR_0->model_path, VAR_0->log_path,
                            VAR_0->log_fmt, 0, 0, VAR_0->enable_transform,
                            VAR_0->phone_model, VAR_0->psnr, VAR_0->ssim,
                            VAR_0->ms_ssim, VAR_0->pool,
                            VAR_0->n_threads, VAR_0->n_subsample, VAR_0->enable_conf_interval);
}
