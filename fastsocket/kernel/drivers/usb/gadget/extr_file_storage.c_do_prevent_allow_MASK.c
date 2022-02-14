
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lun {int prevent_medium_removal; int sense_data; } ;
struct fsg_dev {int* cmnd; struct lun* curlun; } ;
struct TYPE_2__ {int removable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lun*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct fsg_dev *VAR_4)
{
 struct lun *VAR_5 = VAR_4->curlun;
 int VAR_6;

 if (!VAR_3.removable) {
  VAR_5->sense_data = VAR_1;
  return -VAR_0;
 }

 VAR_6 = VAR_4->cmnd[4] & 0x01;
 if ((VAR_4->cmnd[4] & ~0x01) != 0) {
  VAR_5->sense_data = VAR_2;
  return -VAR_0;
 }

 if (VAR_5->prevent_medium_removal && !VAR_6)
  FUNC_0(VAR_5);
 VAR_5->prevent_medium_removal = VAR_6;
 return 0;
}
