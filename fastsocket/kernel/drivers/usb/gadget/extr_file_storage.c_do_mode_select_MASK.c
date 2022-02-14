
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int sense_data; } ;
struct fsg_dev {struct lun* curlun; } ;
struct fsg_buffhd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fsg_dev *VAR_2, struct fsg_buffhd *VAR_3)
{
 struct lun *VAR_4 = VAR_2->curlun;


 VAR_4->sense_data = VAR_1;
 return -VAR_0;
}
