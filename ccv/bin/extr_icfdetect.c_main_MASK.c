
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
typedef int ccv_icf_classifier_cascade_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_9__ {double confidence; } ;
struct TYPE_8__ {int x; int y; int width; int height; } ;
struct TYPE_10__ {TYPE_2__ classification; TYPE_1__ rect; } ;
typedef TYPE_3__ ccv_comp_t ;
struct TYPE_11__ {int rnum; } ;
typedef TYPE_4__ ccv_array_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 TYPE_4__* FUNC_6 (int *,int **,int,int ) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int **,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 unsigned int FUNC_14 () ;
 int FUNC_15 (char**,size_t*,int *) ;
 scalar_t__ FUNC_16 (char) ;
 scalar_t__ FUNC_17 (size_t) ;
 int FUNC_18 (char*,...) ;

int FUNC_19(int VAR_3, char** VAR_4)
{
 FUNC_0(VAR_3 >= 3);
 int VAR_5;
 FUNC_4();
 ccv_dense_matrix_t* VAR_6 = 0;
 ccv_icf_classifier_cascade_t* VAR_7 = FUNC_7(VAR_4[2]);
 FUNC_9(VAR_4[1], &VAR_6, VAR_0 | VAR_1);
 if (VAR_6 != 0)
 {
  unsigned int VAR_8 = FUNC_14();
  ccv_array_t* VAR_9 = FUNC_6(VAR_6, &VAR_7, 1, VAR_2);
  VAR_8 = FUNC_14() - VAR_8;
  for (VAR_5 = 0; VAR_5 < VAR_9->rnum; VAR_5++)
  {
   ccv_comp_t* VAR_10 = (ccv_comp_t*)FUNC_2(VAR_9, VAR_5);
   FUNC_18("%d %d %d %d %f\n", VAR_10->rect.x, VAR_10->rect.y, VAR_10->rect.width, VAR_10->rect.height, VAR_10->classification.confidence);
  }
  FUNC_18("total : %d in time %dms\n", VAR_9->rnum, VAR_8);
  FUNC_1(VAR_9);
  FUNC_8(VAR_6);
 } else {
  FILE* VAR_11 = FUNC_12(VAR_4[1], "rt");
  if (VAR_3 == 4)
   FUNC_10(VAR_4[3]);
  if(VAR_11)
  {
   size_t VAR_12 = 1024;
   char* VAR_13 = (char*)FUNC_17(VAR_12);
   ssize_t VAR_14;
   while((VAR_14 = FUNC_15(&VAR_13, &VAR_12, VAR_11)) != -1)
   {
    while(VAR_14 > 1 && FUNC_16(VAR_13[VAR_14 - 1]))
     VAR_14--;
    VAR_13[VAR_14] = 0;
    VAR_6 = 0;
    FUNC_9(VAR_13, &VAR_6, VAR_0 | VAR_1);
    FUNC_0(VAR_6 != 0);
    ccv_array_t* VAR_15 = FUNC_6(VAR_6, &VAR_7, 1, VAR_2);
    for (VAR_5 = 0; VAR_5 < VAR_15->rnum; VAR_5++)
    {
     ccv_comp_t* VAR_16 = (ccv_comp_t*)FUNC_2(VAR_15, VAR_5);
     FUNC_18("%s %d %d %d %d %f\n", VAR_13, VAR_16->rect.x, VAR_16->rect.y, VAR_16->rect.width, VAR_16->rect.height, VAR_16->classification.confidence);
    }
    FUNC_1(VAR_15);
    FUNC_8(VAR_6);
   }
   FUNC_13(VAR_13);
   FUNC_11(VAR_11);
  }
 }
 FUNC_5(VAR_7);
 FUNC_3();
 return 0;
}
