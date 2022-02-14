
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct lun {int num_sectors; int sense_data; } ;
struct fsg_dev {int* cmnd; struct lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct fsg_dev *VAR_2, struct fsg_buffhd *VAR_3)
{
 struct lun *VAR_4 = VAR_2->curlun;
 u32 VAR_5 = FUNC_0(&VAR_2->cmnd[2]);
 int VAR_6 = VAR_2->cmnd[8];
 u8 *VAR_7 = (u8 *) VAR_3->buf;


 if (VAR_6 > 1 || (VAR_6 == 0 && VAR_5 != 0)) {
  VAR_4->sense_data = VAR_1;
  return -VAR_0;
 }

 FUNC_1(VAR_4->num_sectors - 1, &VAR_7[0]);

 FUNC_1(512, &VAR_7[4]);
 return 8;
}
