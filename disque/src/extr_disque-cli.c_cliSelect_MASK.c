
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_6__ {scalar_t__ dbnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2() {
    redisReply *VAR_5;
    if (VAR_3.dbnum == 0) return VAR_1;

    VAR_5 = FUNC_1(VAR_4,"SELECT %d",VAR_3.dbnum);
    if (VAR_5 != ((void*)0)) {
        int VAR_6 = VAR_1;
        if (VAR_5->type == VAR_2) VAR_6 = VAR_0;
        FUNC_0(VAR_5);
        return VAR_6;
    }
    return VAR_0;
}
