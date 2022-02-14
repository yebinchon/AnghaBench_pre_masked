
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int compensation_distance; int dst_incr; int ideal_dst_incr; int dst_incr_div; int src_incr; int dst_incr_mod; } ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(ResampleContext *VAR_0, int VAR_1, int VAR_2){
    int VAR_3;

    if (VAR_2 && VAR_1) {
        VAR_3 = FUNC_0(VAR_0);
        if (VAR_3 < 0)
            return VAR_3;
    }

    VAR_0->compensation_distance= VAR_2;
    if (VAR_2)
        VAR_0->dst_incr = VAR_0->ideal_dst_incr - VAR_0->ideal_dst_incr * (int64_t)VAR_1 / VAR_2;
    else
        VAR_0->dst_incr = VAR_0->ideal_dst_incr;

    VAR_0->dst_incr_div = VAR_0->dst_incr / VAR_0->src_incr;
    VAR_0->dst_incr_mod = VAR_0->dst_incr % VAR_0->src_incr;

    return 0;
}
