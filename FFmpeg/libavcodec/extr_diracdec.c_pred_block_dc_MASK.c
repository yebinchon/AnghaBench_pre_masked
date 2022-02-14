
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* dc; } ;
struct TYPE_5__ {int ref; TYPE_1__ u; } ;
typedef TYPE_2__ DiracBlock ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(DiracBlock *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 0;

    FUNC_1(VAR_0->u.dc, 0, sizeof(VAR_0->u.dc));

    if (VAR_2 && !(VAR_0[-1].ref & 3)) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_0->u.dc[VAR_4] += VAR_0[-1].u.dc[VAR_4];
        VAR_5++;
    }

    if (VAR_3 && !(VAR_0[-VAR_1].ref & 3)) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_0->u.dc[VAR_4] += VAR_0[-VAR_1].u.dc[VAR_4];
        VAR_5++;
    }

    if (VAR_2 && VAR_3 && !(VAR_0[-1-VAR_1].ref & 3)) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_0->u.dc[VAR_4] += VAR_0[-1-VAR_1].u.dc[VAR_4];
        VAR_5++;
    }

    if (VAR_5 == 2) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_0->u.dc[VAR_4] = (VAR_0->u.dc[VAR_4]+1)>>1;
    } else if (VAR_5 == 3) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_0->u.dc[VAR_4] = FUNC_0(VAR_0->u.dc[VAR_4]);
    }
}
