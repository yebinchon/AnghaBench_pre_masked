
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int delay_buf3; int delay_buf2; int delay_buf1; } ;
struct TYPE_7__ {int temp_buf; TYPE_4__* units; int gb; int coding_mode; } ;
struct TYPE_6__ {int channels; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ ATRAC3Context ;


 int FUNC_0 (TYPE_2__*,int *,TYPE_4__*,float*,int,int ) ;
 int FUNC_1 (float*,float*,int,float*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_0, const uint8_t *VAR_1,
                           int VAR_2, float **VAR_3)
{
    ATRAC3Context *VAR_4 = VAR_0->priv_data;
    int VAR_5, VAR_6;


    FUNC_3(&VAR_4->gb, VAR_1, VAR_2 * 8);


    for (VAR_6 = 0; VAR_6 < VAR_0->channels; VAR_6++) {
        VAR_5 = FUNC_0(VAR_4, &VAR_4->gb, &VAR_4->units[VAR_6],
                                        VAR_3[VAR_6], VAR_6, VAR_4->coding_mode);
        if (VAR_5 != 0)
            return VAR_5;
        while (VAR_6 < VAR_0->channels && FUNC_2(&VAR_4->gb) > 6 && FUNC_4(&VAR_4->gb, 6) != 0x28) {
            FUNC_5(&VAR_4->gb, 1);
        }
    }


    for (VAR_6 = 0; VAR_6 < VAR_0->channels; VAR_6++) {
        float *VAR_7 = VAR_3[VAR_6];
        float *VAR_8 = VAR_7 + 256;
        float *VAR_9 = VAR_8 + 256;
        float *VAR_10 = VAR_9 + 256;
        FUNC_1(VAR_7, VAR_8, 256, VAR_7, VAR_4->units[VAR_6].delay_buf1, VAR_4->temp_buf);
        FUNC_1(VAR_10, VAR_9, 256, VAR_9, VAR_4->units[VAR_6].delay_buf2, VAR_4->temp_buf);
        FUNC_1(VAR_7, VAR_9, 512, VAR_7, VAR_4->units[VAR_6].delay_buf3, VAR_4->temp_buf);
    }

    return 0;
}
