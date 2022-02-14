
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int redisReply ;
struct TYPE_7__ {int err; char* errstr; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_8__ {int hostport; int hostip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_6__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int) ;

__attribute__((used)) static redisReply *FUNC_9(void) {
    redisContext *VAR_6 = VAR_3;
    redisReply *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    FUNC_0(!VAR_6->err);
    while(VAR_7 == ((void*)0)) {
        while (VAR_6->err & (VAR_1 | VAR_0)) {
            FUNC_4("Reconnecting (%d)...\r", ++VAR_8);
            FUNC_2(VAR_5);

            FUNC_7(VAR_6);
            VAR_6 = FUNC_6(VAR_2.hostip,VAR_2.hostport);
            FUNC_8(1000000);
        }

        VAR_7 = FUNC_5(VAR_6,"INFO");
        if (VAR_6->err && !(VAR_6->err & (VAR_1 | VAR_0))) {
            FUNC_3(VAR_4, "Error: %s\n", VAR_6->errstr);
            FUNC_1(1);
        } else if (VAR_8 > 0) {
            FUNC_4("\n");
        }
    }

    VAR_3 = VAR_6;
    return VAR_7;
}
