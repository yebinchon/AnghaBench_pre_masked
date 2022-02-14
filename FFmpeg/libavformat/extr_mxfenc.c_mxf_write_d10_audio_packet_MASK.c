
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int size; int * data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int edit_units_count; } ;
struct TYPE_9__ {int block_align; int channels; scalar_t__ codec_id; } ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_1, AVStream *VAR_2, AVPacket *VAR_3)
{
    MXFContext *VAR_4 = VAR_1->priv_data;
    AVIOContext *VAR_5 = VAR_1->pb;
    int VAR_6 = VAR_3->size / VAR_2->codecpar->block_align;
    uint8_t *VAR_7 = VAR_3->data;
    uint8_t *VAR_8 = VAR_3->data + VAR_3->size;
    int VAR_9;

    FUNC_5(VAR_5, 4 + VAR_6*4*8);

    FUNC_2(VAR_5, (VAR_6 == 1920 ? 0 : (VAR_4->edit_units_count-1) % 5 + 1));
    FUNC_3(VAR_5, VAR_6);
    FUNC_2(VAR_5, (1<<VAR_2->codecpar->channels)-1);

    while (VAR_7 < VAR_8) {
        for (VAR_9 = 0; VAR_9 < VAR_2->codecpar->channels; VAR_9++) {
            uint32_t VAR_10;
            if (VAR_2->codecpar->codec_id == VAR_0) {
                VAR_10 = FUNC_1(VAR_7)<< 4;
                VAR_7 += 3;
            } else {
                VAR_10 = FUNC_0(VAR_7)<<12;
                VAR_7 += 2;
            }
            FUNC_4(VAR_5, VAR_10 | VAR_9);
        }
        for (; VAR_9 < 8; VAR_9++)
            FUNC_4(VAR_5, VAR_9);
    }
}
