
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {struct raw3215_info* buffer; } ;
struct ccw_device {int dev; } ;


 int FUNC_0 (struct ccw_device*) ;
 struct raw3215_info* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct raw3215_info*) ;

__attribute__((used)) static void FUNC_4 (struct ccw_device *VAR_0)
{
 struct raw3215_info *VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1) {
  FUNC_2(&VAR_0->dev, ((void*)0));
  FUNC_3(VAR_1->buffer);
  FUNC_3(VAR_1);
 }
}
