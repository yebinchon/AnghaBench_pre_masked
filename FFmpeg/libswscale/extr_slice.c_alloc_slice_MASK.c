
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int h_chr_sub_sample; int v_chr_sub_sample; int fmt; int is_ring; TYPE_1__* plane; scalar_t__ should_free_lines; } ;
struct TYPE_4__ {int available_lines; scalar_t__ sliceH; scalar_t__ sliceY; int line; int * tmp; } ;
typedef TYPE_2__ SwsSlice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(SwsSlice *VAR_1, enum AVPixelFormat VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    int VAR_9[4] = { VAR_3,
                    VAR_4,
                    VAR_4,
                    VAR_3 };

    VAR_1->h_chr_sub_sample = VAR_5;
    VAR_1->v_chr_sub_sample = VAR_6;
    VAR_1->fmt = VAR_2;
    VAR_1->is_ring = VAR_7;
    VAR_1->should_free_lines = 0;

    for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
        int VAR_10 = VAR_9[VAR_8] * ( VAR_7 == 0 ? 1 : 3);
        VAR_1->plane[VAR_8].line = FUNC_1(sizeof(uint8_t*), VAR_10);
        if (!VAR_1->plane[VAR_8].line)
            return FUNC_0(VAR_0);

        VAR_1->plane[VAR_8].tmp = VAR_7 ? VAR_1->plane[VAR_8].line + VAR_9[VAR_8] * 2 : ((void*)0);
        VAR_1->plane[VAR_8].available_lines = VAR_9[VAR_8];
        VAR_1->plane[VAR_8].sliceY = 0;
        VAR_1->plane[VAR_8].sliceH = 0;
    }
    return 0;
}
