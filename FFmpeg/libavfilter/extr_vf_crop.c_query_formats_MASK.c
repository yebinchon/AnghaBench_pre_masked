
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ log2_chroma_h; scalar_t__ log2_chroma_w; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_3)
{
    AVFilterFormats *VAR_4 = ((void*)0);
    int VAR_5, VAR_6;

    for (VAR_5 = 0; FUNC_0(VAR_5); VAR_5++) {
        const AVPixFmtDescriptor *VAR_7 = FUNC_0(VAR_5);
        if (VAR_7->flags & VAR_0)
            continue;
        if (!(VAR_7->flags & VAR_1)) {


            if ((VAR_7->log2_chroma_w || VAR_7->log2_chroma_h) &&
                !(VAR_7->flags & VAR_2))
                continue;
        }
        VAR_6 = FUNC_1(&VAR_4, VAR_5);
        if (VAR_6 < 0)
            return VAR_6;
    }

    return FUNC_2(VAR_3, VAR_4);
}
