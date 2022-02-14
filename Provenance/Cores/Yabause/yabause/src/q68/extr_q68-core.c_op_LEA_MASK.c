
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int ea_addr; int * A; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 size_t VAR_9 ;

__attribute__((used)) static int FUNC_4(Q68State *VAR_10, uint32_t VAR_11)
{
    VAR_7;


    if (FUNC_0(VAR_11) == VAR_2
     || FUNC_0(VAR_11) == VAR_1
     || FUNC_0(VAR_11) == VAR_5
     || FUNC_0(VAR_11) == VAR_6
     || (FUNC_0(VAR_11) == VAR_3 && FUNC_1(VAR_11) == VAR_4)
    ) {
        return FUNC_3(VAR_10, VAR_11);
    }

    int VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_8, VAR_0);
    if (VAR_12 < 0) {
        return FUNC_3(VAR_10, VAR_11);
    }
    if (VAR_12 % 4 == 2) {
        VAR_12 += 2;
    }
    VAR_10->A[VAR_9] = VAR_10->ea_addr;
    return VAR_12;
}
