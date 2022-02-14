
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_14__ {double confidence; } ;
struct TYPE_15__ {int x; int y; int width; int height; } ;
struct TYPE_16__ {int pnum; TYPE_3__* part; TYPE_4__ classification; TYPE_5__ rect; } ;
typedef TYPE_6__ ccv_root_comp_t ;
typedef int ccv_dpm_mixture_model_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_17__ {int rnum; } ;
typedef TYPE_7__ ccv_array_t ;
struct TYPE_12__ {double confidence; } ;
struct TYPE_11__ {int x; int y; int width; int height; } ;
struct TYPE_13__ {TYPE_2__ classification; TYPE_1__ rect; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int) ;
 int VAR_2 ;
 TYPE_7__* FUNC_3 (int *,int **,int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
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
 int VAR_5, VAR_6;
 FUNC_7();
 ccv_dense_matrix_t* VAR_7 = 0;
 FUNC_9(VAR_4[1], &VAR_7, VAR_0);
 ccv_dpm_mixture_model_t* VAR_8 = FUNC_5(VAR_4[2]);
 if (VAR_7 != 0)
 {
  unsigned int VAR_9 = FUNC_14();
  ccv_array_t* VAR_10 = FUNC_3(VAR_7, &VAR_8, 1, VAR_2);
  VAR_9 = FUNC_14() - VAR_9;
  if (VAR_10)
  {
   for (VAR_5 = 0; VAR_5 < VAR_10->rnum; VAR_5++)
   {
    ccv_root_comp_t* VAR_11 = (ccv_root_comp_t*)FUNC_2(VAR_10, VAR_5);
    FUNC_18("%d %d %d %d %f %d\n", VAR_11->rect.x, VAR_11->rect.y, VAR_11->rect.width, VAR_11->rect.height, VAR_11->classification.confidence, VAR_11->pnum);
    for (VAR_6 = 0; VAR_6 < VAR_11->pnum; VAR_6++)
     FUNC_18("| %d %d %d %d %f\n", VAR_11->part[VAR_6].rect.x, VAR_11->part[VAR_6].rect.y, VAR_11->part[VAR_6].rect.width, VAR_11->part[VAR_6].rect.height, VAR_11->part[VAR_6].classification.confidence);
   }
   FUNC_18("total : %d in time %dms\n", VAR_10->rnum, VAR_9);
   FUNC_1(VAR_10);
  } else {
   FUNC_18("elapsed time %dms\n", VAR_9);
  }
  FUNC_8(VAR_7);
 } else {
  FILE* VAR_12 = FUNC_12(VAR_4[1], "rt");
  if (VAR_3 == 4)
   FUNC_10(VAR_4[3]);
  if(VAR_12)
  {
   size_t VAR_13 = 1024;
   char* VAR_14 = (char*)FUNC_17(VAR_13);
   ssize_t VAR_15;
   while((VAR_15 = FUNC_15(&VAR_14, &VAR_13, VAR_12)) != -1)
   {
    while(VAR_15 > 1 && FUNC_16(VAR_14[VAR_15 - 1]))
     VAR_15--;
    VAR_14[VAR_15] = 0;
    VAR_7 = 0;
    FUNC_9(VAR_14, &VAR_7, VAR_1 | VAR_0);
    FUNC_0(VAR_7 != 0);
    ccv_array_t* VAR_16 = FUNC_3(VAR_7, &VAR_8, 1, VAR_2);
    if (VAR_16 != 0)
    {
     for (VAR_5 = 0; VAR_5 < VAR_16->rnum; VAR_5++)
     {
      ccv_root_comp_t* VAR_17 = (ccv_root_comp_t*)FUNC_2(VAR_16, VAR_5);
      FUNC_18("%s %d %d %d %d %f %d\n", VAR_14, VAR_17->rect.x, VAR_17->rect.y, VAR_17->rect.width, VAR_17->rect.height, VAR_17->classification.confidence, VAR_17->pnum);
      for (VAR_6 = 0; VAR_6 < VAR_17->pnum; VAR_6++)
       FUNC_18("| %d %d %d %d %f\n", VAR_17->part[VAR_6].rect.x, VAR_17->part[VAR_6].rect.y, VAR_17->part[VAR_6].rect.width, VAR_17->part[VAR_6].rect.height, VAR_17->part[VAR_6].classification.confidence);
     }
     FUNC_1(VAR_16);
    }
    FUNC_8(VAR_7);
   }
   FUNC_13(VAR_14);
   FUNC_11(VAR_12);
  }
 }
 FUNC_6();
 FUNC_4(VAR_8);
 return 0;
}
