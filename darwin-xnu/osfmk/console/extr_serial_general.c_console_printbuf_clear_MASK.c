
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_printbuf_state {size_t pos; char* str; scalar_t__ total; } ;


 int FUNC_0 (char*,size_t) ;

void
FUNC_1(struct console_printbuf_state * VAR_0) {
 if (VAR_0->pos != 0) {
  FUNC_0(VAR_0->str, VAR_0->pos);
 }
 VAR_0->pos = 0;
 VAR_0->str[VAR_0->pos] = '\0';
 VAR_0->total = 0;
}
