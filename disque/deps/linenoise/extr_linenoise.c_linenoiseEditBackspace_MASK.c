
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {scalar_t__ pos; scalar_t__ len; char* buf; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct linenoiseState*) ;

void FUNC_2(struct linenoiseState *VAR_0) {
    if (VAR_0->pos > 0 && VAR_0->len > 0) {
        FUNC_0(VAR_0->buf+VAR_0->pos-1,VAR_0->buf+VAR_0->pos,VAR_0->len-VAR_0->pos);
        VAR_0->pos--;
        VAR_0->len--;
        VAR_0->buf[VAR_0->len] = '\0';
        FUNC_1(VAR_0);
    }
}
