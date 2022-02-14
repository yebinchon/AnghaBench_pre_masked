
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; size_t partitioning; int const* bmv; } ;
typedef TYPE_1__ VP8Macroblock ;
typedef int VP56mv ;


 scalar_t__ VAR_0 ;
 size_t** VAR_1 ;

__attribute__((used)) static const VP56mv *FUNC_0(const VP8Macroblock *VAR_2, int VAR_3)
{
    return &VAR_2->bmv[VAR_2->mode == VAR_0 ? VAR_1[VAR_2->partitioning][VAR_3] : 0];
}
