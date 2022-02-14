
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {scalar_t__ refcnt; int flags; } ;
struct gendisk {struct pktcdvd_device* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pktcdvd_device*,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_2, fmode_t VAR_3)
{
 struct pktcdvd_device *VAR_4 = VAR_2->private_data;
 int VAR_5 = 0;

 FUNC_1(&VAR_1);
 VAR_4->refcnt--;
 FUNC_0(VAR_4->refcnt < 0);
 if (VAR_4->refcnt == 0) {
  int VAR_6 = FUNC_4(VAR_0, &VAR_4->flags);
  FUNC_3(VAR_4, VAR_6);
 }
 FUNC_2(&VAR_1);
 return VAR_5;
}
