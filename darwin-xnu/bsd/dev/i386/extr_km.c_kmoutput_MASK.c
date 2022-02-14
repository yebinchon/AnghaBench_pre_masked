
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ c_cc; } ;
struct tty {size_t t_line; int t_state; TYPE_1__ t_outq; int t_dev; } ;
typedef int buf ;
struct TYPE_5__ {int (* l_start ) (struct tty*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (int ,struct tty*,int ) ;

__attribute__((used)) static int
FUNC_7(struct tty *VAR_4)
{
 unsigned char VAR_5[80];
 unsigned char *VAR_6;
 int VAR_7 = -1;



 while (VAR_4->t_outq.c_cc > 0) {
  VAR_7 = FUNC_3(&VAR_4->t_outq, 0);
  if (VAR_7 == 0)
   break;




  VAR_7 = FUNC_2(VAR_7, sizeof(VAR_5));

  (void) FUNC_4(&VAR_4->t_outq, VAR_5, VAR_7);
  for (VAR_6 = VAR_5; VAR_6 < &VAR_5[VAR_7]; VAR_6++) {

   *VAR_6 = *VAR_6 & 0x7f;
  }

  if (VAR_7 > 1) {
   FUNC_0((char *)VAR_5, VAR_7);
  } else {
   FUNC_1(VAR_4->t_dev, *VAR_5);
  }
 }




        if (VAR_4->t_outq.c_cc > 0) {
  FUNC_6(VAR_2, VAR_4, VAR_1);
 }
 VAR_4->t_state &= ~VAR_0;

 (*VAR_3[VAR_4->t_line].l_start)(VAR_4);

 return 0;
}
