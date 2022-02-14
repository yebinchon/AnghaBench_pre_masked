
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; scalar_t__ driver; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct tty_struct *VAR_1)
{
 return VAR_1->index + ((VAR_1->driver == VAR_0) ? 0 : 256);
}
