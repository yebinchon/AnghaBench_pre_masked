
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int sum; } ;
typedef TYPE_1__ RICEContext ;



__attribute__((used)) static int FUNC_0(RICEContext *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2 = VAR_0->count;

    while (VAR_0->sum > VAR_2 && VAR_1 < 9) {
        VAR_2 <<= 1;
        VAR_1++;
    }

    return VAR_1;
}
