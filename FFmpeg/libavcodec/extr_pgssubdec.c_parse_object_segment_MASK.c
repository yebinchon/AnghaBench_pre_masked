
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ count; TYPE_1__* object; } ;
struct TYPE_10__ {unsigned int width; unsigned int height; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_6__ objects; } ;
struct TYPE_8__ {int id; int rle_remaining_len; int rle_data_len; unsigned int w; unsigned int h; scalar_t__ rle; int rle_buffer_size; } ;
typedef TYPE_1__ PGSSubObject ;
typedef TYPE_2__ PGSSubContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__*,int *,unsigned int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 void* FUNC_3 (int const**) ;
 int FUNC_4 (int const**) ;
 int FUNC_5 (int const**) ;
 TYPE_1__* FUNC_6 (int,TYPE_6__*) ;
 int FUNC_7 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4,
                                  const uint8_t *VAR_5, int VAR_6)
{
    PGSSubContext *VAR_7 = VAR_4->priv_data;
    PGSSubObject *VAR_8;

    uint8_t VAR_9;
    unsigned int VAR_10, VAR_11, VAR_12;
    int VAR_13;

    if (VAR_6 <= 4)
        return VAR_0;
    VAR_6 -= 4;

    VAR_13 = FUNC_3(&VAR_5);
    VAR_8 = FUNC_6(VAR_13, &VAR_7->objects);
    if (!VAR_8) {
        if (VAR_7->objects.count >= VAR_3) {
            FUNC_2(VAR_4, VAR_1, "Too many objects in epoch\n");
            return VAR_0;
        }
        VAR_8 = &VAR_7->objects.object[VAR_7->objects.count++];
        VAR_8->id = VAR_13;
    }


    VAR_5 += 1;


    VAR_9 = FUNC_5(&VAR_5);

    if (!(VAR_9 & 0x80)) {

        if (VAR_6 > VAR_8->rle_remaining_len)
            return VAR_0;

        FUNC_7(VAR_8->rle + VAR_8->rle_data_len, VAR_5, VAR_6);
        VAR_8->rle_data_len += VAR_6;
        VAR_8->rle_remaining_len -= VAR_6;

        return 0;
    }

    if (VAR_6 <= 7)
        return VAR_0;
    VAR_6 -= 7;


    VAR_10 = FUNC_4(&VAR_5) - 2*2;

    if (VAR_6 > VAR_10) {
        FUNC_2(VAR_4, VAR_1,
               "Buffer dimension %d larger than the expected RLE data %d\n",
               VAR_6, VAR_10);
        return VAR_0;
    }


    VAR_11 = FUNC_3(&VAR_5);
    VAR_12 = FUNC_3(&VAR_5);


    if (VAR_4->width < VAR_11 || VAR_4->height < VAR_12 || !VAR_11 || !VAR_12) {
        FUNC_2(VAR_4, VAR_1, "Bitmap dimensions (%dx%d) invalid.\n", VAR_11, VAR_12);
        return VAR_0;
    }

    VAR_8->w = VAR_11;
    VAR_8->h = VAR_12;

    FUNC_1(&VAR_8->rle, &VAR_8->rle_buffer_size, VAR_10);

    if (!VAR_8->rle) {
        VAR_8->rle_data_len = 0;
        VAR_8->rle_remaining_len = 0;
        return FUNC_0(VAR_2);
    }

    FUNC_7(VAR_8->rle, VAR_5, VAR_6);
    VAR_8->rle_data_len = VAR_6;
    VAR_8->rle_remaining_len = VAR_10 - VAR_6;

    return 0;
}
