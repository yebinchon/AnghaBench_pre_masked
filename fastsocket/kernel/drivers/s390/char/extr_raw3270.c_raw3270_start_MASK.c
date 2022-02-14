
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {struct raw3270* dev; } ;
struct raw3270_request {int dummy; } ;
struct raw3270 {int cdev; int flags; struct raw3270_view* view; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct raw3270*,struct raw3270_view*,struct raw3270_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int
FUNC_5(struct raw3270_view *VAR_4, struct raw3270_request *VAR_5)
{
 unsigned long VAR_6;
 struct raw3270 *VAR_7;
 int VAR_8;

 FUNC_2(FUNC_1(VAR_4->dev->cdev), VAR_6);
 VAR_7 = VAR_4->dev;
 if (!VAR_7 || VAR_7->view != VAR_4 ||
     FUNC_4(VAR_2, &VAR_7->flags))
  VAR_8 = -VAR_0;
 else if (!FUNC_4(VAR_3, &VAR_7->flags))
  VAR_8 = -VAR_1;
 else
  VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5);
 FUNC_3(FUNC_1(VAR_4->dev->cdev), VAR_6);
 return VAR_8;
}
