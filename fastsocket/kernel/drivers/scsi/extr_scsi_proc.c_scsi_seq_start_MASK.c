
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
typedef void device ;
typedef int loff_t ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct device *VAR_2 = ((void*)0);
 loff_t VAR_3 = *VAR_1;

 while ((VAR_2 = FUNC_0(VAR_2))) {
  if (!VAR_3--)
   break;
  VAR_0->private++;
 }
 return VAR_2;
}
