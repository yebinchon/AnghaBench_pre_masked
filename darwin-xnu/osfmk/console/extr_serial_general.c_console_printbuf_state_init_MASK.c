
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_printbuf_state {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct console_printbuf_state*,int) ;

void
FUNC_1(struct console_printbuf_state * VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_2, sizeof(struct console_printbuf_state));
 if (VAR_3)
  VAR_2->flags |= VAR_1;
 if (VAR_4)
  VAR_2->flags |= VAR_0;
}
