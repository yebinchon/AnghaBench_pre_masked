
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ldisc_mutex; int * ldisc; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*,int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty_struct*,int ) ;

void FUNC_7(struct tty_struct *VAR_1, struct tty_struct *VAR_2)
{






 FUNC_4(VAR_1);
 FUNC_0();

 FUNC_1(&VAR_1->ldisc_mutex);



 FUNC_3(VAR_1, VAR_1->ldisc);
 FUNC_5(VAR_1->ldisc);

 VAR_1->ldisc = ((void*)0);


 FUNC_6(VAR_1, VAR_0);
 FUNC_2(&VAR_1->ldisc_mutex);


 if (VAR_2)
  FUNC_7(VAR_2, ((void*)0));



}
