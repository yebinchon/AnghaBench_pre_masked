
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int integer; } ;
typedef TYPE_1__ redisReply ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(void) {
    redisReply *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_3(VAR_1, "DBSIZE");

    if(VAR_3 == ((void*)0) || VAR_3->type != VAR_0) {
        FUNC_1(VAR_2, "Couldn't determine DBSIZE!\n");
        FUNC_0(1);
    }


    VAR_4 = VAR_3->integer;
    FUNC_2(VAR_3);

    return VAR_4;
}
