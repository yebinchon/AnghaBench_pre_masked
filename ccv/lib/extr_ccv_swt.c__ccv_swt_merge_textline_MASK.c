
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int width; int height; } ;
struct TYPE_23__ {int dx; int dy; scalar_t__ neighbors; struct TYPE_23__* letters; TYPE_2__ rect; TYPE_5__* right; TYPE_5__* left; } ;
typedef TYPE_3__ ccv_textline_t ;
struct TYPE_24__ {double thickness_ratio; double height_ratio; int intensity_thresh; int distance_ratio; int intersect_ratio; scalar_t__ letter_thresh; int elongate_ratio; } ;
typedef TYPE_4__ ccv_swt_param_t ;
struct TYPE_21__ {double height; int x; int width; int y; } ;
struct TYPE_25__ {double thickness; int intensity; TYPE_1__ rect; } ;
typedef TYPE_5__ ccv_letter_t ;
typedef TYPE_3__ ccv_letter_pair_t ;
struct TYPE_26__ {int rnum; } ;
typedef TYPE_7__ ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (TYPE_7__*,TYPE_7__**,int ,int ) ;
 TYPE_7__* FUNC_7 (int,int,int ) ;
 int FUNC_8 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static ccv_array_t* FUNC_11(ccv_array_t* VAR_1, ccv_swt_param_t VAR_2)
{
 int VAR_3, VAR_4;
 ccv_array_t* VAR_5 = FUNC_7(sizeof(ccv_letter_pair_t), VAR_1->rnum, 0);
 double VAR_6 = 1.0 / VAR_2.thickness_ratio;
 double VAR_7 = 1.0 / VAR_2.height_ratio;
 for (VAR_3 = 0; VAR_3 < VAR_1->rnum - 1; VAR_3++)
 {
  ccv_letter_t* VAR_8 = (ccv_letter_t*)FUNC_5(VAR_1, VAR_3);
  for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_1->rnum; VAR_4++)
  {
   ccv_letter_t* VAR_9 = (ccv_letter_t*)FUNC_5(VAR_1, VAR_4);
   double VAR_10 = (double)VAR_8->thickness / VAR_9->thickness;
   if (VAR_10 > VAR_2.thickness_ratio || VAR_10 < VAR_6)
    continue;
   VAR_10 = (double)VAR_8->rect.height / VAR_9->rect.height;
   if (VAR_10 > VAR_2.height_ratio || VAR_10 < VAR_7)
    continue;
   if (FUNC_1(VAR_8->intensity - VAR_9->intensity) > VAR_2.intensity_thresh)
    continue;
   int VAR_11 = VAR_8->rect.x - VAR_9->rect.x + (VAR_8->rect.width - VAR_9->rect.width) / 2;
   int VAR_12 = VAR_8->rect.y - VAR_9->rect.y + (VAR_8->rect.height - VAR_9->rect.height) / 2;
   if (FUNC_1(VAR_11) > VAR_2.distance_ratio * FUNC_9(VAR_8->rect.width, VAR_9->rect.width))
    continue;
   int VAR_13 = FUNC_10(VAR_8->rect.y + VAR_8->rect.height, VAR_9->rect.y + VAR_9->rect.height) - FUNC_9(VAR_8->rect.y, VAR_9->rect.y);
   if (VAR_13 * VAR_2.intersect_ratio < FUNC_10(VAR_8->rect.height, VAR_9->rect.height))
    continue;
   ccv_letter_pair_t VAR_14 = { .left = VAR_8, .right = VAR_9, .dx = VAR_11, .dy = VAR_12 };
   FUNC_8(VAR_5, &VAR_14);
  }
 }
 ccv_array_t* VAR_15 = 0;
 int VAR_16 = FUNC_6(VAR_5, &VAR_15, VAR_0, 0);
 ccv_textline_t* VAR_17 = (ccv_textline_t*)FUNC_3(VAR_16 * sizeof(ccv_textline_t));
 for (VAR_3 = 0; VAR_3 < VAR_16; VAR_3++)
  VAR_17[VAR_3].neighbors = 0;
 for (VAR_3 = 0; VAR_3 < VAR_5->rnum; VAR_3++)
 {
  VAR_4 = *(int*)FUNC_5(VAR_15, VAR_3);
  FUNC_0(VAR_17 + VAR_4,((ccv_letter_pair_t*)FUNC_5(VAR_5, VAR_3))->left);
  FUNC_0(VAR_17 + VAR_4, ((ccv_letter_pair_t*)FUNC_5(VAR_5, VAR_3))->right);
 }
 FUNC_4(VAR_15);
 FUNC_4(VAR_5);
 ccv_array_t* VAR_18 = FUNC_7(sizeof(ccv_textline_t), 5, 0);
 for (VAR_3 = 0; VAR_3 < VAR_16; VAR_3++)
  if (VAR_17[VAR_3].neighbors >= VAR_2.letter_thresh && VAR_17[VAR_3].rect.width > VAR_17[VAR_3].rect.height * VAR_2.elongate_ratio)
   FUNC_8(VAR_18, VAR_17 + VAR_3);
  else if (VAR_17[VAR_3].neighbors > 0)
   FUNC_2(VAR_17[VAR_3].letters);
 FUNC_2(VAR_17);
 return VAR_18;
}
