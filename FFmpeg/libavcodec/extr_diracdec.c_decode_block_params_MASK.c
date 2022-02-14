
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ** mv; int * dc; } ;
struct TYPE_13__ {int ref; TYPE_1__ u; } ;
struct TYPE_12__ {int num_refs; scalar_t__ globalmc_flag; } ;
typedef TYPE_2__ DiracContext ;
typedef TYPE_3__ DiracBlock ;
typedef int DiracArith ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_3__*,int,int,int) ;
 int FUNC_4 (TYPE_3__*,int,int,int,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(DiracContext *VAR_10, DiracArith VAR_11[8], DiracBlock *VAR_12,
                                int VAR_13, int VAR_14, int VAR_15)
{
    int VAR_16;

    VAR_12->ref = FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15, VAR_8);
    VAR_12->ref ^= FUNC_0(VAR_11, VAR_5);

    if (VAR_10->num_refs == 2) {
        VAR_12->ref |= FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15, VAR_9);
        VAR_12->ref ^= FUNC_0(VAR_11, VAR_6) << 1;
    }

    if (!VAR_12->ref) {
        FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15);
        for (VAR_16 = 0; VAR_16 < 3; VAR_16++)
            VAR_12->u.dc[VAR_16] += (unsigned)FUNC_1(VAR_11+1+VAR_16, VAR_1, VAR_0);
        return;
    }

    if (VAR_10->globalmc_flag) {
        VAR_12->ref |= FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15, VAR_7);
        VAR_12->ref ^= FUNC_0(VAR_11, VAR_2) << 2;
    }

    for (VAR_16 = 0; VAR_16 < VAR_10->num_refs; VAR_16++)
        if (VAR_12->ref & (VAR_16+1)) {
            if (VAR_12->ref & VAR_7) {
                FUNC_2(VAR_10, VAR_12, VAR_14, VAR_15, VAR_16);
            } else {
                FUNC_5(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
                VAR_12->u.mv[VAR_16][0] += (unsigned)FUNC_1(VAR_11 + 4 + 2 * VAR_16, VAR_4, VAR_3);
                VAR_12->u.mv[VAR_16][1] += (unsigned)FUNC_1(VAR_11 + 5 + 2 * VAR_16, VAR_4, VAR_3);
            }
        }
}
