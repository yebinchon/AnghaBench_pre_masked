
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {struct raw3270* dev; } ;
struct raw3270 {int flags; struct raw3270_view* view; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct raw3270*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int
FUNC_2(struct raw3270_view *VAR_4)
{
 struct raw3270 *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->dev;
 if (!VAR_5 || VAR_5->view != VAR_4 ||
     FUNC_1(VAR_2, &VAR_5->flags))
  VAR_6 = -VAR_0;
 else if (!FUNC_1(VAR_3, &VAR_5->flags))
  VAR_6 = -VAR_1;
 else
  VAR_6 = FUNC_0(VAR_4->dev);
 return VAR_6;
}
