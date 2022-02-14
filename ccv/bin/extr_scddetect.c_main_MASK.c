
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_13__ {int size; } ;
typedef TYPE_3__ ccv_scd_param_t ;
typedef int ccv_scd_classifier_cascade_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_12__ {double confidence; } ;
struct TYPE_11__ {int x; int y; int width; int height; } ;
struct TYPE_14__ {TYPE_2__ classification; TYPE_1__ rect; } ;
typedef TYPE_4__ ccv_comp_t ;
struct TYPE_15__ {int rnum; } ;
typedef TYPE_5__ ccv_array_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int **,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 TYPE_3__ VAR_2 ;
 TYPE_5__* FUNC_9 (int *,int **,int,TYPE_3__) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 unsigned int FUNC_15 () ;
 int FUNC_16 (char**,size_t*,int *) ;
 scalar_t__ FUNC_17 (char) ;
 scalar_t__ FUNC_18 (size_t) ;
 int FUNC_19 (char*,...) ;

int FUNC_20(int VAR_3, char** VAR_4)
{
 FUNC_0(VAR_3 >= 3);
 int VAR_5;
 FUNC_4();
 ccv_dense_matrix_t* VAR_6 = 0;
 ccv_scd_classifier_cascade_t* VAR_7 = FUNC_8(VAR_4[2]);
 FUNC_6(VAR_4[1], &VAR_6, VAR_1 | VAR_0);
 if (VAR_6 != 0)
 {
  unsigned int VAR_8 = FUNC_15();
  ccv_array_t* VAR_9 = FUNC_9(VAR_6, &VAR_7, 1, VAR_2);
  VAR_8 = FUNC_15() - VAR_8;
  for (VAR_5 = 0; VAR_5 < VAR_9->rnum; VAR_5++)
  {
   ccv_comp_t* VAR_10 = (ccv_comp_t*)FUNC_2(VAR_9, VAR_5);
   FUNC_19("%d %d %d %d %f\n", VAR_10->rect.x, VAR_10->rect.y, VAR_10->rect.width, VAR_10->rect.height, VAR_10->classification.confidence);
  }
  FUNC_19("total : %d in time %dms\n", VAR_9->rnum, VAR_8);
  FUNC_1(VAR_9);
  FUNC_5(VAR_6);
 } else {
  FILE* VAR_11 = FUNC_13(VAR_4[1], "rt");
  if (VAR_3 == 4)
   FUNC_11(VAR_4[3]);
  if(VAR_11)
  {
   size_t VAR_12 = 1024;
   char* VAR_13 = (char*)FUNC_18(VAR_12);
   ssize_t VAR_14;
   while((VAR_14 = FUNC_16(&VAR_13, &VAR_12, VAR_11)) != -1)
   {
    while(VAR_14 > 1 && FUNC_17(VAR_13[VAR_14 - 1]))
     VAR_14--;
    VAR_13[VAR_14] = 0;
    VAR_6 = 0;
    FUNC_6(VAR_13, &VAR_6, VAR_1 | VAR_0);
    FUNC_0(VAR_6 != 0);
    ccv_scd_param_t VAR_15 = VAR_2;
    VAR_15.size = FUNC_10(24, 24);
    ccv_array_t* VAR_16 = FUNC_9(VAR_6, &VAR_7, 1, VAR_15);
    FUNC_19("%s %d\n", VAR_13, VAR_16->rnum);
    for (VAR_5 = 0; VAR_5 < VAR_16->rnum; VAR_5++)
    {
     ccv_comp_t* VAR_17 = (ccv_comp_t*)FUNC_2(VAR_16, VAR_5);
     FUNC_19("%d %d %d %d %f\n", VAR_17->rect.x, VAR_17->rect.y, VAR_17->rect.width, VAR_17->rect.height, VAR_17->classification.confidence);
    }
    FUNC_1(VAR_16);
    FUNC_5(VAR_6);
   }
   FUNC_14(VAR_13);
   FUNC_12(VAR_11);
  }
 }
 FUNC_7(VAR_7);
 FUNC_3();
 return 0;
}
