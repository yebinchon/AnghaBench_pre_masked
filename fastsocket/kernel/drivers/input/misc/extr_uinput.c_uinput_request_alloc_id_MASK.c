
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {int id; } ;
struct uinput_device {int requests_lock; struct uinput_request** requests; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct uinput_device *VAR_1, struct uinput_request *VAR_2)
{
 int VAR_3;
 int VAR_4 = -1;

 FUNC_0(&VAR_1->requests_lock);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->requests[VAR_3]) {
   VAR_2->id = VAR_3;
   VAR_1->requests[VAR_3] = VAR_2;
   VAR_4 = 0;
   break;
  }
 }

 FUNC_1(&VAR_1->requests_lock);
 return VAR_4;
}
