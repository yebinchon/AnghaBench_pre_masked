
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sum; int count; } ;
typedef TYPE_1__ RICEContext ;



__attribute__((used)) static inline void FUNC_0(RICEContext *VAR_0, int VAR_1)
{
    VAR_0->sum += VAR_1;
    VAR_0->count++;

    if (VAR_0->count == 16) {
        VAR_0->sum >>= 1;
        VAR_0->count >>= 1;
    }
}
