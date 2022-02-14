
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {char* prompt; int ofd; char* buf; size_t len; size_t pos; size_t cols; } ;
struct abuf {int len; int b; } ;


 int FUNC_0 (struct abuf*,char*,size_t) ;
 int FUNC_1 (struct abuf*) ;
 int FUNC_2 (struct abuf*) ;
 int FUNC_3 (char*,int,char*,...) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct linenoiseState *VAR_0) {
    char VAR_1[64];
    size_t VAR_2 = FUNC_4(VAR_0->prompt);
    int VAR_3 = VAR_0->ofd;
    char *VAR_4 = VAR_0->buf;
    size_t VAR_5 = VAR_0->len;
    size_t VAR_6 = VAR_0->pos;
    struct abuf VAR_7;

    while((VAR_2+VAR_6) >= VAR_0->cols) {
        VAR_4++;
        VAR_5--;
        VAR_6--;
    }
    while (VAR_2+VAR_5 > VAR_0->cols) {
        VAR_5--;
    }

    FUNC_2(&VAR_7);

    FUNC_3(VAR_1,64,"\r");
    FUNC_0(&VAR_7,VAR_1,FUNC_4(VAR_1));

    FUNC_0(&VAR_7,VAR_0->prompt,FUNC_4(VAR_0->prompt));
    FUNC_0(&VAR_7,VAR_4,VAR_5);

    FUNC_3(VAR_1,64,"\x1b[0K");
    FUNC_0(&VAR_7,VAR_1,FUNC_4(VAR_1));

    FUNC_3(VAR_1,64,"\r\x1b[%dC", (int)(VAR_6+VAR_2));
    FUNC_0(&VAR_7,VAR_1,FUNC_4(VAR_1));
    if (FUNC_5(VAR_3,VAR_7.b,VAR_7.len) == -1) {}
    FUNC_1(&VAR_7);
}
