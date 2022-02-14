
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int cdev; int flags; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raw3215_info* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raw3215_info*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_2)
{
 struct raw3215_info *VAR_3;
 unsigned long VAR_4;


 VAR_3 = FUNC_0(&VAR_2->dev);
 FUNC_3(FUNC_1(VAR_3->cdev), VAR_4);
 FUNC_2(VAR_3, VAR_0);
 VAR_3->flags |= VAR_1;
 FUNC_4(FUNC_1(VAR_3->cdev), VAR_4);
 return 0;
}
