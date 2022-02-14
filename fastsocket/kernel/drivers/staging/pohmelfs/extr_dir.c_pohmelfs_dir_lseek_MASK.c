
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * private_data; int f_pos; } ;
typedef int loff_t ;



__attribute__((used)) static loff_t FUNC_0(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 VAR_0->f_pos = VAR_1;
 VAR_0->private_data = ((void*)0);
 return VAR_1;
}
