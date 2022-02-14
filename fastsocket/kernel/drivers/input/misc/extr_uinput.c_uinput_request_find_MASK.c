
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {int dummy; } ;
struct uinput_device {struct uinput_request** requests; } ;


 int VAR_0 ;

__attribute__((used)) static struct uinput_request *FUNC_0(struct uinput_device *VAR_1, int VAR_2)
{

 if (VAR_2 >= VAR_0 || VAR_2 < 0)
  return ((void*)0);

 return VAR_1->requests[VAR_2];
}
