
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ old_width; scalar_t__ width; int old_height; int height; int framebuf_stride; int compression; int old_tile_w; int tile_width; int old_tile_h; int tile_height; int tile_stride; int epic_buf_stride; void* epic_buf_base; int * epic_buf; void* kempf_flags; void* kempf_buf; void* jpeg_tile; void* synth_tile; int framebuf; } ;
typedef TYPE_1__ G2MContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(G2MContext *VAR_2)
{
    int VAR_3;

    if (!VAR_2->framebuf || VAR_2->old_width < VAR_2->width || VAR_2->old_height < VAR_2->height) {
        VAR_2->framebuf_stride = FUNC_1(VAR_2->width + 15, 16) * 3;
        VAR_3 = VAR_2->height + 15;
        FUNC_2(VAR_2->framebuf);
        VAR_2->framebuf = FUNC_5(VAR_2->framebuf_stride, VAR_3);
        if (!VAR_2->framebuf)
            return FUNC_0(VAR_1);
    }
    if (!VAR_2->synth_tile || !VAR_2->jpeg_tile ||
        (VAR_2->compression == 2 && !VAR_2->epic_buf_base) ||
        VAR_2->old_tile_w < VAR_2->tile_width ||
        VAR_2->old_tile_h < VAR_2->tile_height) {
        VAR_2->tile_stride = FUNC_1(VAR_2->tile_width, 16) * 3;
        VAR_2->epic_buf_stride = FUNC_1(VAR_2->tile_width * 4, 16);
        VAR_3 = FUNC_1(VAR_2->tile_height, 16);
        FUNC_3(&VAR_2->synth_tile);
        FUNC_3(&VAR_2->jpeg_tile);
        FUNC_3(&VAR_2->kempf_buf);
        FUNC_3(&VAR_2->kempf_flags);
        FUNC_3(&VAR_2->epic_buf_base);
        VAR_2->epic_buf = ((void*)0);
        VAR_2->synth_tile = FUNC_4(VAR_2->tile_stride * VAR_3);
        VAR_2->jpeg_tile = FUNC_4(VAR_2->tile_stride * VAR_3);
        VAR_2->kempf_buf = FUNC_4((VAR_2->tile_width + 1) * VAR_3 +
                                    VAR_0);
        VAR_2->kempf_flags = FUNC_4(VAR_2->tile_width * VAR_3);
        if (!VAR_2->synth_tile || !VAR_2->jpeg_tile ||
            !VAR_2->kempf_buf || !VAR_2->kempf_flags)
            return FUNC_0(VAR_1);
        if (VAR_2->compression == 2) {
            VAR_2->epic_buf_base = FUNC_4(VAR_2->epic_buf_stride * VAR_3 + 4);
            if (!VAR_2->epic_buf_base)
                return FUNC_0(VAR_1);
            VAR_2->epic_buf = VAR_2->epic_buf_base + 4;
        }
    }

    return 0;
}
