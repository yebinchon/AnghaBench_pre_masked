
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int uint64_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {size_t cpu_id; } ;
struct TYPE_3__ {scalar_t__ cpuc_missing_tos; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(uint64_t **VAR_3, int *VAR_4, user_addr_t *VAR_5,
                    user_addr_t VAR_6)
{
    int64_t VAR_7;
    int VAR_8 = 0;
    boolean_t VAR_9 = FUNC_5(FUNC_2());

    FUNC_0(VAR_5 != ((void*)0));

    if (FUNC_1(VAR_1)) {
        VAR_7 = *VAR_5;

        if (VAR_9)
            *VAR_5 = FUNC_4(VAR_6);
        else
            *VAR_5 = FUNC_3(VAR_6);
    } else {
        VAR_7 = VAR_2[VAR_0->cpu_id].cpuc_missing_tos;
    }

    if (VAR_7 != 0) {
        if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {




     *(*VAR_3)++ = VAR_7;
     (*VAR_4)--;
 }





         VAR_8 = 1;
    }
    return VAR_8;
}
