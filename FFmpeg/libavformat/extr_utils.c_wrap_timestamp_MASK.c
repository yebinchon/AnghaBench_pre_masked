
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ pts_wrap_behavior; scalar_t__ pts_wrap_reference; unsigned long long pts_wrap_bits; } ;
typedef TYPE_1__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int64_t FUNC_0(const AVStream *VAR_4, int64_t VAR_5)
{
    if (VAR_4->pts_wrap_behavior != VAR_2 &&
        VAR_4->pts_wrap_reference != VAR_0 && VAR_5 != VAR_0) {
        if (VAR_4->pts_wrap_behavior == VAR_1 &&
            VAR_5 < VAR_4->pts_wrap_reference)
            return VAR_5 + (1ULL << VAR_4->pts_wrap_bits);
        else if (VAR_4->pts_wrap_behavior == VAR_3 &&
            VAR_5 >= VAR_4->pts_wrap_reference)
            return VAR_5 - (1ULL << VAR_4->pts_wrap_bits);
    }
    return VAR_5;
}
