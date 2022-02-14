
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int dummy; } ;
struct etr_aib {int dummy; } ;


 struct etr_aib VAR_0 ;
 struct sys_device VAR_1 ;
 scalar_t__ VAR_2 ;
 struct etr_aib VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline struct etr_aib *FUNC_0(struct sys_device *VAR_5)
{
 if (VAR_5 == &VAR_1)
  return VAR_2 ? &VAR_0 : ((void*)0);
 else
  return VAR_4 ? &VAR_3 : ((void*)0);
}
