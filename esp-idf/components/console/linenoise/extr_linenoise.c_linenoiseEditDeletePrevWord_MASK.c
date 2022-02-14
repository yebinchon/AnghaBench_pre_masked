
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {size_t pos; char* buf; size_t len; } ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (struct linenoiseState*) ;

void FUNC_2(struct linenoiseState *VAR_0) {
    size_t VAR_1 = VAR_0->pos;
    size_t VAR_2;

    while (VAR_0->pos > 0 && VAR_0->buf[VAR_0->pos-1] == ' ')
        VAR_0->pos--;
    while (VAR_0->pos > 0 && VAR_0->buf[VAR_0->pos-1] != ' ')
        VAR_0->pos--;
    VAR_2 = VAR_1 - VAR_0->pos;
    FUNC_0(VAR_0->buf+VAR_0->pos,VAR_0->buf+VAR_1,VAR_0->len-VAR_1+1);
    VAR_0->len -= VAR_2;
    FUNC_1(VAR_0);
}
