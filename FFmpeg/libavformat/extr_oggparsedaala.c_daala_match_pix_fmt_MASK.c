
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct DaalaPixFmtMap {scalar_t__ depth; int planes; scalar_t__* xdec; scalar_t__* ydec; } ;
struct TYPE_3__ {scalar_t__ depth; int planes; scalar_t__* xdec; scalar_t__* ydec; int ffmpeg_fmt; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct DaalaPixFmtMap *VAR_1)
{
    int VAR_2, VAR_3;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        int VAR_4 = 0;
        if (VAR_1->depth != VAR_0[VAR_2].depth)
            continue;
        if (VAR_1->planes != VAR_0[VAR_2].planes)
            continue;
        for (VAR_3 = 0; VAR_3 < VAR_1->planes; VAR_3++) {
            if (VAR_1->xdec[VAR_3] != VAR_0[VAR_2].xdec[VAR_3])
                continue;
            if (VAR_1->ydec[VAR_3] != VAR_0[VAR_2].ydec[VAR_3])
                continue;
            VAR_4++;
        }
        if (VAR_4 == VAR_1->planes)
            return VAR_0[VAR_2].ffmpeg_fmt;
    }
    return -1;
}
