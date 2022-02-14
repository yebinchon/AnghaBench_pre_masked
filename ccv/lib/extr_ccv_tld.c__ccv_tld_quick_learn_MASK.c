
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_30__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_26__ ;
typedef struct TYPE_41__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sfmt_t ;
typedef int dsfmt_t ;
struct TYPE_44__ {float nnc_collect; int track_deform; int rotation; scalar_t__ exclude_overlap; int track_deform_shift; int track_deform_scale; int track_deform_angle; } ;
struct TYPE_42__ {float width; float height; } ;
struct TYPE_41__ {double var_thres; int count; scalar_t__ ferns_thres; TYPE_4__** sv; TYPE_30__ params; TYPE_4__* top; TYPE_8__* ferns; scalar_t__ fern_buffer; scalar_t__ dsfmt; scalar_t__ sfmt; TYPE_26__ patch; } ;
typedef TYPE_1__ ccv_tld_t ;
struct TYPE_43__ {int rows; int cols; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;
struct TYPE_47__ {int width; int height; float x; float y; } ;
struct TYPE_45__ {int neighbors; TYPE_6__ rect; } ;
typedef TYPE_3__ ccv_comp_t ;
struct TYPE_46__ {int rnum; int rsize; } ;
typedef TYPE_4__ ccv_array_t ;
struct TYPE_48__ {int structs; scalar_t__ threshold; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_6__) ;
 int FUNC_1 (TYPE_8__*,TYPE_2__*,TYPE_3__,int*,int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__**,int ,TYPE_6__) ;
 TYPE_3__ FUNC_3 (int ,TYPE_26__,TYPE_6__,int,TYPE_4__**,TYPE_4__**,TYPE_30__) ;
 scalar_t__ FUNC_4 (TYPE_6__,TYPE_6__) ;
 float FUNC_5 (TYPE_1__*,TYPE_2__*,int ,int ,int*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;
 int* FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_8__*,int*,int,int) ;
 scalar_t__ FUNC_14 (TYPE_8__*,int*) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_6__ FUNC_16 (int,int,int,int) ;
 int FUNC_17 (int ,int ) ;
 double FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int*,scalar_t__,int) ;
 int FUNC_20 (int *,int*,int,int) ;
 float FUNC_21 (float) ;

