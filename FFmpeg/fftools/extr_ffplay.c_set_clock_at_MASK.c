
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double pts; double last_updated; double pts_drift; int serial; } ;
typedef TYPE_1__ Clock ;



__attribute__((used)) static void FUNC_0(Clock *VAR_0, double VAR_1, int VAR_2, double VAR_3)
{
    VAR_0->pts = VAR_1;
    VAR_0->last_updated = VAR_3;
    VAR_0->pts_drift = VAR_0->pts - VAR_3;
    VAR_0->serial = VAR_2;
}
