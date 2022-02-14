
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_5__ {int frame_size; double bytes_per_sec; } ;
struct TYPE_6__ {int audio_buf_index; int audio_buf_size; scalar_t__ show_mode; scalar_t__ audio_volume; int audio_write_buf_size; int audio_hw_buf_size; int audclk; int extclk; int audio_clock_serial; TYPE_1__ audio_tgt; scalar_t__ audio_clock; int * audio_buf; int muted; } ;
typedef TYPE_2__ VideoState ;
typedef int Uint8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int ,int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 double FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,scalar_t__,int ,double) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void FUNC_9(void *VAR_5, Uint8 *VAR_6, int VAR_7)
{
    VideoState *VAR_8 = VAR_5;
    int VAR_9, VAR_10;

    VAR_4 = FUNC_2();

    while (VAR_7 > 0) {
        if (VAR_8->audio_buf_index >= VAR_8->audio_buf_size) {
           VAR_9 = FUNC_1(VAR_8);
           if (VAR_9 < 0) {

               VAR_8->audio_buf = ((void*)0);
               VAR_8->audio_buf_size = VAR_1 / VAR_8->audio_tgt.frame_size * VAR_8->audio_tgt.frame_size;
           } else {
               if (VAR_8->show_mode != VAR_3)
                   FUNC_8(VAR_8, (int16_t *)VAR_8->audio_buf, VAR_9);
               VAR_8->audio_buf_size = VAR_9;
           }
           VAR_8->audio_buf_index = 0;
        }
        VAR_10 = VAR_8->audio_buf_size - VAR_8->audio_buf_index;
        if (VAR_10 > VAR_7)
            VAR_10 = VAR_7;
        if (!VAR_8->muted && VAR_8->audio_buf && VAR_8->audio_volume == VAR_2)
            FUNC_4(VAR_6, (uint8_t *)VAR_8->audio_buf + VAR_8->audio_buf_index, VAR_10);
        else {
            FUNC_5(VAR_6, 0, VAR_10);
            if (!VAR_8->muted && VAR_8->audio_buf)
                FUNC_0(VAR_6, (uint8_t *)VAR_8->audio_buf + VAR_8->audio_buf_index, VAR_0, VAR_10, VAR_8->audio_volume);
        }
        VAR_7 -= VAR_10;
        VAR_6 += VAR_10;
        VAR_8->audio_buf_index += VAR_10;
    }
    VAR_8->audio_write_buf_size = VAR_8->audio_buf_size - VAR_8->audio_buf_index;

    if (!FUNC_3(VAR_8->audio_clock)) {
        FUNC_6(&VAR_8->audclk, VAR_8->audio_clock - (double)(2 * VAR_8->audio_hw_buf_size + VAR_8->audio_write_buf_size) / VAR_8->audio_tgt.bytes_per_sec, VAR_8->audio_clock_serial, VAR_4 / 1000000.0);
        FUNC_7(&VAR_8->extclk, &VAR_8->audclk);
    }
}