__attribute__((used)) static int FUNC_22(ccv_tld_t* VAR_0, ccv_dense_matrix_t* VAR_1, ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_comp_t VAR_4)
{
 ccv_dense_matrix_t* VAR_5 = 0;
 float VAR_6 = FUNC_21((float)(VAR_4.rect.width * VAR_4.rect.height) / (VAR_0->patch.width * VAR_0->patch.height));

 VAR_4.rect = FUNC_16((int)(VAR_4.rect.x + (VAR_4.rect.width - VAR_0->patch.width * VAR_6) + 0.5),
        (int)(VAR_4.rect.y + (VAR_4.rect.height - VAR_0->patch.height * VAR_6) + 0.5),
        (int)(VAR_0->patch.width * VAR_6 + 0.5),
        (int)(VAR_0->patch.height * VAR_6 + 0.5));
 FUNC_2(VAR_0, VAR_1, &VAR_5, 0, VAR_4.rect);
 double VAR_7 = FUNC_18(VAR_5);
 int VAR_8, VAR_9;
 float VAR_10 = FUNC_5(VAR_0, VAR_5, 0, 0, &VAR_8, &VAR_9);
 FUNC_15(VAR_5);
 if (VAR_10 > VAR_0->params.nnc_collect && !VAR_9 && VAR_7 > VAR_0->var_thres)
 {
  ccv_array_t* VAR_11 = 0;
  ccv_array_t* VAR_12 = 0;
  ccv_comp_t VAR_13 = FUNC_3(FUNC_17(VAR_1->cols, VAR_1->rows), VAR_0->patch, VAR_4.rect, 10, &VAR_11, &VAR_12, VAR_0->params);
  int VAR_14, VAR_15, VAR_16 = VAR_11->rnum;

  for (VAR_14 = 0; VAR_14 < VAR_0->params.track_deform; VAR_14++)
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
   {


    ccv_comp_t VAR_17 = *(ccv_comp_t*)FUNC_11(VAR_11, VAR_15);
    FUNC_12(VAR_11, &VAR_17);
   }
  sfmt_t* VAR_18 = (sfmt_t*)VAR_0->sfmt;
  FUNC_20(VAR_18, FUNC_11(VAR_12, 0), VAR_12->rnum, VAR_12->rsize);
  int VAR_19 = (VAR_12->rnum * 4 + 3) / 6;
  int* VAR_20 = (int*)FUNC_9(sizeof(int) * (VAR_19 + VAR_11->rnum));
  for (VAR_14 = 0; VAR_14 < VAR_19 + VAR_11->rnum; VAR_14++)
   VAR_20[VAR_14] = VAR_14;
  FUNC_20(VAR_18, VAR_20, VAR_19 + VAR_11->rnum, sizeof(int));
  dsfmt_t* VAR_21 = (dsfmt_t*)VAR_0->dsfmt;
  uint32_t* VAR_22 = (uint32_t*)FUNC_9(sizeof(uint32_t) * VAR_0->ferns->structs * (VAR_19 + 1));
  int VAR_23 = VAR_0->count % (VAR_0->params.rotation + 1), VAR_24 = VAR_0->params.rotation + 1;

  for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
  {
   uint32_t* VAR_25 = VAR_22 + VAR_0->ferns->structs;
   for (VAR_15 = 0; VAR_15 < VAR_19 + VAR_11->rnum; VAR_15++)
   {
    VAR_16 = VAR_20[VAR_15];
    if (VAR_16 < VAR_19)
    {
     ccv_comp_t *VAR_26 = (ccv_comp_t*)FUNC_11(VAR_12, VAR_16);
     if (VAR_14 == 0)
     {
      FUNC_7(VAR_26->neighbors >= 0 && VAR_26->neighbors < VAR_13.neighbors);
      if (VAR_26->neighbors % VAR_24 == VAR_23 &&
       FUNC_0(VAR_2, VAR_3, VAR_26->rect) > VAR_0->var_thres)
      {

       FUNC_19(VAR_25, VAR_0->fern_buffer + VAR_26->neighbors * VAR_0->ferns->structs, sizeof(uint32_t) * VAR_0->ferns->structs);

       if (FUNC_14(VAR_0->ferns, VAR_25) >= VAR_0->ferns->threshold)
        FUNC_13(VAR_0->ferns, VAR_25, 0, 2);
       VAR_25 += VAR_0->ferns->structs;
      } else
       VAR_26->neighbors = -1;
     } else {
      if (VAR_26->neighbors < 0)
       continue;
      if (FUNC_14(VAR_0->ferns, VAR_25) >= VAR_0->ferns->threshold)
       FUNC_13(VAR_0->ferns, VAR_25, 0, 2);
      VAR_25 += VAR_0->ferns->structs;
     }
    } else {
     ccv_comp_t *VAR_27 = (ccv_comp_t*)FUNC_11(VAR_11, VAR_16 - VAR_19);
     FUNC_1(VAR_0->ferns, VAR_1, *VAR_27, VAR_22, VAR_21, VAR_0->params.track_deform_angle, VAR_0->params.track_deform_scale, VAR_0->params.track_deform_shift);

     if (FUNC_14(VAR_0->ferns, VAR_22) <= VAR_0->ferns_thres)
      FUNC_13(VAR_0->ferns, VAR_22, 1, 1);
    }
   }
  }
  FUNC_8(VAR_22);
  FUNC_10(VAR_12);
  FUNC_10(VAR_11);
  FUNC_8(VAR_20);

  ccv_dense_matrix_t* VAR_28 = 0;
  FUNC_2(VAR_0, VAR_1, &VAR_28, 0, VAR_13.rect);
  if (FUNC_6(VAR_0, VAR_28, 1) != 0)
   FUNC_15(VAR_28);
  for (VAR_14 = 0; VAR_14 < VAR_0->top->rnum; VAR_14++)
  {
   ccv_comp_t* VAR_29 = (ccv_comp_t*)FUNC_11(VAR_0->top, VAR_14);
   if (FUNC_4(VAR_29->rect, VAR_13.rect) < VAR_0->params.exclude_overlap)
   {
    ccv_dense_matrix_t* VAR_30 = 0;
    FUNC_2(VAR_0, VAR_1, &VAR_30, 0, VAR_29->rect);
    if (FUNC_6(VAR_0, VAR_30, 0) != 0)
     FUNC_15(VAR_30);
   }
  }

  FUNC_20(VAR_18, FUNC_11(VAR_0->sv[0], 0), VAR_0->sv[0]->rnum, sizeof(ccv_dense_matrix_t*));
  FUNC_20(VAR_18, FUNC_11(VAR_0->sv[1], 0), VAR_0->sv[1]->rnum, sizeof(ccv_dense_matrix_t*));
  return 0;
 }
 return -1;
}
