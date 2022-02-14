
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double f64; int u64; } ;
typedef TYPE_1__ av_alias64 ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

double FUNC_2(GetByteContext *VAR_0, int VAR_1)
{
    av_alias64 VAR_2 = { .u64 = VAR_1 ? FUNC_1(VAR_0) : FUNC_0(VAR_0)};
    return VAR_2.f64;
}
