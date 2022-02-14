
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; int pkt; } ;
struct TYPE_8__ {int header_written; } ;
typedef TYPE_1__ FifoThreadContext ;
typedef TYPE_2__ FifoMessage ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(FifoThreadContext *VAR_1, FifoMessage *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0);

    if (!VAR_1->header_written) {
        VAR_3 = FUNC_3(VAR_1);
        if (VAR_3 < 0)
            return VAR_3;
    }

    switch(VAR_2->type) {
    case 129:
        FUNC_1(VAR_3 >= 0);
        return VAR_3;
    case 128:
        return FUNC_4(VAR_1, &VAR_2->pkt);
    case 130:
        return FUNC_2(VAR_1);
    }

    FUNC_1(0);
    return FUNC_0(VAR_0);
}
