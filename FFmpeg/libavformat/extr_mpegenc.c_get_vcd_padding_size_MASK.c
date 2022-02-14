
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ vcd_padding_bitrate_num; scalar_t__ vcd_padding_bytes_written; } ;
typedef TYPE_1__ MpegMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,long long) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, int64_t VAR_3)
{
    MpegMuxContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 0;

    if (VAR_4->vcd_padding_bitrate_num > 0 && VAR_3 != VAR_0) {
        int64_t VAR_6;


        VAR_6 =
            FUNC_0(VAR_4->vcd_padding_bitrate_num, VAR_3, 90000LL * 8 * VAR_1);
        VAR_5 = (int)(VAR_6 - VAR_4->vcd_padding_bytes_written);

        if (VAR_5 < 0)


            VAR_5 = 0;
    }

    return VAR_5;
}
