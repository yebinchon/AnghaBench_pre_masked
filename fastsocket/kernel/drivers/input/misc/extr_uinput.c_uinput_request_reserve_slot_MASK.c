
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {int dummy; } ;
struct uinput_device {int requests_waitq; } ;


 int FUNC_0 (struct uinput_device*,struct uinput_request*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct uinput_device *VAR_0, struct uinput_request *VAR_1)
{

 return FUNC_1(VAR_0->requests_waitq,
     !FUNC_0(VAR_0, VAR_1));
}
