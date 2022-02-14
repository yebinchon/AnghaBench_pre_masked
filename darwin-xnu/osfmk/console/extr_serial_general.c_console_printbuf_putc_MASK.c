
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_printbuf_state {int total; int pos; int* str; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_3 ;

void
FUNC_1(int VAR_4, void * VAR_5)
{
 struct console_printbuf_state * VAR_6 = (struct console_printbuf_state *)VAR_5;
 VAR_6->total += 1;
 if (VAR_6->pos < (VAR_2 - 1)) {
  VAR_6->str[VAR_6->pos] = VAR_4;
  VAR_6->pos += 1;
 } else {





  if (VAR_3 & VAR_1) {
   VAR_6->str[VAR_6->pos] = '\0';
   FUNC_0(VAR_6->str, VAR_6->pos);
   VAR_6->pos = 0;
   VAR_6->str[VAR_6->pos] = VAR_4;
   VAR_6->pos += 1;
  }
 }

 VAR_6->str[VAR_6->pos] = '\0';

 if (VAR_4 == '\n' && VAR_6->flags & VAR_0) {
  FUNC_0(VAR_6->str, VAR_6->pos);
  VAR_6->pos = 0;
  VAR_6->str[VAR_6->pos] = '\0';
 }
}
