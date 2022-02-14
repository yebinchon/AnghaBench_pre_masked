
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {scalar_t__ ulp; } ;
struct sk_buff {int dummy; } ;
struct cxio_rdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct t3cdev*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct cxio_rdev*) ;
 int FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct t3cdev *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 struct cxio_rdev *VAR_4;

 VAR_4 = (struct cxio_rdev *)VAR_1->ulp;
 if (FUNC_1(VAR_4)) {
  FUNC_2(VAR_2);
  return -VAR_0;
 }
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_2(VAR_2);
 return VAR_3;
}
