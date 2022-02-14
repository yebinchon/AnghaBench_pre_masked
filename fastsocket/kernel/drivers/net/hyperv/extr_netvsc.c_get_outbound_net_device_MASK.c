
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {scalar_t__ destroy; } ;
struct hv_device {int dummy; } ;


 struct netvsc_device* FUNC_0 (struct hv_device*) ;

__attribute__((used)) static struct netvsc_device *FUNC_1(struct hv_device *VAR_0)
{
 struct netvsc_device *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 && VAR_1->destroy)
  VAR_1 = ((void*)0);

 return VAR_1;
}
