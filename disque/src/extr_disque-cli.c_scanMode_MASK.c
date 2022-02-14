
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; char* str; TYPE_2__** element; } ;
typedef TYPE_3__ redisReply ;
struct TYPE_10__ {scalar_t__ pattern; } ;
struct TYPE_8__ {unsigned int elements; TYPE_1__** element; int str; } ;
struct TYPE_7__ {char* str; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__* FUNC_3 (int ,char*,unsigned long long,...) ;
 unsigned long long FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void FUNC_5(void) {
    redisReply *VAR_3;
    unsigned long long VAR_4 = 0;

    do {
        if (VAR_1.pattern)
            VAR_3 = FUNC_3(VAR_2,"SCAN %llu MATCH %s",
                VAR_4,VAR_1.pattern);
        else
            VAR_3 = FUNC_3(VAR_2,"SCAN %llu",VAR_4);
        if (VAR_3 == ((void*)0)) {
            FUNC_2("I/O error\n");
            FUNC_0(1);
        } else if (VAR_3->type == VAR_0) {
            FUNC_2("ERROR: %s\n", VAR_3->str);
            FUNC_0(1);
        } else {
            unsigned int VAR_5;

            VAR_4 = FUNC_4(VAR_3->element[0]->str,((void*)0),10);
            for (VAR_5 = 0; VAR_5 < VAR_3->element[1]->elements; VAR_5++)
                FUNC_2("%s\n", VAR_3->element[1]->element[VAR_5]->str);
        }
        FUNC_1(VAR_3);
    } while(VAR_4 != 0);

    FUNC_0(0);
}
