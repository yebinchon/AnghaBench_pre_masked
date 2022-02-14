
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int huff_buffer; } ;
struct TYPE_4__ {int mb_width; int width; int mb_height; int height; int chroma_format; TYPE_2__* mjpeg_ctx; } ;
typedef TYPE_1__ MpegEncContext ;
typedef int MJpegHuffmanCode ;
typedef TYPE_2__ MJpegContext ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int) ;

__attribute__((used)) static int FUNC_3(MpegEncContext *VAR_1)
{
    MJpegContext *VAR_2 = VAR_1->mjpeg_ctx;
    size_t VAR_3, VAR_4, VAR_5;
    int VAR_6;


    VAR_1->mb_width = (VAR_1->width + 15) / 16;
    VAR_1->mb_height = (VAR_1->height + 15) / 16;

    switch (VAR_1->chroma_format) {
    case 130: VAR_6 = 6; break;
    case 129: VAR_6 = 8; break;
    case 128: VAR_6 = 12; break;
    default: FUNC_1(0);
    };


    VAR_3 = VAR_1->mb_width * VAR_1->mb_height;
    VAR_4 = VAR_3 * VAR_6;
    VAR_5 = VAR_4 * 64;

    VAR_2->huff_buffer = FUNC_2(VAR_5, sizeof(MJpegHuffmanCode));
    if (!VAR_2->huff_buffer)
        return FUNC_0(VAR_0);
    return 0;
}
