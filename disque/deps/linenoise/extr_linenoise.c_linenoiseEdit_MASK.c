
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {int ifd; int ofd; char* buf; size_t buflen; char const* prompt; scalar_t__ oldpos; scalar_t__ pos; int len; int plen; scalar_t__ history_index; scalar_t__ maxrows; int cols; } ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (struct linenoiseState*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int * VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (struct linenoiseState*) ;
 int FUNC_5 (struct linenoiseState*) ;
 int FUNC_6 (struct linenoiseState*) ;
 int FUNC_7 (struct linenoiseState*,int ) ;
 int FUNC_8 (struct linenoiseState*,char) ;
 int FUNC_9 (struct linenoiseState*) ;
 int FUNC_10 (struct linenoiseState*) ;
 int FUNC_11 (struct linenoiseState*) ;
 int FUNC_12 (struct linenoiseState*) ;
 int FUNC_13 (char*) ;
 int VAR_7 ;
 int FUNC_14 (int,char*,int) ;
 int FUNC_15 (struct linenoiseState*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int,char const*,int ) ;

__attribute__((used)) static int FUNC_18(int VAR_8, int VAR_9, char *VAR_10, size_t VAR_11, const char *VAR_12)
{
    struct linenoiseState VAR_13;



    VAR_13.ifd = VAR_8;
    VAR_13.ofd = VAR_9;
    VAR_13.buf = VAR_10;
    VAR_13.buflen = VAR_11;
    VAR_13.prompt = VAR_12;
    VAR_13.plen = FUNC_16(VAR_12);
    VAR_13.oldpos = VAR_13.pos = 0;
    VAR_13.len = 0;
    VAR_13.cols = FUNC_2(VAR_8, VAR_9);
    VAR_13.maxrows = 0;
    VAR_13.history_index = 0;


    VAR_13.buf[0] = '\0';
    VAR_13.buflen--;



    FUNC_13("");

    if (FUNC_17(VAR_13.ofd,VAR_12,VAR_13.plen) == -1) return -1;
    while(1) {
        char VAR_14;
        int VAR_15;
        char VAR_16[3];

        VAR_15 = FUNC_14(VAR_13.ifd,&VAR_14,1);
        if (VAR_15 <= 0) return VAR_13.len;




        if (VAR_14 == 9 && VAR_3 != ((void*)0)) {
            VAR_14 = FUNC_0(&VAR_13);

            if (VAR_14 < 0) return VAR_13.len;

            if (VAR_14 == 0) continue;
        }

        switch(VAR_14) {
        case 129:
            VAR_6--;
            FUNC_1(VAR_5[VAR_6]);
            if (VAR_7) FUNC_9(&VAR_13);
            return (int)VAR_13.len;
        case 140:
            VAR_4 = VAR_0;
            return -1;
        case 143:
        case 8:
            FUNC_4(&VAR_13);
            break;
        case 139:

            if (VAR_13.len > 0) {
                FUNC_5(&VAR_13);
            } else {
                VAR_6--;
                FUNC_1(VAR_5[VAR_6]);
                return -1;
            }
            break;
        case 132:
            if (VAR_13.pos > 0 && VAR_13.pos < VAR_13.len) {
                int VAR_17 = VAR_10[VAR_13.pos-1];
                VAR_10[VAR_13.pos-1] = VAR_10[VAR_13.pos];
                VAR_10[VAR_13.pos] = VAR_17;
                if (VAR_13.pos != VAR_13.len-1) VAR_13.pos++;
                FUNC_15(&VAR_13);
            }
            break;
        case 141:
            FUNC_11(&VAR_13);
            break;
        case 137:
            FUNC_12(&VAR_13);
            break;
        case 133:
            FUNC_7(&VAR_13, VAR_2);
            break;
        case 134:
            FUNC_7(&VAR_13, VAR_1);
            break;
        case 128:



            if (FUNC_14(VAR_13.ifd,VAR_16,1) == -1) break;
            if (FUNC_14(VAR_13.ifd,VAR_16+1,1) == -1) break;


            if (VAR_16[0] == '[') {
                if (VAR_16[1] >= '0' && VAR_16[1] <= '9') {

                    if (FUNC_14(VAR_13.ifd,VAR_16+2,1) == -1) break;
                    if (VAR_16[2] == '~') {
                        switch(VAR_16[1]) {
                        case '3':
                            FUNC_5(&VAR_13);
                            break;
                        }
                    }
                } else {
                    switch(VAR_16[1]) {
                    case 'A':
                        FUNC_7(&VAR_13, VAR_2);
                        break;
                    case 'B':
                        FUNC_7(&VAR_13, VAR_1);
                        break;
                    case 'C':
                        FUNC_12(&VAR_13);
                        break;
                    case 'D':
                        FUNC_11(&VAR_13);
                        break;
                    case 'H':
                        FUNC_10(&VAR_13);
                        break;
                    case 'F':
                        FUNC_9(&VAR_13);
                        break;
                    }
                }
            }


            else if (VAR_16[0] == 'O') {
                switch(VAR_16[1]) {
                case 'H':
                    FUNC_10(&VAR_13);
                    break;
                case 'F':
                    FUNC_9(&VAR_13);
                    break;
                }
            }
            break;
        default:
            if (FUNC_8(&VAR_13,VAR_14)) return -1;
            break;
        case 131:
            VAR_10[0] = '\0';
            VAR_13.pos = VAR_13.len = 0;
            FUNC_15(&VAR_13);
            break;
        case 136:
            VAR_10[VAR_13.pos] = '\0';
            VAR_13.len = VAR_13.pos;
            FUNC_15(&VAR_13);
            break;
        case 142:
            FUNC_10(&VAR_13);
            break;
        case 138:
            FUNC_9(&VAR_13);
            break;
        case 135:
            FUNC_3();
            FUNC_15(&VAR_13);
            break;
        case 130:
            FUNC_6(&VAR_13);
            break;
        }
    }
    return VAR_13.len;
}
