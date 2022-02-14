
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int sense_data; } ;
struct fsg_dev {struct lun* curlun; } ;


 int VAR_0 ;
 int FUNC_0 (struct lun*) ;

__attribute__((used)) static int FUNC_1(struct fsg_dev *VAR_1)
{
 struct lun *VAR_2 = VAR_1->curlun;
 int VAR_3;



 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  VAR_2->sense_data = VAR_0;
 return 0;
}
