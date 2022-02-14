
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ min_neighbors; } ;
typedef TYPE_3__ ccv_icf_param_t ;
typedef int ccv_icf_multiscale_classifier_cascade_t ;
typedef int ccv_icf_classifier_cascade_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_22__ {scalar_t__ id; scalar_t__ confidence; } ;
struct TYPE_21__ {scalar_t__ width; scalar_t__ height; int x; int y; } ;
struct TYPE_24__ {scalar_t__ neighbors; TYPE_2__ classification; TYPE_1__ rect; } ;
typedef TYPE_4__ ccv_comp_t ;
struct TYPE_25__ {int rnum; } ;
typedef TYPE_5__ ccv_array_t ;




 int FUNC_0 (int *,int **,int,TYPE_3__,TYPE_5__**) ;
 int FUNC_1 (int *,int **,int,TYPE_3__,TYPE_5__**) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_5__*,TYPE_5__**,int ,int ) ;
 TYPE_5__* FUNC_11 (int,int,int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_4__*) ;
 double FUNC_13 (scalar_t__,scalar_t__) ;

ccv_array_t* FUNC_14(ccv_dense_matrix_t* VAR_1, void* VAR_2, int VAR_3, ccv_icf_param_t VAR_4)
{
 FUNC_4(VAR_3 > 0);
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = *(((int**)VAR_2)[0]);
 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
 {

  FUNC_4(*(((int**)VAR_2)[VAR_5]) == VAR_8);
 }
 ccv_array_t** VAR_9 = (ccv_array_t**)FUNC_3(sizeof(ccv_array_t*) * VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_9[VAR_5] = FUNC_11(sizeof(ccv_comp_t), 64, 0);
 switch (VAR_8)
 {
  case 129:
   FUNC_0(VAR_1, (ccv_icf_classifier_cascade_t**)VAR_2, VAR_3, VAR_4, VAR_9);
   break;
  case 128:
   FUNC_1(VAR_1, (ccv_icf_multiscale_classifier_cascade_t**)VAR_2, VAR_3, VAR_4, VAR_9);
   break;
 }
 ccv_array_t* VAR_10 = FUNC_11(sizeof(ccv_comp_t), 64, 0);
 ccv_array_t* VAR_11 = FUNC_11(sizeof(ccv_comp_t), 64, 0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {

  if(VAR_4.min_neighbors == 0)
  {
   for (VAR_5 = 0; VAR_5 < VAR_9[VAR_7]->rnum; VAR_5++)
   {
    ccv_comp_t* VAR_12 = (ccv_comp_t*)FUNC_9(VAR_9[VAR_7], VAR_5);
    FUNC_12(VAR_10, VAR_12);
   }
  } else {
   ccv_array_t* VAR_13 = 0;
   FUNC_7(VAR_11);

   int VAR_14 = FUNC_10(VAR_9[VAR_7], &VAR_13, VAR_0, 0);
   ccv_comp_t* VAR_15 = (ccv_comp_t*)FUNC_5(VAR_14 + 1, sizeof(ccv_comp_t));


   for (VAR_5 = 0; VAR_5 < VAR_9[VAR_7]->rnum; VAR_5++)
   {
    ccv_comp_t VAR_16 = *(ccv_comp_t*)FUNC_9(VAR_9[VAR_7], VAR_5);
    int VAR_17 = *(int*)FUNC_9(VAR_13, VAR_5);

    VAR_15[VAR_17].classification.id = VAR_16;
    if (VAR_16 > VAR_15[VAR_17].classification.confidence || VAR_15[VAR_17].neighbors == 0)
    {
     VAR_15[VAR_17].rect = VAR_16;
     VAR_15[VAR_17].classification.confidence = VAR_16;
    }

    ++VAR_15[VAR_17].neighbors;
   }


   for (VAR_5 = 0; VAR_5 < VAR_14; VAR_5++)
   {
    int VAR_18 = VAR_15[VAR_5].neighbors;
    if (VAR_18 >= VAR_4.min_neighbors)
     FUNC_12(VAR_11, VAR_15 + VAR_5);
   }


   for (VAR_5 = 0; VAR_5 < VAR_11->rnum; VAR_5++)
   {
    ccv_comp_t* VAR_19 = (ccv_comp_t*)FUNC_9(VAR_11, VAR_5);
    int VAR_20 = (int)(FUNC_13(VAR_19->rect.width, VAR_19->rect.height) * 0.25 + 0.5);
    for (VAR_6 = 0; VAR_6 < VAR_11->rnum; VAR_6++)
    {
     ccv_comp_t VAR_21 = *(ccv_comp_t*)FUNC_9(VAR_11, VAR_6);
     if (VAR_5 != VAR_6 &&
      FUNC_2(VAR_21) == VAR_19->classification.id &&
      VAR_21 >= VAR_19->rect.x - VAR_20 &&
      VAR_21 >= VAR_19->rect.y - VAR_20 &&
      VAR_21 + VAR_21 <= VAR_19->rect.x + VAR_19->rect.width + VAR_20 &&
      VAR_21 + VAR_21 <= VAR_19->rect.y + VAR_19->rect.height + VAR_20 &&

      (VAR_19->classification.confidence <= VAR_21 && VAR_19->neighbors < VAR_21))
     {
      VAR_19->classification.id = -VAR_19->classification.id;
      break;
     }
    }
   }


   for (VAR_5 = 0; VAR_5 < VAR_11->rnum; VAR_5++)
   {
    ccv_comp_t VAR_22 = *(ccv_comp_t*)FUNC_9(VAR_11, VAR_5);
    if (VAR_22 > 0)
    {
     int VAR_23 = 1;

     for (VAR_6 = 0; VAR_6 < VAR_11->rnum; VAR_6++)
     {
      ccv_comp_t VAR_24 = *(ccv_comp_t*)FUNC_9(VAR_11, VAR_6);
      int VAR_25 = (int)(FUNC_13(VAR_24, VAR_24) * 0.25 + 0.5);

      if (VAR_5 != VAR_6 &&
       FUNC_2(VAR_22) == FUNC_2(VAR_24) &&
       VAR_22 >= VAR_24 - VAR_25 &&
       VAR_22 >= VAR_24 - VAR_25 &&
       VAR_22 + VAR_22 <= VAR_24 + VAR_24 + VAR_25 &&
       VAR_22 + VAR_22 <= VAR_24 + VAR_24 + VAR_25 &&

       (VAR_24 > VAR_22 || VAR_24 >= VAR_22))
      {
       VAR_23 = 0;
       break;
      }
     }

     if (VAR_23)
      FUNC_12(VAR_10, &VAR_22);
    }
   }
   FUNC_8(VAR_13);
   FUNC_6(VAR_15);
  }
  FUNC_8(VAR_9[VAR_7]);
 }
 FUNC_8(VAR_11);

 return VAR_10;
}
