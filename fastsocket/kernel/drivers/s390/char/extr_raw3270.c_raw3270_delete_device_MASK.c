
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {struct raw3270* ascebc; struct ccw_device* cdev; int list; int minor; scalar_t__ cltubdev; scalar_t__ clttydev; } ;
struct ccw_device {int dev; int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct raw3270*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(struct raw3270 *VAR_4)
{
 struct ccw_device *VAR_5;


 FUNC_6(&VAR_3);
 if (VAR_4->clttydev && !FUNC_0(VAR_4->clttydev))
  FUNC_3(VAR_2, FUNC_1(VAR_1, VAR_4->minor));
 if (VAR_4->cltubdev && !FUNC_0(VAR_4->cltubdev))
  FUNC_3(VAR_2, FUNC_1(VAR_0, VAR_4->minor));
 FUNC_5(&VAR_4->list);
 FUNC_7(&VAR_3);


 VAR_5 = VAR_4->cdev;
 VAR_4->cdev = ((void*)0);
 FUNC_2(&VAR_5->dev, ((void*)0));
 VAR_5->handler = ((void*)0);


 FUNC_8(&VAR_5->dev);


 FUNC_4(VAR_4->ascebc);
 FUNC_4(VAR_4);
}
