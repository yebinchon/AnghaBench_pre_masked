
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hd_struct {int partno; } ;
struct gendisk {int dummy; } ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct gendisk* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct gendisk*) ;
 struct hd_struct* FUNC_5 (int *,int ) ;
 struct kobject* FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (struct kobject*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct gendisk* FUNC_10 (struct hd_struct*) ;

struct gendisk *FUNC_11(dev_t VAR_4, int *VAR_5)
{
 struct gendisk *VAR_6 = ((void*)0);

 if (FUNC_0(VAR_4) != VAR_0) {
  struct kobject *VAR_7;

  VAR_7 = FUNC_6(VAR_1, VAR_4, VAR_5);
  if (VAR_7)
   VAR_6 = FUNC_3(FUNC_7(VAR_7));
 } else {
  struct hd_struct *VAR_8;

  FUNC_8(&VAR_3);
  VAR_8 = FUNC_5(&VAR_2, FUNC_2(FUNC_1(VAR_4)));
  if (VAR_8 && FUNC_4(FUNC_10(VAR_8))) {
   *VAR_5 = VAR_8->partno;
   VAR_6 = FUNC_10(VAR_8);
  }
  FUNC_9(&VAR_3);
 }

 return VAR_6;
}
