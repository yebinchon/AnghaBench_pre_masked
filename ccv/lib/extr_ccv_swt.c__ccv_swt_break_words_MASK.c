
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int neighbors; int rect; TYPE_8__** letters; } ;
typedef TYPE_2__ ccv_textline_t ;
struct TYPE_17__ {double breakdown_ratio; } ;
typedef TYPE_3__ ccv_swt_param_t ;
typedef int ccv_rect_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_18__ {int rnum; } ;
typedef TYPE_4__ ccv_array_t ;
struct TYPE_15__ {scalar_t__ width; scalar_t__ x; } ;
struct TYPE_19__ {TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__**,int,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_8__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__**) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_6 (int,int,int ) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int,int,int,int*,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *,double*,int) ;
 double FUNC_11 (double) ;

__attribute__((used)) static ccv_array_t* FUNC_12(ccv_array_t* VAR_2, ccv_swt_param_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->rnum; VAR_4++)
 {
  ccv_textline_t* VAR_7 = (ccv_textline_t*)FUNC_5(VAR_2, VAR_4);
  if (VAR_7->neighbors - 1 > VAR_6)
   VAR_6 = VAR_7->neighbors - 1;
 }
 FUNC_3(VAR_6 > 0);
 int* VAR_8 = (int*)FUNC_2(VAR_6 * sizeof(int));
 ccv_array_t* VAR_9 = FUNC_6(sizeof(ccv_rect_t), VAR_2->rnum, 0);
 for (VAR_4 = 0; VAR_4 < VAR_2->rnum; VAR_4++)
 {
  ccv_textline_t* VAR_10 = (ccv_textline_t*)FUNC_5(VAR_2, VAR_4);
  FUNC_0(VAR_10->letters, VAR_10->neighbors, 0);
  int VAR_11 = 0;
  double VAR_12 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_10->neighbors - 1; VAR_5++)
  {
   VAR_8[VAR_5] = FUNC_9(0, VAR_10->letters[VAR_5 + 1]->rect.x - (VAR_10->letters[VAR_5]->rect.x + VAR_10->letters[VAR_5]->rect.width));
   if (VAR_8[VAR_5] >= VAR_11)
    VAR_11 = VAR_8[VAR_5] + 1;
   VAR_12 += VAR_8[VAR_5];
  }
  ccv_dense_matrix_t VAR_13 = FUNC_8(1, VAR_10->neighbors - 1, VAR_0 | VAR_1, VAR_8, 0);
  double VAR_14;
  int VAR_15 = FUNC_10(&VAR_13, &VAR_14, VAR_11);
  VAR_12 = VAR_12 / (VAR_10->neighbors - 1);
  if (FUNC_11(VAR_14) > VAR_12 * VAR_3.breakdown_ratio)
  {
   ccv_textline_t VAR_16 = { .neighbors = 0, .letters = 0 };
   FUNC_1(&VAR_16, VAR_10->letters[0]);
   for (VAR_5 = 0; VAR_5 < VAR_10->neighbors - 1; VAR_5++)
   {
    if (VAR_8[VAR_5] > VAR_15)
    {
     FUNC_7(VAR_9, &VAR_16.rect);
     if (VAR_16.letters)
      FUNC_4(VAR_16.letters);
     VAR_16.letters = 0;
     VAR_16.neighbors = 0;
    }
    FUNC_1(&VAR_16, VAR_10->letters[VAR_5 + 1]);
   }
   FUNC_7(VAR_9, &VAR_16.rect);
   if (VAR_16.letters)
    FUNC_4(VAR_16.letters);
  } else {
   FUNC_7(VAR_9, &(VAR_10->rect));
  }
 }
 return VAR_9;
}
