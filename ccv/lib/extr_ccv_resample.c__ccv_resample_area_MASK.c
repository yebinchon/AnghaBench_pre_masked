
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cols; double rows; int type; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;
struct TYPE_6__ {int di; int si; float alpha; } ;
typedef TYPE_2__ ccv_area_alpha_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3)
{
 FUNC_2(VAR_2->cols > 0 && VAR_3->cols > 0);
 ccv_area_alpha_t* VAR_4 = (ccv_area_alpha_t*)FUNC_1(sizeof(ccv_area_alpha_t) * VAR_2->cols * 2);
 int VAR_5 = FUNC_0(VAR_2->type);
 double VAR_6 = (double)VAR_2->cols / VAR_3->cols;
 double VAR_7 = (double)VAR_2->rows / VAR_3->rows;
 double VAR_8 = 1.f / (VAR_6 * VAR_7);
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 for (VAR_9 = 0, VAR_14 = 0; VAR_9 < VAR_3->cols; VAR_9++)
 {
  double VAR_15 = VAR_9 * VAR_6, VAR_16 = VAR_15 + VAR_6;
  int VAR_17 = (int)(VAR_15 + 1.0 - 1e-6), VAR_18 = (int)(VAR_16);
  VAR_17 = FUNC_4(VAR_17, VAR_2->cols - 1);
  VAR_18 = FUNC_4(VAR_18, VAR_2->cols - 1);

  if (VAR_17 > VAR_15)
  {
   VAR_4[VAR_14].di = VAR_9 * VAR_5;
   VAR_4[VAR_14].si = (VAR_17 - 1) * VAR_5;
   VAR_4[VAR_14++].alpha = (float)((VAR_17 - VAR_15) * VAR_8);
  }

  for (VAR_11 = VAR_17; VAR_11 < VAR_18; VAR_11++)
  {
   VAR_4[VAR_14].di = VAR_9 * VAR_5;
   VAR_4[VAR_14].si = VAR_11 * VAR_5;
   VAR_4[VAR_14++].alpha = (float)VAR_8;
  }

  if (VAR_16 - VAR_18 > 1e-3)
  {
   VAR_4[VAR_14].di = VAR_9 * VAR_5;
   VAR_4[VAR_14].si = VAR_18 * VAR_5;
   VAR_4[VAR_14++].alpha = (float)((VAR_16 - VAR_18) * VAR_8);
  }
 }
 int VAR_19 = VAR_14;
 float* VAR_20 = (float*)FUNC_1(VAR_3->cols * VAR_5 * sizeof(float));
 float* VAR_21 = (float*)FUNC_1(VAR_3->cols * VAR_5 * sizeof(float));
 for (VAR_9 = 0; VAR_9 < VAR_3->cols * VAR_5; VAR_9++)
  VAR_20[VAR_9] = VAR_21[VAR_9] = 0;
 VAR_10 = 0;
 FUNC_3(VAR_2->type, VAR_0, VAR_3->type, VAR_1);

}
