
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {struct raw3270* dev; } ;
struct raw3270_request {int list; struct raw3270_view* view; } ;
struct raw3270 {int req_queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct raw3270_view*) ;

int
FUNC_2(struct raw3270_view *VAR_0, struct raw3270_request *VAR_1)
{
 struct raw3270 *VAR_2;

 VAR_2 = VAR_0->dev;
 VAR_1->view = VAR_0;
 FUNC_1(VAR_0);
 FUNC_0(&VAR_1->list, &VAR_2->req_queue);
 return 0;
}
