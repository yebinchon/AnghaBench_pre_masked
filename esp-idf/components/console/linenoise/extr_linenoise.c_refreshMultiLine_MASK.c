
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {int plen; int len; int cols; int oldpos; int maxrows; char* prompt; char* buf; int pos; } ;
struct abuf {int len; int b; } ;


 int FUNC_0 (struct abuf*,char*,int) ;
 int FUNC_1 (struct abuf*) ;
 int FUNC_2 (struct abuf*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct abuf*,struct linenoiseState*,int) ;
 int FUNC_6 (char*,int,char*,...) ;
 int VAR_0 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct linenoiseState *VAR_1) {
    char VAR_2[64];
    int VAR_3 = VAR_1->plen;
    int VAR_4 = (VAR_3+VAR_1->len+VAR_1->cols-1)/VAR_1->cols;
    int VAR_5 = (VAR_3+VAR_1->oldpos+VAR_1->cols)/VAR_1->cols;
    int VAR_6;
    int VAR_7;
    int VAR_8 = VAR_1->maxrows;
    int VAR_9;
    struct abuf VAR_10;


    if (VAR_4 > (int)VAR_1->maxrows) VAR_1->maxrows = VAR_4;



    FUNC_2(&VAR_10);
    if (VAR_8-VAR_5 > 0) {
        FUNC_4("go down %d", VAR_8-VAR_5);
        FUNC_6(VAR_2,64,"\x1b[%dB", VAR_8-VAR_5);
        FUNC_0(&VAR_10,VAR_2,FUNC_7(VAR_2));
    }


    for (VAR_9 = 0; VAR_9 < VAR_8-1; VAR_9++) {
        FUNC_4("clear+up");
        FUNC_6(VAR_2,64,"\r\x1b[0K\x1b[1A");
        FUNC_0(&VAR_10,VAR_2,FUNC_7(VAR_2));
    }


    FUNC_4("clear");
    FUNC_6(VAR_2,64,"\r\x1b[0K");
    FUNC_0(&VAR_10,VAR_2,FUNC_7(VAR_2));


    FUNC_0(&VAR_10,VAR_1->prompt,FUNC_7(VAR_1->prompt));
    FUNC_0(&VAR_10,VAR_1->buf,VAR_1->len);


    FUNC_5(&VAR_10,VAR_1,VAR_3);



    if (VAR_1->pos &&
        VAR_1->pos == VAR_1->len &&
        (VAR_1->pos+VAR_3) % VAR_1->cols == 0)
    {
        FUNC_4("<newline>");
        FUNC_0(&VAR_10,"\n",1);
        FUNC_6(VAR_2,64,"\r");
        FUNC_0(&VAR_10,VAR_2,FUNC_7(VAR_2));
        VAR_4++;
        if (VAR_4 > (int)VAR_1->maxrows) VAR_1->maxrows = VAR_4;
    }


    VAR_6 = (VAR_3+VAR_1->pos+VAR_1->cols)/VAR_1->cols;
    FUNC_4("rpos2 %d", VAR_6);


    if (VAR_4-VAR_6 > 0) {
        FUNC_4("go-up %d", VAR_4-VAR_6);
        FUNC_6(VAR_2,64,"\x1b[%dA", VAR_4-VAR_6);
        FUNC_0(&VAR_10,VAR_2,FUNC_7(VAR_2));
    }


    VAR_7 = (VAR_3+(int)VAR_1->pos) % (int)VAR_1->cols;
    FUNC_4("set col %d", 1+VAR_7);
    if (VAR_7)
        FUNC_6(VAR_2,64,"\r\x1b[%dC", VAR_7);
    else
        FUNC_6(VAR_2,64,"\r");
    FUNC_0(&VAR_10,VAR_2,FUNC_7(VAR_2));

    FUNC_4("\n");
    VAR_1->oldpos = VAR_1->pos;

    if (FUNC_3(VAR_10.b,VAR_10.len,1,VAR_0) == -1) {}
    FUNC_1(&VAR_10);
}
