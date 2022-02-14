
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ log2_chroma_w; scalar_t__ log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_4__ {scalar_t__ plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_2)
{
    AVFilterFormats *VAR_3 = ((void*)0);
    int VAR_4, VAR_5;

    for (VAR_4 = 0; FUNC_0(VAR_4); VAR_4++) {
        const AVPixFmtDescriptor *VAR_6 = FUNC_0(VAR_4);
        if (!(VAR_6->flags & VAR_1 ||
              VAR_6->flags & VAR_0 ||
              (VAR_6->log2_chroma_w != VAR_6->log2_chroma_h &&
               VAR_6->comp[0].plane == VAR_6->comp[1].plane)) &&
            (VAR_5 = FUNC_1(&VAR_3, VAR_4)) < 0)
            return VAR_5;
    }

    return FUNC_2(VAR_2, VAR_3);
}
