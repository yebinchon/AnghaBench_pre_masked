
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int e; void* m; } ;
typedef TYPE_1__ softfloat ;
typedef int int32_t ;
struct TYPE_11__ {int e; int m; } ;
struct TYPE_10__ {int e; int m; } ;
struct TYPE_9__ {int* cb_to_level; } ;
typedef TYPE_2__ DCAEncContext ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int,TYPE_1__) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_3(DCAEncContext *VAR_3, int32_t VAR_4, int VAR_5,
                          softfloat *VAR_6)
{
    int32_t VAR_7;
    int VAR_8, VAR_9;
    softfloat VAR_10;

    FUNC_0(VAR_4 <= 0);
    FUNC_0(VAR_4 >= -2047);

    VAR_8 = 127;
    VAR_7 = VAR_3->cb_to_level[-VAR_4];

    for (VAR_9 = 64; VAR_9 > 0; VAR_9 >>= 1) {
        if (VAR_1[VAR_8 - VAR_9].e + VAR_2[VAR_5].e <= 17)
            continue;
        VAR_10.m = FUNC_1(VAR_1[VAR_8 - VAR_9].m, VAR_2[VAR_5].m);
        VAR_10.e = VAR_1[VAR_8 - VAR_9].e + VAR_2[VAR_5].e - 17;
        if ((VAR_0[VAR_5] - 1) / 2 < FUNC_2(VAR_7, VAR_10))
            continue;
        VAR_8 -= VAR_9;
    }

    if (VAR_8 >= 125)
        VAR_8 = 124;

    VAR_6->m = FUNC_1(VAR_1[VAR_8].m, VAR_2[VAR_5].m);
    VAR_6->e = VAR_1[VAR_8].e + VAR_2[VAR_5].e - 17;
    FUNC_0((VAR_0[VAR_5] - 1) / 2 >= FUNC_2(VAR_7, *VAR_6));

    return VAR_8;
}
