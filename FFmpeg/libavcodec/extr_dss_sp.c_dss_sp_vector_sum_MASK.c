
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vector_buf; } ;
typedef TYPE_1__ DssSpContext ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(DssSpContext *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        VAR_3 += FUNC_0(VAR_0->vector_buf[VAR_2]);
    return VAR_3;
}
