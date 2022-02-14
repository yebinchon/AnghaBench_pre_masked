
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lun {int sense_data; scalar_t__ prevent_medium_removal; } ;
struct fsg_dev {int* cmnd; int filesem; struct lun* curlun; } ;
struct TYPE_2__ {int removable; } ;


 int VAR_0 ;
 int FUNC_0 (struct lun*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lun*) ;
 int FUNC_2 (struct lun*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct fsg_dev *VAR_6)
{
 struct lun *VAR_7 = VAR_6->curlun;
 int VAR_8, VAR_9;

 if (!VAR_5.removable) {
  VAR_7->sense_data = VAR_1;
  return -VAR_0;
 }


 VAR_8 = VAR_6->cmnd[4] & 0x02;
 VAR_9 = VAR_6->cmnd[4] & 0x01;
 return 0;
}
