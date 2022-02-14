
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {scalar_t__ ulp; } ;
struct sk_buff {int dummy; } ;
struct l2t_entry {int dummy; } ;
struct cxio_rdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cxio_rdev*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct t3cdev*,struct sk_buff*,struct l2t_entry*) ;

__attribute__((used)) static int FUNC_3(struct t3cdev *VAR_1, struct sk_buff *VAR_2, struct l2t_entry *VAR_3)
{
 int VAR_4 = 0;
 struct cxio_rdev *VAR_5;

 VAR_5 = (struct cxio_rdev *)VAR_1->ulp;
 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_2);
 return VAR_4;
}
