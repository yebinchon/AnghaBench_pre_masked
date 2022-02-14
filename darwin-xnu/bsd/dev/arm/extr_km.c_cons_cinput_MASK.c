
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {size_t t_line; } ;
struct TYPE_2__ {int (* l_rint ) (char,struct tty*) ;} ;


 struct tty** VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char,struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

void
FUNC_3(char VAR_2)
{
 struct tty *VAR_3 = VAR_0[0];

 FUNC_1(VAR_3);
 (*VAR_1[VAR_3->t_line].l_rint) (VAR_2, VAR_3);
 FUNC_2(VAR_3);
}
