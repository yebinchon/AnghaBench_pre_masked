
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {long long multibulklen; scalar_t__ argc; char* querybuf; int bulklen; int * argv; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 void* FUNC_5 (char*,int) ;
 char* FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (TYPE_1__*,int *,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,int,long long*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int) ;

int FUNC_15(client *VAR_5) {
    char *VAR_6 = ((void*)0);
    int VAR_7 = 0, VAR_8;
    long long VAR_9;

    if (VAR_5->multibulklen == 0) {

        FUNC_9(VAR_5,((void*)0),VAR_5->argc == 0);


        VAR_6 = FUNC_11(VAR_5->querybuf,'\r');
        if (VAR_6 == ((void*)0)) {
            if (FUNC_7(VAR_5->querybuf) > VAR_3) {
                FUNC_0(VAR_5,"Protocol error: too big mbulk count string");
                FUNC_10(VAR_5,0);
            }
            return VAR_0;
        }


        if (VAR_6-(VAR_5->querybuf) > ((signed)FUNC_7(VAR_5->querybuf)-2))
            return VAR_0;



        FUNC_9(VAR_5,((void*)0),VAR_5->querybuf[0] == '*');
        VAR_8 = FUNC_12(VAR_5->querybuf+1,VAR_6-(VAR_5->querybuf+1),&VAR_9);
        if (!VAR_8 || VAR_9 > 1024*1024) {
            FUNC_0(VAR_5,"Protocol error: invalid multibulk length");
            FUNC_10(VAR_5,VAR_7);
            return VAR_0;
        }

        VAR_7 = (VAR_6-VAR_5->querybuf)+2;
        if (VAR_9 <= 0) {
            FUNC_8(VAR_5->querybuf,VAR_7,-1);
            return VAR_1;
        }

        VAR_5->multibulklen = VAR_9;


        if (VAR_5->argv) FUNC_13(VAR_5->argv);
        VAR_5->argv = FUNC_14(sizeof(robj*)*VAR_5->multibulklen);
    }

    FUNC_9(VAR_5,((void*)0),VAR_5->multibulklen > 0);
    while(VAR_5->multibulklen) {

        if (VAR_5->bulklen == -1) {
            VAR_6 = FUNC_11(VAR_5->querybuf+VAR_7,'\r');
            if (VAR_6 == ((void*)0)) {
                if (FUNC_7(VAR_5->querybuf) > VAR_3) {
                    FUNC_0(VAR_5,
                        "Protocol error: too big bulk count string");
                    FUNC_10(VAR_5,0);
                    return VAR_0;
                }
                break;
            }


            if (VAR_6-(VAR_5->querybuf) > ((signed)FUNC_7(VAR_5->querybuf)-2))
                break;

            if (VAR_5->querybuf[VAR_7] != '$') {
                FUNC_1(VAR_5,
                    "Protocol error: expected '$', got '%c'",
                    VAR_5->querybuf[VAR_7]);
                FUNC_10(VAR_5,VAR_7);
                return VAR_0;
            }

            VAR_8 = FUNC_12(VAR_5->querybuf+VAR_7+1,VAR_6-(VAR_5->querybuf+VAR_7+1),&VAR_9);
            if (!VAR_8 || VAR_9 < 0 || VAR_9 > 512*1024*1024) {
                FUNC_0(VAR_5,"Protocol error: invalid bulk length");
                FUNC_10(VAR_5,VAR_7);
                return VAR_0;
            }

            VAR_7 += VAR_6-(VAR_5->querybuf+VAR_7)+2;
            if (VAR_9 >= VAR_4) {
                size_t VAR_10;





                FUNC_8(VAR_5->querybuf,VAR_7,-1);
                VAR_7 = 0;
                VAR_10 = FUNC_7(VAR_5->querybuf);


                if (VAR_10 < (size_t)VAR_9+2)
                    VAR_5->querybuf = FUNC_5(VAR_5->querybuf,VAR_9+2-VAR_10);
            }
            VAR_5->bulklen = VAR_9;
        }


        if (FUNC_7(VAR_5->querybuf)-VAR_7 < (unsigned)(VAR_5->bulklen+2)) {

            break;
        } else {



            if (VAR_7 == 0 &&
                VAR_5->bulklen >= VAR_4 &&
                (signed) FUNC_7(VAR_5->querybuf) == VAR_5->bulklen+2)
            {
                VAR_5->argv[VAR_5->argc++] = FUNC_2(VAR_2,VAR_5->querybuf);
                FUNC_4(VAR_5->querybuf,-2);
                VAR_5->querybuf = FUNC_6();


                VAR_5->querybuf = FUNC_5(VAR_5->querybuf,VAR_5->bulklen+2);
                VAR_7 = 0;
            } else {
                VAR_5->argv[VAR_5->argc++] =
                    FUNC_3(VAR_5->querybuf+VAR_7,VAR_5->bulklen);
                VAR_7 += VAR_5->bulklen+2;
            }
            VAR_5->bulklen = -1;
            VAR_5->multibulklen--;
        }
    }


    if (VAR_7) FUNC_8(VAR_5->querybuf,VAR_7,-1);


    if (VAR_5->multibulklen == 0) return VAR_1;


    return VAR_0;
}
