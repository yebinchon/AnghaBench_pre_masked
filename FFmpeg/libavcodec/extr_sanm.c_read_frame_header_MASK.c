
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ width; scalar_t__ height; void* rle_output_size; void* bg_color; void* rotate_code; void* codec; void* seq_num; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; int gb; void** codebook; void** small_codebook; int avctx; } ;
typedef TYPE_1__ SANMVideoContext ;
typedef TYPE_2__ SANMFrameHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(SANMVideoContext *VAR_3, SANMFrameHeader *VAR_4)
{
    int VAR_5, VAR_6;

    if ((VAR_6 = FUNC_2(&VAR_3->gb)) < 560) {
        FUNC_0(VAR_3->avctx, VAR_2, "Input frame too short (%d bytes).\n",
               VAR_6);
        return VAR_0;
    }
    FUNC_6(&VAR_3->gb, 8);

    VAR_4->width = FUNC_5(&VAR_3->gb);
    VAR_4->height = FUNC_5(&VAR_3->gb);

    if (VAR_4->width != VAR_3->width || VAR_4->height != VAR_3->height) {
        FUNC_1(VAR_3->avctx, "Variable size frames");
        return VAR_1;
    }

    VAR_4->seq_num = FUNC_4(&VAR_3->gb);
    VAR_4->codec = FUNC_3(&VAR_3->gb);
    VAR_4->rotate_code = FUNC_3(&VAR_3->gb);

    FUNC_6(&VAR_3->gb, 4);

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        VAR_3->small_codebook[VAR_5] = FUNC_4(&VAR_3->gb);
    VAR_4->bg_color = FUNC_4(&VAR_3->gb);

    FUNC_6(&VAR_3->gb, 2);

    VAR_4->rle_output_size = FUNC_5(&VAR_3->gb);
    for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
        VAR_3->codebook[VAR_5] = FUNC_4(&VAR_3->gb);

    FUNC_6(&VAR_3->gb, 8);

    return 0;
}
