
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown; int monitor_mode; int pubsub_mode; int slave_mode; scalar_t__ output; scalar_t__ interval; int dbnum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (size_t*) ;
 size_t* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int,char const**,size_t*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 () ;
 int VAR_5 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static int FUNC_15(int VAR_6, char **VAR_7, int VAR_8) {
    char *VAR_9 = VAR_7[0];
    size_t *VAR_10;
    int VAR_11, VAR_12;

    if (!FUNC_13(VAR_9,"help") || !FUNC_13(VAR_9,"?")) {
        FUNC_1(--VAR_6, ++VAR_7);
        return VAR_2;
    }

    if (VAR_4 == ((void*)0)) return VAR_1;

    VAR_12 = 0;
    if (!FUNC_13(VAR_9,"info") ||
        (VAR_6 == 2 && !FUNC_13(VAR_9,"cluster") &&
                      (!FUNC_13(VAR_7[1],"nodes") ||
                       !FUNC_13(VAR_7[1],"info"))) ||
        (VAR_6 == 2 && !FUNC_13(VAR_9,"client") &&
                       !FUNC_13(VAR_7[1],"list")) ||
        (VAR_6 == 3 && !FUNC_13(VAR_9,"latency") &&
                       !FUNC_13(VAR_7[1],"graph")) ||
        (VAR_6 == 2 && !FUNC_13(VAR_9,"latency") &&
                       !FUNC_13(VAR_7[1],"doctor")))
    {
        VAR_12 = 1;
    }

    if (!FUNC_13(VAR_9,"shutdown")) VAR_3.shutdown = 1;
    if (!FUNC_13(VAR_9,"monitor")) VAR_3.monitor_mode = 1;
    if (!FUNC_13(VAR_9,"subscribe") ||
        !FUNC_13(VAR_9,"psubscribe")) VAR_3.pubsub_mode = 1;
    if (!FUNC_13(VAR_9,"sync") ||
        !FUNC_13(VAR_9,"psync")) VAR_3.slave_mode = 1;


    VAR_10 = FUNC_8(VAR_6*sizeof(size_t));
    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
        VAR_10[VAR_11] = FUNC_11(VAR_7[VAR_11]);

    while(VAR_8--) {
        FUNC_10(VAR_4,VAR_6,(const char**)VAR_7,VAR_10);
        while (VAR_3.monitor_mode) {
            if (FUNC_2(VAR_12) != VAR_2) FUNC_5(1);
            FUNC_6(VAR_5);
        }

        if (VAR_3.pubsub_mode) {
            if (VAR_3.output != VAR_0)
                FUNC_9("Reading messages... (press Ctrl-C to quit)\n");
            while (1) {
                if (FUNC_2(VAR_12) != VAR_2) FUNC_5(1);
            }
        }

        if (VAR_3.slave_mode) {
            FUNC_9("Entering slave output mode...  (press Ctrl-C to quit)\n");
            FUNC_12();
            VAR_3.slave_mode = 0;
            FUNC_7(VAR_10);
            return VAR_1;
        }

        if (FUNC_2(VAR_12) != VAR_2) {
            FUNC_7(VAR_10);
            return VAR_1;
        } else {

            if (!FUNC_13(VAR_9,"select") && VAR_6 == 2) {
                VAR_3.dbnum = FUNC_0(VAR_7[1]);
                FUNC_3();
            } else if (!FUNC_13(VAR_9,"auth") && VAR_6 == 2) {
                FUNC_4();
            }
        }
        if (VAR_3.interval) FUNC_14(VAR_3.interval);
        FUNC_6(VAR_5);
    }

    FUNC_7(VAR_10);
    return VAR_2;
}
