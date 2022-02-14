
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int di; int si; unsigned int alpha; } ;
typedef TYPE_2__ ccv_int_alpha ;
struct TYPE_6__ {unsigned char* u8; } ;
struct TYPE_8__ {int cols; double rows; int step; TYPE_1__ data; int type; } ;
typedef TYPE_3__ ccv_dense_matrix_t ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (int,float) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(ccv_dense_matrix_t* VAR_0, ccv_dense_matrix_t* VAR_1)
{
 FUNC_2(VAR_0->cols > 0 && VAR_1->cols > 0);
 ccv_int_alpha* VAR_2 = (ccv_int_alpha*)FUNC_1(sizeof(ccv_int_alpha) * VAR_0->cols * 2);
 int VAR_3 = FUNC_3(FUNC_0(VAR_0->type), 1, 4);
 double VAR_4 = (double)VAR_0->cols / VAR_1->cols;
 double VAR_5 = (double)VAR_0->rows / VAR_1->rows;

 unsigned int VAR_6 = (int)(VAR_4 * VAR_5 * 0x10000);
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 for (VAR_7 = 0, VAR_12 = 0; VAR_7 < VAR_1->cols; VAR_7++)
 {
  double VAR_13 = VAR_7 * VAR_4, VAR_14 = VAR_13 + VAR_4;
  int VAR_15 = (int)(VAR_13 + 1.0 - 1e-6), VAR_16 = (int)(VAR_14);
  VAR_15 = FUNC_5(VAR_15, VAR_0->cols - 1);
  VAR_16 = FUNC_5(VAR_16, VAR_0->cols - 1);

  if (VAR_15 > VAR_13)
  {
   VAR_2[VAR_12].di = VAR_7 * VAR_3;
   VAR_2[VAR_12].si = (VAR_15 - 1) * VAR_3;
   VAR_2[VAR_12++].alpha = (unsigned int)((VAR_15 - VAR_13) * 0x100);
  }

  for (VAR_9 = VAR_15; VAR_9 < VAR_16; VAR_9++)
  {
   VAR_2[VAR_12].di = VAR_7 * VAR_3;
   VAR_2[VAR_12].si = VAR_9 * VAR_3;
   VAR_2[VAR_12++].alpha = 256;
  }

  if (VAR_14 - VAR_16 > 1e-3)
  {
   VAR_2[VAR_12].di = VAR_7 * VAR_3;
   VAR_2[VAR_12].si = VAR_16 * VAR_3;
   VAR_2[VAR_12++].alpha = (unsigned int)((VAR_14 - VAR_16) * 256);
  }
 }
 int VAR_17 = VAR_12;
 unsigned int* VAR_18 = (unsigned int*)FUNC_1(VAR_1->cols * VAR_3 * sizeof(unsigned int));
 unsigned int* VAR_19 = (unsigned int*)FUNC_1(VAR_1->cols * VAR_3 * sizeof(unsigned int));
 for (VAR_7 = 0; VAR_7 < VAR_1->cols * VAR_3; VAR_7++)
  VAR_18[VAR_7] = VAR_19[VAR_7] = 0;
 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_0->rows; VAR_10++)
 {
  unsigned char* VAR_20 = VAR_0->data.u8 + VAR_0->step * VAR_10;
  for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++)
  {
   int VAR_21 = VAR_2[VAR_12].di;
   unsigned int VAR_22 = VAR_2[VAR_12].alpha;
   for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
    VAR_18[VAR_21 + VAR_11] += VAR_20[VAR_2[VAR_12].si + VAR_11] * VAR_22;
  }
  if ((VAR_8 + 1) * VAR_5 <= VAR_10 + 1 || VAR_10 == VAR_0->rows - 1)
  {
   unsigned int VAR_23 = (int)(FUNC_4(VAR_10 + 1 - (VAR_8 + 1) * VAR_5, 0.f) * 256);
   unsigned int VAR_24 = 256 - VAR_23;
   unsigned char* VAR_25 = VAR_1->data.u8 + VAR_1->step * VAR_8;
   if (VAR_23 <= 0)
   {
    for (VAR_7 = 0; VAR_7 < VAR_1->cols * VAR_3; VAR_7++)
    {
     VAR_25[VAR_7] = FUNC_3((VAR_19[VAR_7] + VAR_18[VAR_7] * 256) / VAR_6, 0, 255);
     VAR_19[VAR_7] = VAR_18[VAR_7] = 0;
    }
   } else {
    for (VAR_7 = 0; VAR_7 < VAR_1->cols * VAR_3; VAR_7++)
    {
     VAR_25[VAR_7] = FUNC_3((VAR_19[VAR_7] + VAR_18[VAR_7] * VAR_24) / VAR_6, 0, 255);
     VAR_19[VAR_7] = VAR_18[VAR_7] * VAR_23;
     VAR_18[VAR_7] = 0;
    }
   }
   VAR_8++;
  }
  else
  {
   for(VAR_7 = 0; VAR_7 < VAR_1->cols * VAR_3; VAR_7++)
   {
    VAR_19[VAR_7] += VAR_18[VAR_7] * 256;
    VAR_18[VAR_7] = 0;
   }
  }
 }
}
