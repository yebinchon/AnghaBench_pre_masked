
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int noctaves; int nlevels; int up2x; int edge_threshold; int peak_threshold; int norm_threshold; } ;
typedef TYPE_2__ ccv_sift_param_t ;
struct TYPE_16__ {double x; double y; } ;
typedef TYPE_3__ ccv_keypoint_t ;
struct TYPE_14__ {float* f32; } ;
struct TYPE_17__ {int cols; int rows; TYPE_1__ data; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_18__ {int rnum; } ;
typedef TYPE_5__ ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,TYPE_4__**,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__**,TYPE_4__**,int ,TYPE_2__) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (char*,unsigned int,...) ;

int FUNC_10(int VAR_2, char** VAR_3)
{
 FUNC_0(VAR_2 == 3);
 FUNC_4();
 ccv_dense_matrix_t* VAR_4 = 0;
 ccv_dense_matrix_t* VAR_5 = 0;
 FUNC_6(VAR_3[1], &VAR_4, VAR_1 | VAR_0);
 FUNC_6(VAR_3[2], &VAR_5, VAR_1 | VAR_0);
 unsigned int VAR_6 = FUNC_8();
 ccv_sift_param_t VAR_7 = {
  .noctaves = 3,
  .nlevels = 6,
  .up2x = 1,
  .edge_threshold = 10,
  .norm_threshold = 0,
  .peak_threshold = 0,
 };
 ccv_array_t* VAR_8 = 0;
 ccv_dense_matrix_t* VAR_9 = 0;
 FUNC_7(VAR_4, &VAR_8, &VAR_9, 0, VAR_7);
 ccv_array_t* VAR_10 = 0;
 ccv_dense_matrix_t* VAR_11 = 0;
 FUNC_7(VAR_5, &VAR_10, &VAR_11, 0, VAR_7);
 VAR_6 = FUNC_8() - VAR_6;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_8->rnum; VAR_12++)
 {
  float* VAR_16 = VAR_9->data.f32 + VAR_12 * 128;
  int VAR_17 = -1;
  double VAR_18 = 1e6, VAR_19 = 1e6;
  for (VAR_13 = 0; VAR_13 < VAR_10->rnum; VAR_13++)
  {
   float* VAR_20 = VAR_11->data.f32 + VAR_13 * 128;
   double VAR_21 = 0;
   for (VAR_14 = 0; VAR_14 < 128; VAR_14++)
   {
    VAR_21 += (VAR_16[VAR_14] - VAR_20[VAR_14]) * (VAR_16[VAR_14] - VAR_20[VAR_14]);
    if (VAR_21 > VAR_19)
     break;
   }
   if (VAR_21 < VAR_18)
   {
    VAR_19 = VAR_18;
    VAR_18 = VAR_21;
    VAR_17 = VAR_13;
   } else if (VAR_21 < VAR_19) {
    VAR_19 = VAR_21;
   }
  }
  if (VAR_18 < VAR_19 * 0.36)
  {
   ccv_keypoint_t* VAR_22 = (ccv_keypoint_t*)FUNC_2(VAR_8, VAR_12);
   ccv_keypoint_t* VAR_23 = (ccv_keypoint_t*)FUNC_2(VAR_10, VAR_17);
   FUNC_9("%f %f => %f %f\n", VAR_22->x, VAR_22->y, VAR_23->x, VAR_23->y);
   VAR_15++;
  }
 }
 FUNC_9("%dx%d on %dx%d\n", VAR_4->cols, VAR_4->rows, VAR_5->cols, VAR_5->rows);
 FUNC_9("%d keypoints out of %d are matched\n", VAR_15, VAR_8->rnum);
 FUNC_9("elpased time : %d\n", VAR_6);
 FUNC_1(VAR_8);
 FUNC_1(VAR_10);
 FUNC_5(VAR_9);
 FUNC_5(VAR_11);
 FUNC_5(VAR_4);
 FUNC_5(VAR_5);
 FUNC_3();
 return 0;
}
