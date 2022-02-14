
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int* f32; unsigned char* u8; } ;
struct TYPE_14__ {TYPE_3__* w; } ;
struct TYPE_15__ {int count; int rows; int cols; int type; struct TYPE_15__* w; struct TYPE_15__* part; TYPE_1__ data; TYPE_2__ root; int counterpart; int * alpha; int dyy; int dxx; int dy; int dx; int z; int y; int x; int beta; } ;
typedef TYPE_3__ ccv_dpm_root_classifier_t ;
typedef TYPE_3__ ccv_dpm_part_classifier_t ;
struct TYPE_16__ {int count; TYPE_3__* root; } ;
typedef TYPE_5__ ccv_dpm_mixture_model_t ;
typedef TYPE_3__ ccv_dense_matrix_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int,int,int) ;
 void* FUNC_4 (int,int,int,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;

ccv_dpm_mixture_model_t* FUNC_11(const char* VAR_1)
{
 FILE* VAR_2 = FUNC_7(VAR_1, "r");
 if (VAR_2 == 0)
  return 0;
 int VAR_3;
 char VAR_4;
 FUNC_8(VAR_2, "%c", &VAR_4);
 FUNC_0(VAR_4 == '.');
 FUNC_8(VAR_2, "%d", &VAR_3);
 ccv_dpm_root_classifier_t* VAR_5 = (ccv_dpm_root_classifier_t*)FUNC_2(sizeof(ccv_dpm_root_classifier_t) * VAR_3);
 FUNC_10(VAR_5, 0, sizeof(ccv_dpm_root_classifier_t) * VAR_3);
 int VAR_6, VAR_7, VAR_8;
 size_t VAR_9 = sizeof(ccv_dpm_mixture_model_t) + sizeof(ccv_dpm_root_classifier_t) * VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  int VAR_10, VAR_11;
  FUNC_8(VAR_2, "%d %d", &VAR_10, &VAR_11);
  FUNC_8(VAR_2, "%f %f %f %f", &VAR_5[VAR_6].beta, &VAR_5[VAR_6].alpha[0], &VAR_5[VAR_6].alpha[1], &VAR_5[VAR_6].alpha[2]);
  VAR_5[VAR_6].root.w = FUNC_4(VAR_10, VAR_11, VAR_0 | 31, FUNC_2(FUNC_3(VAR_10, VAR_11, VAR_0 | 31)), 0);
  VAR_9 += FUNC_3(VAR_10, VAR_11, VAR_0 | 31);
  for (VAR_7 = 0; VAR_7 < VAR_10 * VAR_11 * 31; VAR_7++)
   FUNC_8(VAR_2, "%f", &VAR_5[VAR_6].root.w->data.f32[VAR_7]);
  FUNC_5(VAR_5[VAR_6].root.w);
  FUNC_8(VAR_2, "%d", &VAR_5[VAR_6].count);
  ccv_dpm_part_classifier_t* VAR_12 = (ccv_dpm_part_classifier_t*)FUNC_2(sizeof(ccv_dpm_part_classifier_t) * VAR_5[VAR_6].count);
  VAR_9 += sizeof(ccv_dpm_part_classifier_t) * VAR_5[VAR_6].count;
  for (VAR_7 = 0; VAR_7 < VAR_5[VAR_6].count; VAR_7++)
  {
   FUNC_8(VAR_2, "%d %d %d", &VAR_12[VAR_7].x, &VAR_12[VAR_7].y, &VAR_12[VAR_7].z);
   FUNC_8(VAR_2, "%lf %lf %lf %lf", &VAR_12[VAR_7].dx, &VAR_12[VAR_7].dy, &VAR_12[VAR_7].dxx, &VAR_12[VAR_7].dyy);
   FUNC_8(VAR_2, "%f %f %f %f %f %f", &VAR_12[VAR_7].alpha[0], &VAR_12[VAR_7].alpha[1], &VAR_12[VAR_7].alpha[2], &VAR_12[VAR_7].alpha[3], &VAR_12[VAR_7].alpha[4], &VAR_12[VAR_7].alpha[5]);
   FUNC_8(VAR_2, "%d %d %d", &VAR_10, &VAR_11, &VAR_12[VAR_7].counterpart);
   VAR_12[VAR_7].w = FUNC_4(VAR_10, VAR_11, VAR_0 | 31, FUNC_2(FUNC_3(VAR_10, VAR_11, VAR_0 | 31)), 0);
   VAR_9 += FUNC_3(VAR_10, VAR_11, VAR_0 | 31);
   for (VAR_8 = 0; VAR_8 < VAR_10 * VAR_11 * 31; VAR_8++)
    FUNC_8(VAR_2, "%f", &VAR_12[VAR_7].w->data.f32[VAR_8]);
   FUNC_5(VAR_12[VAR_7].w);
  }
  VAR_5[VAR_6].part = VAR_12;
 }
 FUNC_6(VAR_2);
 unsigned char* VAR_13 = (unsigned char*)FUNC_2(VAR_9);
 ccv_dpm_mixture_model_t* VAR_14 = (ccv_dpm_mixture_model_t*)VAR_13;
 VAR_13 += sizeof(ccv_dpm_mixture_model_t);
 VAR_14->count = VAR_3;
 VAR_14->root = (ccv_dpm_root_classifier_t*)VAR_13;
 VAR_13 += sizeof(ccv_dpm_root_classifier_t) * VAR_14->count;
 FUNC_9(VAR_14->root, VAR_5, sizeof(ccv_dpm_root_classifier_t) * VAR_14->count);
 FUNC_1(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_14->count; VAR_6++)
 {
  ccv_dpm_part_classifier_t* VAR_15 = VAR_14->root[VAR_6].part;
  VAR_14->root[VAR_6].part = (ccv_dpm_part_classifier_t*)VAR_13;
  VAR_13 += sizeof(ccv_dpm_part_classifier_t) * VAR_14->root[VAR_6].count;
  FUNC_9(VAR_14->root[VAR_6].part, VAR_15, sizeof(ccv_dpm_part_classifier_t) * VAR_14->root[VAR_6].count);
  FUNC_1(VAR_15);
 }
 for (VAR_6 = 0; VAR_6 < VAR_14->count; VAR_6++)
 {
  ccv_dense_matrix_t* VAR_16 = VAR_14->root[VAR_6].root.w;
  VAR_14->root[VAR_6].root.w = (ccv_dense_matrix_t*)VAR_13;
  VAR_13 += FUNC_3(VAR_16->rows, VAR_16->cols, VAR_16->type);
  FUNC_9(VAR_14->root[VAR_6].root.w, VAR_16, FUNC_3(VAR_16->rows, VAR_16->cols, VAR_16->type));
  VAR_14->root[VAR_6].root.w->data.u8 = (unsigned char*)(VAR_14->root[VAR_6].root.w + 1);
  FUNC_1(VAR_16);
  for (VAR_7 = 0; VAR_7 < VAR_14->root[VAR_6].count; VAR_7++)
  {
   VAR_16 = VAR_14->root[VAR_6].part[VAR_7].w;
   VAR_14->root[VAR_6].part[VAR_7].w = (ccv_dense_matrix_t*)VAR_13;
   VAR_13 += FUNC_3(VAR_16->rows, VAR_16->cols, VAR_16->type);
   FUNC_9(VAR_14->root[VAR_6].part[VAR_7].w, VAR_16, FUNC_3(VAR_16->rows, VAR_16->cols, VAR_16->type));
   VAR_14->root[VAR_6].part[VAR_7].w->data.u8 = (unsigned char*)(VAR_14->root[VAR_6].part[VAR_7].w + 1);
   FUNC_1(VAR_16);
  }
 }
 return VAR_14;
}
