
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {size_t id; int done; } ;
struct uinput_device {int requests_waitq; int ** requests; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct uinput_device *VAR_0, struct uinput_request *VAR_1)
{

 VAR_0->requests[VAR_1->id] = ((void*)0);
 FUNC_1(&VAR_0->requests_waitq);

 FUNC_0(&VAR_1->done);
}
