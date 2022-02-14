
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {scalar_t__ pos; scalar_t__ len; } ;


 int FUNC_0 (struct linenoiseState*) ;

void FUNC_1(struct linenoiseState *VAR_0) {
    if (VAR_0->pos != VAR_0->len) {
        VAR_0->pos = VAR_0->len;
        FUNC_0(VAR_0);
    }
}
