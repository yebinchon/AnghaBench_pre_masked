
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {size_t plen; char* buf; size_t len; size_t pos; size_t cols; char* prompt; } ;
struct abuf {int len; int b; } ;


 int FUNC_0 (struct abuf*,char*,size_t) ;
 int FUNC_1 (struct abuf*) ;
 int FUNC_2 (struct abuf*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct abuf*,struct linenoiseState*,size_t) ;
 int FUNC_5 (char*,int,char*,...) ;
 int VAR_0 ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct linenoiseState *VAR_1) {
    char VAR_2[64];
    size_t VAR_3 = VAR_1->plen;
    char *VAR_4 = VAR_1->buf;
    size_t VAR_5 = VAR_1->len;
    size_t VAR_6 = VAR_1->pos;
    struct abuf VAR_7;

    while((VAR_3+VAR_6) >= VAR_1->cols) {
        VAR_4++;
        VAR_5--;
        VAR_6--;
    }
    while (VAR_3+VAR_5 > VAR_1->cols) {
        VAR_5--;
    }

    FUNC_2(&VAR_7);

    FUNC_5(VAR_2,64,"\r");
    FUNC_0(&VAR_7,VAR_2,FUNC_6(VAR_2));

    FUNC_0(&VAR_7,VAR_1->prompt,FUNC_6(VAR_1->prompt));
    FUNC_0(&VAR_7,VAR_4,VAR_5);

    FUNC_4(&VAR_7,VAR_1,VAR_3);

    FUNC_5(VAR_2,64,"\x1b[0K");
    FUNC_0(&VAR_7,VAR_2,FUNC_6(VAR_2));

    FUNC_5(VAR_2,64,"\r\x1b[%dC", (int)(VAR_6+VAR_3));
    FUNC_0(&VAR_7,VAR_2,FUNC_6(VAR_2));
    if (FUNC_3(VAR_7.b, VAR_7.len, 1, VAR_0) == -1) {}
    FUNC_1(&VAR_7);
}
