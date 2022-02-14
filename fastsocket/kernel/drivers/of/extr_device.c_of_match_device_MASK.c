
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct of_device {int node; } ;


 struct of_device_id const* FUNC_0 (struct of_device_id const*,int ) ;

const struct of_device_id *FUNC_1(const struct of_device_id *VAR_0,
     const struct of_device *VAR_1)
{
 if (!VAR_1->node)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1->node);
}
