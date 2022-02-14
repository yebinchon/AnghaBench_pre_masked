
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;



__attribute__((used)) static loff_t FUNC_0(struct file * VAR_0, loff_t VAR_1, int VAR_2)
{
 return VAR_0->f_pos = 0;
}
