
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int extension; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 struct netvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct hv_device *VAR_1)
{
 struct netvsc_device *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_2->extension);
}
