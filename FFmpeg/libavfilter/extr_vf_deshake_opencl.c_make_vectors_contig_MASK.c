
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* matches_contig_host; TYPE_1__* matches_host; } ;
struct TYPE_4__ {scalar_t__ should_consider; } ;
typedef TYPE_1__ MotionVector ;
typedef TYPE_2__ DeshakeOpenCLContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
    DeshakeOpenCLContext *VAR_1,
    int VAR_2,
    int VAR_3
) {
    int VAR_4 = 0;

    for (int VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        for (int VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
            MotionVector VAR_7 = VAR_1->matches_host[VAR_6 + VAR_5 * VAR_3];

            if (VAR_7.should_consider) {
                VAR_1->matches_contig_host[VAR_4] = VAR_7;
                ++VAR_4;
            }


            if (VAR_4 == VAR_0 - 1) {
                return VAR_4;
            }
        }
    }
    return VAR_4;
}
