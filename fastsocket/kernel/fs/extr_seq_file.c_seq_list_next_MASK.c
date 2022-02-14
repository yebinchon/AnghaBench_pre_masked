
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;
typedef int loff_t ;



struct list_head *FUNC_0(void *VAR_0, struct list_head *VAR_1, loff_t *VAR_2)
{
 struct list_head *VAR_3;

 VAR_3 = ((struct list_head *)VAR_0)->next;
 ++*VAR_2;
 return VAR_3 == VAR_1 ? ((void*)0) : VAR_3;
}
