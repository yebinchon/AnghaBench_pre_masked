
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct gendisk {int flags; struct request_queue* queue; } ;
struct TYPE_6__ {int usage_count; scalar_t__ heads; } ;
typedef TYPE_1__ drive_info_struct ;
struct TYPE_7__ {size_t highest_lun; TYPE_1__** drv; int num_luns; struct gendisk** gendisk; } ;
typedef TYPE_2__ ctlr_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct gendisk*) ;
 int FUNC_5 (struct gendisk*) ;
 int FUNC_6 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_7(ctlr_info_t *VAR_5, int VAR_6,
      int VAR_7, int VAR_8)
{
 int VAR_9;
 struct gendisk *VAR_10;
 drive_info_struct *VAR_11;
 int VAR_12;

 if (!FUNC_1(VAR_0))
  return -VAR_3;

 VAR_11 = VAR_5->drv[VAR_6];
 VAR_10 = VAR_5->gendisk[VAR_6];


 if (VAR_7 || (VAR_5->gendisk[0] == VAR_10)) {
  if (VAR_11->usage_count > VAR_8)
   return -VAR_2;
 } else if (VAR_11->usage_count > 0)
  return -VAR_2;

 VAR_12 = (VAR_11 == VAR_5->drv[VAR_5->highest_lun]);





 if (VAR_5->gendisk[0] != VAR_10) {
  struct request_queue *VAR_13 = VAR_10->queue;
  if (VAR_10->flags & VAR_4) {
   FUNC_3(VAR_5, VAR_6, 0);
   FUNC_4(VAR_10);
  }
  if (VAR_13)
   FUNC_0(VAR_13);






  if (VAR_7){





   for (VAR_9=0; VAR_9 < VAR_1; VAR_9++){
    if (VAR_5->gendisk[VAR_9] == VAR_10) {
     VAR_5->gendisk[VAR_9] = ((void*)0);
     break;
    }
   }
   FUNC_5(VAR_10);
  }
 } else {
  FUNC_6(VAR_10, 0);
  FUNC_2(VAR_11);
 }

 --VAR_5->num_luns;


 if (VAR_7 && VAR_12) {
  int VAR_14, VAR_15 = -1;
  for (VAR_14 = 0; VAR_14 <= VAR_5->highest_lun; VAR_14++) {

   if (VAR_5->drv[VAR_14] && VAR_5->drv[VAR_14]->heads)
    VAR_15 = VAR_14;
  }
  VAR_5->highest_lun = VAR_15;
 }
 return 0;
}
