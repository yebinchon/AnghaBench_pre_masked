
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ int16_t ;
struct TYPE_7__ {int width; } ;
struct TYPE_6__ {TYPE_4__* cur_decode_frame; TYPE_4__* prev_decode_frame; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_1__*,TYPE_4__*,TYPE_4__*,int,int) ;

__attribute__((used)) static void FUNC_1(IpvideoContext *VAR_0, AVFrame *VAR_1, int16_t VAR_2)
{
    int VAR_3, VAR_4;

    if (VAR_2 < 0) {
        VAR_3 = ((uint16_t)VAR_2 - 0xC000) % VAR_0->cur_decode_frame->width;
        VAR_4 = ((uint16_t)VAR_2 - 0xC000) / VAR_0->cur_decode_frame->width;
        FUNC_0(VAR_0, VAR_0->prev_decode_frame, VAR_0->cur_decode_frame, VAR_3, VAR_4);
    } else if (VAR_2 > 0) {
        VAR_3 = ((uint16_t)VAR_2 - 0x4000) % VAR_0->cur_decode_frame->width;
        VAR_4 = ((uint16_t)VAR_2 - 0x4000) / VAR_0->cur_decode_frame->width;
        FUNC_0(VAR_0, VAR_0->cur_decode_frame, VAR_0->cur_decode_frame, VAR_3, VAR_4);
    }
}
