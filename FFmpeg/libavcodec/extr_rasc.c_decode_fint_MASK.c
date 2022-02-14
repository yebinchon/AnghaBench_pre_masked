
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__* data; } ;
struct TYPE_9__ {unsigned int width; unsigned int height; unsigned int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_8__ {unsigned int stride; int bpp; TYPE_7__* frame2; TYPE_7__* frame1; int gb; } ;
typedef TYPE_1__ RASCContext ;
typedef int GetByteContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_2__*,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4,
                       AVPacket *VAR_5, unsigned VAR_6)
{
    RASCContext *VAR_7 = VAR_4->priv_data;
    GetByteContext *VAR_8 = &VAR_7->gb;
    unsigned VAR_9, VAR_10, VAR_11;
    int VAR_12;

    if (FUNC_4(VAR_8) != 0x65) {
        if (!VAR_7->frame2->data[0] || !VAR_7->frame1->data[0])
            return VAR_0;

        FUNC_6(VAR_4, VAR_7->frame2);
        FUNC_6(VAR_4, VAR_7->frame1);
        return 0;
    }
    if (FUNC_1(VAR_8) < 72)
        return VAR_0;

    FUNC_5(VAR_8, 8);
    VAR_9 = FUNC_3(VAR_8);
    VAR_10 = FUNC_3(VAR_8);
    FUNC_5(VAR_8, 30);
    VAR_11 = FUNC_2(VAR_8);
    FUNC_5(VAR_8, 24);

    switch (VAR_11) {
    case 8: VAR_7->stride = FUNC_0(VAR_9, 4);
             VAR_7->bpp = 1;
             VAR_11 = VAR_2; break;
    case 16: VAR_7->stride = VAR_9 * 2;
             VAR_7->bpp = 2;
             VAR_11 = VAR_3; break;
    case 32: VAR_7->stride = VAR_9 * 4;
             VAR_7->bpp = 4;
             VAR_11 = VAR_1; break;
    default: return VAR_0;
    }

    VAR_12 = FUNC_7(VAR_4, VAR_9, VAR_10);
    if (VAR_12 < 0)
        return VAR_12;
    VAR_4->width = VAR_9;
    VAR_4->height = VAR_10;
    VAR_4->pix_fmt = VAR_11;

    VAR_12 = FUNC_8(VAR_4);
    if (VAR_12 < 0)
        return VAR_12;

    if (VAR_4->pix_fmt == VAR_2) {
        uint32_t *VAR_13 = (uint32_t *)VAR_7->frame2->data[1];

        for (int VAR_14 = 0; VAR_14 < 256; VAR_14++)
            VAR_13[VAR_14] = FUNC_3(VAR_8) | 0xFF000000u;
    }

    return 0;
}
