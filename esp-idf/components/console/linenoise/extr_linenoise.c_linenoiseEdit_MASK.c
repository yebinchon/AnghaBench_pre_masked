
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {char* buf; size_t buflen; char const* prompt; int plen; scalar_t__ oldpos; scalar_t__ pos; int len; scalar_t__ history_index; scalar_t__ maxrows; int cols; } ;
typedef int linenoiseHintsCallback ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct linenoiseState*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * VAR_5 ;
 int * VAR_6 ;
 size_t VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (struct linenoiseState*) ;
 int FUNC_10 (struct linenoiseState*) ;
 int FUNC_11 (struct linenoiseState*) ;
 int FUNC_12 (struct linenoiseState*,int ) ;
 int FUNC_13 (struct linenoiseState*,char) ;
 int FUNC_14 (struct linenoiseState*) ;
 int FUNC_15 (struct linenoiseState*) ;
 int FUNC_16 (struct linenoiseState*) ;
 int FUNC_17 (struct linenoiseState*) ;
 int FUNC_18 (char*) ;
 int VAR_8 ;
 int FUNC_19 (struct linenoiseState*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (char const*) ;

__attribute__((used)) static int FUNC_21(char *VAR_11, size_t VAR_12, const char *VAR_13)
{
    struct linenoiseState VAR_14;



    VAR_14.buf = VAR_11;
    VAR_14.buflen = VAR_12;
    VAR_14.prompt = VAR_13;
    VAR_14.plen = FUNC_20(VAR_13);
    VAR_14.oldpos = VAR_14.pos = 0;
    VAR_14.len = 0;
    VAR_14.cols = FUNC_6();
    VAR_14.maxrows = 0;
    VAR_14.history_index = 0;


    VAR_14.buf[0] = '\0';
    VAR_14.buflen--;



    FUNC_18("");

    int VAR_15 = FUNC_7();
    if (FUNC_5(VAR_13,VAR_14.plen,1,VAR_10) == -1) return -1;
    int VAR_16 = FUNC_7();
    if (VAR_15 >= 0 && VAR_16 >= 0) {
        VAR_14.plen = VAR_16 - VAR_15;
    }
    while(1) {
        char VAR_17;
        int VAR_18;
        char VAR_19[3];

        VAR_18 = FUNC_3(&VAR_17, 1, 1, VAR_9);
        if (VAR_18 <= 0) return VAR_14.len;




        if (VAR_17 == 9 && VAR_3 != ((void*)0)) {
            int VAR_20 = FUNC_1(&VAR_14);

            if (VAR_20 < 0) return VAR_14.len;

            if (VAR_20 == 0) continue;
            VAR_17 = VAR_20;
        }

        switch(VAR_17) {
        case 129:
            VAR_7--;
            FUNC_4(VAR_6[VAR_7]);
            if (VAR_8) FUNC_14(&VAR_14);
            if (VAR_5) {


                linenoiseHintsCallback *VAR_21 = VAR_5;
                VAR_5 = ((void*)0);
                FUNC_19(&VAR_14);
                VAR_5 = VAR_21;
            }
            return (int)VAR_14.len;
        case 140:
            VAR_4 = VAR_0;
            return -1;
        case 143:
        case 8:
            FUNC_9(&VAR_14);
            break;
        case 139:

            if (VAR_14.len > 0) {
                FUNC_10(&VAR_14);
            } else {
                VAR_7--;
                FUNC_4(VAR_6[VAR_7]);
                return -1;
            }
            break;
        case 132:
            if (VAR_14.pos > 0 && VAR_14.pos < VAR_14.len) {
                int VAR_22 = VAR_11[VAR_14.pos-1];
                VAR_11[VAR_14.pos-1] = VAR_11[VAR_14.pos];
                VAR_11[VAR_14.pos] = VAR_22;
                if (VAR_14.pos != VAR_14.len-1) VAR_14.pos++;
                FUNC_19(&VAR_14);
            }
            break;
        case 141:
            FUNC_16(&VAR_14);
            break;
        case 137:
            FUNC_17(&VAR_14);
            break;
        case 133:
            FUNC_12(&VAR_14, VAR_2);
            break;
        case 134:
            FUNC_12(&VAR_14, VAR_1);
            break;
        case 128:

            if (FUNC_3(VAR_19, 1, 2, VAR_9) < 2) break;


            if (VAR_19[0] == '[') {
                if (VAR_19[1] >= '0' && VAR_19[1] <= '9') {

                    if (FUNC_3(VAR_19+2, 1, 1, VAR_9) == -1) break;
                    if (VAR_19[2] == '~') {
                        switch(VAR_19[1]) {
                        case '3':
                            FUNC_10(&VAR_14);
                            break;
                        }
                    }
                } else {
                    switch(VAR_19[1]) {
                    case 'A':
                        FUNC_12(&VAR_14, VAR_2);
                        break;
                    case 'B':
                        FUNC_12(&VAR_14, VAR_1);
                        break;
                    case 'C':
                        FUNC_17(&VAR_14);
                        break;
                    case 'D':
                        FUNC_16(&VAR_14);
                        break;
                    case 'H':
                        FUNC_15(&VAR_14);
                        break;
                    case 'F':
                        FUNC_14(&VAR_14);
                        break;
                    }
                }
            }


            else if (VAR_19[0] == 'O') {
                switch(VAR_19[1]) {
                case 'H':
                    FUNC_15(&VAR_14);
                    break;
                case 'F':
                    FUNC_14(&VAR_14);
                    break;
                }
            }
            break;
        default:
            if (FUNC_13(&VAR_14,VAR_17)) return -1;
            break;
        case 131:
            VAR_11[0] = '\0';
            VAR_14.pos = VAR_14.len = 0;
            FUNC_19(&VAR_14);
            break;
        case 136:
            VAR_11[VAR_14.pos] = '\0';
            VAR_14.len = VAR_14.pos;
            FUNC_19(&VAR_14);
            break;
        case 142:
            FUNC_15(&VAR_14);
            break;
        case 138:
            FUNC_14(&VAR_14);
            break;
        case 135:
            FUNC_8();
            FUNC_19(&VAR_14);
            break;
        case 130:
            FUNC_11(&VAR_14);
            break;
        }
        if (FUNC_0(VAR_10) > 0) {
            FUNC_2(VAR_10);
        }
    }
    return VAR_14.len;
}
