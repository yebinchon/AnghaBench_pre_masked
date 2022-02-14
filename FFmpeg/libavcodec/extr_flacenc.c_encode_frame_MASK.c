
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int channels; } ;
typedef TYPE_1__ FlacEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(FlacEncodeContext *VAR_2)
{
    int VAR_3;
    uint64_t VAR_4;

    VAR_4 = FUNC_0(VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++)
        VAR_4 += FUNC_1(VAR_2, VAR_3);

    VAR_4 += (8 - (VAR_4 & 7)) & 7;
    VAR_4 += 16;

    VAR_4 >>= 3;
    if (VAR_4 > VAR_1)
        return VAR_0;
    return VAR_4;
}
