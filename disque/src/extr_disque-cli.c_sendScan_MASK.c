
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; char* str; int elements; TYPE_1__** element; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_5__ {scalar_t__ type; int str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_2__* FUNC_4 (int ,char*,unsigned long long) ;
 int VAR_4 ;

__attribute__((used)) static redisReply *FUNC_5(unsigned long long *VAR_5) {
    redisReply *VAR_6 = FUNC_4(VAR_3, "SCAN %llu", *VAR_5);


    if(VAR_6 == ((void*)0)) {
        FUNC_3(VAR_4, "\nI/O error\n");
        FUNC_2(1);
    } else if(VAR_6->type == VAR_1) {
        FUNC_3(VAR_4, "SCAN error: %s\n", VAR_6->str);
        FUNC_2(1);
    } else if(VAR_6->type != VAR_0) {
        FUNC_3(VAR_4, "Non ARRAY response from SCAN!\n");
        FUNC_2(1);
    } else if(VAR_6->elements != 2) {
        FUNC_3(VAR_4, "Invalid element count from SCAN!\n");
        FUNC_2(1);
    }


    FUNC_0(VAR_6->element[0]->type == VAR_2);
    FUNC_0(VAR_6->element[1]->type == VAR_0);


    *VAR_5 = FUNC_1(VAR_6->element[0]->str);

    return VAR_6;
}
