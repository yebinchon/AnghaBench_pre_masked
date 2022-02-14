
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
typedef int proc_t ;
typedef int dev_t ;
struct TYPE_2__ {struct tty** d_ttys; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int,void*,int ) ;

int
FUNC_5(dev_t VAR_1, int VAR_2, void *VAR_3, proc_t VAR_4)
{
 int VAR_5;
 struct tty *VAR_6 = VAR_0[FUNC_0(VAR_1)].d_ttys[FUNC_1(VAR_1)];

 FUNC_2(VAR_6);
 VAR_5 = FUNC_4(VAR_6, VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_6);

 return (VAR_5);
}
