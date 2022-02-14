
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;



__attribute__((used)) static inline loff_t FUNC_0(struct file *VAR_0)
{
 return VAR_0->f_pos;
}
