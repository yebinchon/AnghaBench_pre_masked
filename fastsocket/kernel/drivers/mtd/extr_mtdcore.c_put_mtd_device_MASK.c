
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int usecount; int owner; int (* put_device ) (struct mtd_info*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mtd_info*) ;

void FUNC_5(struct mtd_info *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = --VAR_1->usecount;
 if (VAR_1->put_device)
  VAR_1->put_device(VAR_1);
 FUNC_3(&VAR_0);
 FUNC_0(VAR_2 < 0);

 FUNC_1(VAR_1->owner);
}
