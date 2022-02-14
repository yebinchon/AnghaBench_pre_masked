
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int packet_size; int vcd_padding_bytes_written; int packet_number; } ;
typedef TYPE_1__ MpegMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{






    MpegMuxContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->packet_size; VAR_2++)
        FUNC_1(VAR_0->pb, 0);

    VAR_1->vcd_padding_bytes_written += VAR_1->packet_size;

    FUNC_0(VAR_0->pb);





    VAR_1->packet_number++;
}
