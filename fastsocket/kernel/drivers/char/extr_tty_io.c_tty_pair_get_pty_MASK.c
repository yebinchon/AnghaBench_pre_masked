
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct tty_struct* link; TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ subtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

struct tty_struct *FUNC_0(struct tty_struct *VAR_2)
{
 if (VAR_2->driver->type == VAR_1 &&
     VAR_2->driver->subtype == VAR_0)
     return VAR_2;
 return VAR_2->link;
}
