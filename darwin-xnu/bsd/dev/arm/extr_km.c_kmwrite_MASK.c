
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int dummy; } ;
struct tty {size_t t_line; } ;
typedef int dev_t ;
struct TYPE_2__ {int (* l_write ) (struct tty*,struct uio*,int) ;} ;


 struct tty** VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct tty*,struct uio*,int) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;

int
FUNC_4(dev_t VAR_2, struct uio * VAR_3, int VAR_4)
{
 int VAR_5;
 struct tty *VAR_6 = VAR_0[FUNC_0(VAR_2)];

 FUNC_2(VAR_6);
 VAR_5 = (*VAR_1[VAR_6->t_line].l_write)(VAR_6, VAR_3, VAR_4);
 FUNC_3(VAR_6);

 return (VAR_5);
}
