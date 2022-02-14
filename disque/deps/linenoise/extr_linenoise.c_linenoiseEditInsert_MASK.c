
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {size_t len; size_t buflen; size_t pos; char* buf; scalar_t__ plen; scalar_t__ cols; int ofd; } ;


 int FUNC_0 (char*,char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct linenoiseState*) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct linenoiseState *VAR_1, char VAR_2) {
    if (VAR_1->len < VAR_1->buflen) {
        if (VAR_1->len == VAR_1->pos) {
            VAR_1->buf[VAR_1->pos] = VAR_2;
            VAR_1->pos++;
            VAR_1->len++;
            VAR_1->buf[VAR_1->len] = '\0';
            if ((!VAR_0 && VAR_1->plen+VAR_1->len < VAR_1->cols) ) {


                if (FUNC_2(VAR_1->ofd,&VAR_2,1) == -1) return -1;
            } else {
                FUNC_1(VAR_1);
            }
        } else {
            FUNC_0(VAR_1->buf+VAR_1->pos+1,VAR_1->buf+VAR_1->pos,VAR_1->len-VAR_1->pos);
            VAR_1->buf[VAR_1->pos] = VAR_2;
            VAR_1->len++;
            VAR_1->pos++;
            VAR_1->buf[VAR_1->len] = '\0';
            FUNC_1(VAR_1);
        }
    }
    return 0;
}
