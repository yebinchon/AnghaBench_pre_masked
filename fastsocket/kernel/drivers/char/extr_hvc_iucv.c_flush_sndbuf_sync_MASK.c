
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_iucv_private {int sndbuf_waitq; int lock; int tty_outqueue; int sndbuf_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hvc_iucv_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hvc_iucv_private*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct hvc_iucv_private *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->sndbuf_work);

 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_1);
 VAR_2 = !FUNC_2(&VAR_1->tty_outqueue);
 FUNC_4(&VAR_1->lock);

 if (VAR_2)
  FUNC_6(VAR_1->sndbuf_waitq,
       FUNC_5(VAR_1), VAR_0/10);
}
