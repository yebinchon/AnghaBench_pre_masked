
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {struct TYPE_9__* K1; struct TYPE_9__* K2; struct TYPE_9__* iv; int sched; } ;
typedef TYPE_1__* TCCmacState_t ;
typedef int TCAesKeySched_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(TCCmacState_t VAR_3, const uint8_t *VAR_4, TCAesKeySched_t VAR_5)
{


    if (VAR_3 == (TCCmacState_t) 0 ||
            VAR_4 == (const uint8_t *) 0) {
        return VAR_1;
    }


    FUNC_0(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->sched = VAR_5;


    FUNC_2(VAR_3->sched, VAR_4);


    FUNC_0(VAR_3->iv, 0, VAR_0);
    FUNC_3(VAR_3->iv, VAR_3->iv, VAR_3->sched);
    FUNC_1 (VAR_3->K1, VAR_3->iv);
    FUNC_1 (VAR_3->K2, VAR_3->K1);


    FUNC_4(VAR_3);

    return VAR_2;
}
