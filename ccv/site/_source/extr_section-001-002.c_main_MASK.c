
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ccv_scd_classifier_cascade_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_7__ {int x; int y; int width; int height; } ;
struct TYPE_8__ {TYPE_1__ rect; } ;
typedef TYPE_2__ ccv_comp_t ;
struct TYPE_9__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int **,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_6 (int *,int **,int,int ) ;
 int FUNC_7 (char*,int,int,int,int) ;

int FUNC_8(int VAR_3, char** VAR_4)
{
 ccv_dense_matrix_t* VAR_5 = 0;
 FUNC_3(VAR_4[1], &VAR_5, VAR_1 | VAR_0);
 ccv_scd_classifier_cascade_t* VAR_6 = FUNC_5(VAR_4[2]);
 ccv_array_t* VAR_7 = FUNC_6(VAR_5, &VAR_6, 1, VAR_2);
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_7->rnum; VAR_8++)
 {
  ccv_comp_t* VAR_9 = (ccv_comp_t*)FUNC_1(VAR_7, VAR_8);
  FUNC_7("%d %d %d %d\n", VAR_9->rect.x, VAR_9->rect.y, VAR_9->rect.width, VAR_9->rect.height);
 }
 FUNC_0(VAR_7);
 FUNC_4(VAR_6);
 FUNC_2(VAR_5);
 return 0;
}
