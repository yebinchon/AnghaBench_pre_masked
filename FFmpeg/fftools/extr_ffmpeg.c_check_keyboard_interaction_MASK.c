
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
typedef int buf ;
struct TYPE_14__ {TYPE_2__* st; } ;
struct TYPE_13__ {scalar_t__ graph; } ;
struct TYPE_12__ {TYPE_3__* enc_ctx; } ;
struct TYPE_11__ {int debug; } ;
struct TYPE_10__ {TYPE_1__* codec; } ;
struct TYPE_9__ {int debug; } ;
typedef TYPE_4__ OutputStream ;
typedef TYPE_5__ FilterGraph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,char*,char*,int ,double) ;
 int FUNC_5 (scalar_t__,char*,char*,char*,char*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__** VAR_10 ;
 int FUNC_6 (int ,char*,...) ;
 TYPE_7__** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__** VAR_15 ;
 int VAR_16 ;
 int FUNC_7 () ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,...) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_10(int64_t VAR_20)
{
    int VAR_21, VAR_22, VAR_23;
    static int64_t VAR_24;
    if (VAR_17)
        return VAR_0;

    if(VAR_20 - VAR_24 >= 100000 && !VAR_18){
        VAR_23 = FUNC_7();
        VAR_24 = VAR_20;
    }else
        VAR_23 = -1;
    if (VAR_23 == 'q')
        return VAR_0;
    if (VAR_23 == '+') FUNC_3(FUNC_2()+10);
    if (VAR_23 == '-') FUNC_3(FUNC_2()-10);
    if (VAR_23 == 's') VAR_16 ^= 1;
    if (VAR_23 == 'h'){
        if (VAR_8){
            VAR_8 = VAR_9 = 0;
        } else if(VAR_9){
            VAR_8 = 1;
        } else
            VAR_9 = 1;
        FUNC_3(VAR_3);
    }
    if (VAR_23 == 'c' || VAR_23 == 'C'){
        char VAR_25[4096], VAR_26[64], VAR_27[256], VAR_28[256] = {0};
        double VAR_29;
        int VAR_30, VAR_31 = 0;
        FUNC_6(VAR_19, "\nEnter command: <target>|all <time>|-1 <command>[ <argument>]\n");
        VAR_21 = 0;
        FUNC_8(1);
        while ((VAR_30 = FUNC_7()) != '\n' && VAR_30 != '\r' && VAR_21 < sizeof(VAR_25)-1)
            if (VAR_30 > 0)
                VAR_25[VAR_21++] = VAR_30;
        VAR_25[VAR_21] = 0;
        FUNC_8(0);
        FUNC_6(VAR_19, "\n");
        if (VAR_30 > 0 &&
            (VAR_31 = FUNC_9(VAR_25, "%63[^ ] %lf %255[^ ] %255[^\n]", VAR_26, &VAR_29, VAR_27, VAR_28)) >= 3) {
            FUNC_1(((void*)0), VAR_3, "Processing command target:%s time:%f command:%s arg:%s",
                   VAR_26, VAR_29, VAR_27, VAR_28);
            for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
                FilterGraph *VAR_32 = VAR_10[VAR_21];
                if (VAR_32->graph) {
                    if (VAR_29 < 0) {
                        VAR_22 = FUNC_5(VAR_32->graph, VAR_26, VAR_27, VAR_28, VAR_25, sizeof(VAR_25),
                                                          VAR_23 == 'c' ? VAR_2 : 0);
                        FUNC_6(VAR_19, "Command reply for stream %d: ret:%d res:\n%s", VAR_21, VAR_22, VAR_25);
                    } else if (VAR_23 == 'c') {
                        FUNC_6(VAR_19, "Queuing commands only on filters supporting the specific command is unsupported\n");
                        VAR_22 = VAR_1;
                    } else {
                        VAR_22 = FUNC_4(VAR_32->graph, VAR_26, VAR_27, VAR_28, 0, VAR_29);
                        if (VAR_22 < 0)
                            FUNC_6(VAR_19, "Queuing command failed with error %s\n", FUNC_0(VAR_22));
                    }
                }
            }
        } else {
            FUNC_1(((void*)0), VAR_4,
                   "Parse error, at least 3 arguments were expected, "
                   "only %d given in string '%s'\n", VAR_31, VAR_25);
        }
    }
    if (VAR_23 == 'd' || VAR_23 == 'D'){
        int VAR_33=0;
        if(VAR_23 == 'D') {
            VAR_33 = VAR_11[0]->st->codec->debug<<1;
            if(!VAR_33) VAR_33 = 1;
            while(VAR_33 & (VAR_5



                                                                                  ))
                VAR_33 += VAR_33;
        }else{
            char VAR_34[32];
            int VAR_35 = 0;
            VAR_21 = 0;
            FUNC_8(1);
            while ((VAR_35 = FUNC_7()) != '\n' && VAR_35 != '\r' && VAR_21 < sizeof(VAR_34)-1)
                if (VAR_35 > 0)
                    VAR_34[VAR_21++] = VAR_35;
            VAR_34[VAR_21] = 0;
            FUNC_8(0);
            FUNC_6(VAR_19, "\n");
            if (VAR_35 <= 0 || FUNC_9(VAR_34, "%d", &VAR_33)!=1)
                FUNC_6(VAR_19,"error parsing debug value\n");
        }
        for(VAR_21=0;VAR_21<VAR_13;VAR_21++) {
            VAR_11[VAR_21]->st->codec->debug = VAR_33;
        }
        for(VAR_21=0;VAR_21<VAR_14;VAR_21++) {
            OutputStream *VAR_36 = VAR_15[VAR_21];
            VAR_36->enc_ctx->debug = VAR_33;
        }
        if(VAR_33) FUNC_3(VAR_3);
        FUNC_6(VAR_19,"debug=%d\n", VAR_33);
    }
    if (VAR_23 == '?'){
        FUNC_6(VAR_19, "key    function\n"
                        "?      show this help\n"
                        "+      increase verbosity\n"
                        "-      decrease verbosity\n"
                        "c      Send command to first matching filter supporting it\n"
                        "C      Send/Queue command to all matching filters\n"
                        "D      cycle through available debug modes\n"
                        "h      dump packets/hex press to cycle through the 3 states\n"
                        "q      quit\n"
                        "s      Show QP histogram\n"
        );
    }
    return 0;
}
