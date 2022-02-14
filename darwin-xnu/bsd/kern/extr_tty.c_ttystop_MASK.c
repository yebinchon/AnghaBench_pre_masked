
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int t_dev; } ;
struct TYPE_2__ {int (* d_stop ) (struct tty*,int) ;} ;


 int FUNC_0 (struct tty*) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct tty*,int) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);

 (*VAR_0[FUNC_1(VAR_1->t_dev)].d_stop)(VAR_1, VAR_2);
}
