
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw3270 {int model; int rows; int cols; TYPE_1__* view; } ;
struct TYPE_2__ {struct raw3270* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct raw3270*) ;
 int FUNC_1 (struct raw3270*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct raw3270 *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_1);
 VAR_3->view = &VAR_2;
 VAR_2.dev = VAR_3;
 if (VAR_0)
  VAR_4 = FUNC_1(VAR_3);
 else
  VAR_4 = FUNC_0(VAR_3);
 VAR_2.dev = ((void*)0);
 VAR_3->view = ((void*)0);
 FUNC_3(&VAR_1);
 if (VAR_4 == 0) {

  VAR_3->model = 0;
  if (VAR_3->rows == 24 && VAR_3->cols == 80)
   VAR_3->model = 2;
  if (VAR_3->rows == 32 && VAR_3->cols == 80)
   VAR_3->model = 3;
  if (VAR_3->rows == 43 && VAR_3->cols == 80)
   VAR_3->model = 4;
  if (VAR_3->rows == 27 && VAR_3->cols == 132)
   VAR_3->model = 5;
 } else {

  VAR_3->model = 2;
  VAR_3->rows = 24;
  VAR_3->cols = 80;
  return 0;
 }
 return VAR_4;
}
