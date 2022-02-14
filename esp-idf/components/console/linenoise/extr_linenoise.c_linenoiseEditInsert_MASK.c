
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {size_t len; size_t buflen; size_t pos; char* buf; scalar_t__ plen; scalar_t__ cols; } ;


 int FUNC_0 (char*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (struct linenoiseState*) ;
 int VAR_2 ;

int FUNC_3(struct linenoiseState *VAR_3, char VAR_4) {
    if (VAR_3->len < VAR_3->buflen) {
        if (VAR_3->len == VAR_3->pos) {
            VAR_3->buf[VAR_3->pos] = VAR_4;
            VAR_3->pos++;
            VAR_3->len++;
            VAR_3->buf[VAR_3->len] = '\0';
            if ((!VAR_1 && VAR_3->plen+VAR_3->len < VAR_3->cols && !VAR_0)) {


                if (FUNC_0(&VAR_4,1,1,VAR_2) == -1) return -1;
            } else {
                FUNC_2(VAR_3);
            }
        } else {
            FUNC_1(VAR_3->buf+VAR_3->pos+1,VAR_3->buf+VAR_3->pos,VAR_3->len-VAR_3->pos);
            VAR_3->buf[VAR_3->pos] = VAR_4;
            VAR_3->len++;
            VAR_3->pos++;
            VAR_3->buf[VAR_3->len] = '\0';
            FUNC_2(VAR_3);
        }
    }
    return 0;
}
