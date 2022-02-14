
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct config {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int elements; } ;
typedef TYPE_1__ redisReply ;
typedef int redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct config) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__** FUNC_5 (int) ;
 int FUNC_6 (char*,int,long long) ;
 int FUNC_7 (int *,char*) ;
 TYPE_1__* FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,void*) ;
 int FUNC_10 (char*) ;
 long long FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct config VAR_3) {
    redisContext *VAR_4 = FUNC_1(VAR_3);
    redisReply **VAR_5;
    int VAR_6, VAR_7;
    long long VAR_8, VAR_9;

    FUNC_10("Throughput:\n");
    for (VAR_6 = 0; VAR_6 < 500; VAR_6++)
        FUNC_4(FUNC_8(VAR_4,"LPUSH mylist foo"));

    VAR_7 = 1000;
    VAR_5 = FUNC_5(sizeof(redisReply*)*VAR_7);
    VAR_8 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        VAR_5[VAR_6] = FUNC_8(VAR_4,"PING");
        FUNC_0(VAR_5[VAR_6] != ((void*)0) && VAR_5[VAR_6]->type == VAR_2);
    }
    VAR_9 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) FUNC_4(VAR_5[VAR_6]);
    FUNC_3(VAR_5);
    FUNC_6("\t(%dx PING: %.3fs)\n", VAR_7, (VAR_9-VAR_8)/1000000.0);

    VAR_5 = FUNC_5(sizeof(redisReply*)*VAR_7);
    VAR_8 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        VAR_5[VAR_6] = FUNC_8(VAR_4,"LRANGE mylist 0 499");
        FUNC_0(VAR_5[VAR_6] != ((void*)0) && VAR_5[VAR_6]->type == VAR_1);
        FUNC_0(VAR_5[VAR_6] != ((void*)0) && VAR_5[VAR_6]->elements == 500);
    }
    VAR_9 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) FUNC_4(VAR_5[VAR_6]);
    FUNC_3(VAR_5);
    FUNC_6("\t(%dx LRANGE with 500 elements: %.3fs)\n", VAR_7, (VAR_9-VAR_8)/1000000.0);

    VAR_7 = 10000;
    VAR_5 = FUNC_5(sizeof(redisReply*)*VAR_7);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        FUNC_7(VAR_4,"PING");
    VAR_8 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        FUNC_0(FUNC_9(VAR_4, (void*)&VAR_5[VAR_6]) == VAR_0);
        FUNC_0(VAR_5[VAR_6] != ((void*)0) && VAR_5[VAR_6]->type == VAR_2);
    }
    VAR_9 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) FUNC_4(VAR_5[VAR_6]);
    FUNC_3(VAR_5);
    FUNC_6("\t(%dx PING (pipelined): %.3fs)\n", VAR_7, (VAR_9-VAR_8)/1000000.0);

    VAR_5 = FUNC_5(sizeof(redisReply*)*VAR_7);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        FUNC_7(VAR_4,"LRANGE mylist 0 499");
    VAR_8 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        FUNC_0(FUNC_9(VAR_4, (void*)&VAR_5[VAR_6]) == VAR_0);
        FUNC_0(VAR_5[VAR_6] != ((void*)0) && VAR_5[VAR_6]->type == VAR_1);
        FUNC_0(VAR_5[VAR_6] != ((void*)0) && VAR_5[VAR_6]->elements == 500);
    }
    VAR_9 = FUNC_11();
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) FUNC_4(VAR_5[VAR_6]);
    FUNC_3(VAR_5);
    FUNC_6("\t(%dx LRANGE with 500 elements (pipelined): %.3fs)\n", VAR_7, (VAR_9-VAR_8)/1000000.0);

    FUNC_2(VAR_4, 0);
}
