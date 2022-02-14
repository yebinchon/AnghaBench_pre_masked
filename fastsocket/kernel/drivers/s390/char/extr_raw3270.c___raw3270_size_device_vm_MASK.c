
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct raw3270 {int model; int rows; int cols; int cdev; } ;
struct diag210 {int dummy; } ;
struct ccw_dev_id {int devno; } ;
struct TYPE_3__ {int vrdclen; int vrdccrmd; int vrdcdvno; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ccw_dev_id*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct raw3270 *VAR_2)
{
 int VAR_3, VAR_4;
 struct ccw_dev_id VAR_5;

 FUNC_0(VAR_2->cdev, &VAR_5);
 VAR_1 = VAR_5.devno;
 VAR_1 = sizeof(struct diag210);
 VAR_3 = FUNC_1(&VAR_1);
 if (VAR_3)
  return VAR_3;
 VAR_4 = VAR_1;
 switch (VAR_4) {
 case 2:
  VAR_2->model = VAR_4;
  VAR_2->rows = 24;
  VAR_2->cols = 80;
  break;
 case 3:
  VAR_2->model = VAR_4;
  VAR_2->rows = 32;
  VAR_2->cols = 80;
  break;
 case 4:
  VAR_2->model = VAR_4;
  VAR_2->rows = 43;
  VAR_2->cols = 80;
  break;
 case 5:
  VAR_2->model = VAR_4;
  VAR_2->rows = 27;
  VAR_2->cols = 132;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 return VAR_3;
}
