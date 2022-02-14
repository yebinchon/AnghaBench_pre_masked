
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int flags; } ;



int FUNC_0(struct mm_struct *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->flags & 0x3;
 return (VAR_1 >= 2) ? 2 : VAR_1;
}
