
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_6__ {int x; int y; int width; int height; } ;
typedef TYPE_1__ ccv_rect_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_7__ {int rnum; } ;
typedef TYPE_2__ ccv_array_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int **,int) ;
 int VAR_2 ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 unsigned int FUNC_11 () ;
 int FUNC_12 (char**,size_t*,int *) ;
 scalar_t__ FUNC_13 (char) ;
 scalar_t__ FUNC_14 (size_t) ;
 int FUNC_15 (char*,...) ;

int FUNC_16(int VAR_3, char** VAR_4)
{
 FUNC_3();
 ccv_dense_matrix_t* VAR_5 = 0;
 FUNC_5(VAR_4[1], &VAR_5, VAR_1 | VAR_0);
 if (VAR_5 != 0)
 {
  unsigned int VAR_6 = FUNC_11();
  ccv_array_t* VAR_7 = FUNC_6(VAR_5, VAR_2);
  VAR_6 = FUNC_11() - VAR_6;
  if (VAR_7)
  {
   int VAR_8;
   for (VAR_8 = 0; VAR_8 < VAR_7->rnum; VAR_8++)
   {
    ccv_rect_t* VAR_9 = (ccv_rect_t*)FUNC_1(VAR_7, VAR_8);
    FUNC_15("%d %d %d %d\n", VAR_9->x, VAR_9->y, VAR_9->width, VAR_9->height);
   }
   FUNC_15("total : %d in time %dms\n", VAR_7->rnum, VAR_6);
   FUNC_0(VAR_7);
  }
  FUNC_4(VAR_5);
 } else {
  FILE* VAR_10 = FUNC_9(VAR_4[1], "rt");
  if (VAR_3 == 3)
   FUNC_7(VAR_4[2]);
  if(VAR_10)
  {
   size_t VAR_11 = 1024;
   char* VAR_12 = (char*)FUNC_14(VAR_11);
   ssize_t VAR_13;
   while((VAR_13 = FUNC_12(&VAR_12, &VAR_11, VAR_10)) != -1)
   {
    while(VAR_13 > 1 && FUNC_13(VAR_12[VAR_13 - 1]))
     VAR_13--;
    VAR_12[VAR_13] = 0;
    VAR_5 = 0;
    FUNC_15("%s\n", VAR_12);
    FUNC_5(VAR_12, &VAR_5, VAR_1 | VAR_0);
    ccv_array_t* VAR_14 = FUNC_6(VAR_5, VAR_2);
    int VAR_15;
    for (VAR_15 = 0; VAR_15 < VAR_14->rnum; VAR_15++)
    {
     ccv_rect_t* VAR_16 = (ccv_rect_t*)FUNC_1(VAR_14, VAR_15);
     FUNC_15("%d %d %d %d\n", VAR_16->x, VAR_16->y, VAR_16->width, VAR_16->height);
    }
    FUNC_0(VAR_14);
    FUNC_4(VAR_5);
   }
   FUNC_10(VAR_12);
   FUNC_8(VAR_10);
  }
 }
 FUNC_2();
 return 0;
}
