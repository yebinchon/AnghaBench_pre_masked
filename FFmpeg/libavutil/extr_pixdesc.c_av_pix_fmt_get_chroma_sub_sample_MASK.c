
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int log2_chroma_w; int log2_chroma_h; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2(enum AVPixelFormat VAR_1,
                                     int *VAR_2, int *VAR_3)
{
    const AVPixFmtDescriptor *VAR_4 = FUNC_1(VAR_1);
    if (!VAR_4)
        return FUNC_0(VAR_0);
    *VAR_2 = VAR_4->log2_chroma_w;
    *VAR_3 = VAR_4->log2_chroma_h;

    return 0;
}
