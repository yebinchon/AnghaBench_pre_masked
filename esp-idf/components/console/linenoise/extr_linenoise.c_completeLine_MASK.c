
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct linenoiseState {char* buf; int len; int pos; int buflen; } ;
struct TYPE_4__ {scalar_t__ len; char** cvec; int * member_1; int member_0; } ;
typedef TYPE_1__ linenoiseCompletions ;




 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct linenoiseState*) ;
 int FUNC_5 (char*,int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct linenoiseState *VAR_1) {
    linenoiseCompletions VAR_2 = { 0, ((void*)0) };
    int VAR_3, VAR_4;
    char VAR_5 = 0;

    FUNC_0(VAR_1->buf,&VAR_2);
    if (VAR_2.len == 0) {
        FUNC_3();
    } else {
        size_t VAR_6 = 0, VAR_7 = 0;

        while(!VAR_6) {

            if (VAR_7 < VAR_2.len) {
                struct linenoiseState VAR_8 = *VAR_1;

                VAR_1->len = VAR_1->pos = FUNC_6(VAR_2.cvec[VAR_7]);
                VAR_1->buf = VAR_2.cvec[VAR_7];
                FUNC_4(VAR_1);
                VAR_1->len = VAR_8.len;
                VAR_1->pos = VAR_8.pos;
                VAR_1->buf = VAR_8.buf;
            } else {
                FUNC_4(VAR_1);
            }

            VAR_3 = FUNC_1(&VAR_5, 1, 1, VAR_0);
            if (VAR_3 <= 0) {
                FUNC_2(&VAR_2);
                return -1;
            }

            switch(VAR_5) {
                case 128:
                    VAR_7 = (VAR_7+1) % (VAR_2.len+1);
                    if (VAR_7 == VAR_2.len) FUNC_3();
                    break;
                case 129:

                    if (VAR_7 < VAR_2.len) FUNC_4(VAR_1);
                    VAR_6 = 1;
                    break;
                default:

                    if (VAR_7 < VAR_2.len) {
                        VAR_4 = FUNC_5(VAR_1->buf,VAR_1->buflen,"%s",VAR_2.cvec[VAR_7]);
                        VAR_1->len = VAR_1->pos = VAR_4;
                    }
                    VAR_6 = 1;
                    break;
            }
        }
    }

    FUNC_2(&VAR_2);
    return VAR_5;
}
