
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ len; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVBPrint ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;

int64_t FUNC_4(AVIOContext *VAR_1, AVBPrint *VAR_2)
{
    int64_t VAR_3;

    FUNC_1(VAR_2);
    VAR_3 = FUNC_3(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;

    if (!FUNC_2(VAR_2))
        return FUNC_0(VAR_0);

    return VAR_2->len;
}
