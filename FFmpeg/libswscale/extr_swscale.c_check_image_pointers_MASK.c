
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* comp; } ;
struct TYPE_5__ {int plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const uint8_t * const VAR_0[4], enum AVPixelFormat VAR_1,
                                const int VAR_2[4])
{
    const AVPixFmtDescriptor *VAR_3 = FUNC_1(VAR_1);
    int VAR_4;

    FUNC_0(VAR_3);

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        int VAR_5 = VAR_3->comp[VAR_4].plane;
        if (!VAR_0[VAR_5] || !VAR_2[VAR_5])
            return 0;
    }

    return 1;
}
