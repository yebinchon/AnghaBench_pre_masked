
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_iucv_private {scalar_t__ sndbuf_len; int iucv_state; int tty_state; int tty_inqueue; int tty_outqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hvc_iucv_private *VAR_2)
{
 FUNC_0(&VAR_2->tty_outqueue);
 FUNC_0(&VAR_2->tty_inqueue);

 VAR_2->tty_state = VAR_1;
 VAR_2->iucv_state = VAR_0;

 VAR_2->sndbuf_len = 0;
}
