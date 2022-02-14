
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct list_head* FUNC_0 (struct list_head*,scalar_t__) ;

struct list_head *FUNC_1(struct list_head *VAR_0, loff_t VAR_1)
{
 if (!VAR_1)
  return VAR_0;

 return FUNC_0(VAR_0, VAR_1 - 1);
}
