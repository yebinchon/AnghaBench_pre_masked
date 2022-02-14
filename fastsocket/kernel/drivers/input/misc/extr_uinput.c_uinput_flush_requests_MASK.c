
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {int retval; } ;
struct uinput_device {int requests_lock; struct uinput_request** requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uinput_device*,struct uinput_request*) ;

__attribute__((used)) static void FUNC_3(struct uinput_device *VAR_2)
{
 struct uinput_request *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->requests_lock);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = VAR_2->requests[VAR_4];
  if (VAR_3) {
   VAR_3->retval = -VAR_0;
   FUNC_2(VAR_2, VAR_3);
  }
 }

 FUNC_1(&VAR_2->requests_lock);
}
