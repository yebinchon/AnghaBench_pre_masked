
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ prev_packet; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ APNGMuxContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    APNGMuxContext *VAR_3 = VAR_1->priv_data;
    int VAR_4;

    if (!VAR_3->prev_packet) {
        VAR_3->prev_packet = FUNC_1();
        if (!VAR_3->prev_packet)
            return FUNC_0(VAR_0);

        FUNC_2(VAR_3->prev_packet, VAR_2);
    } else {
        VAR_4 = FUNC_3(VAR_1, VAR_2);
        if (VAR_4 < 0)
            return VAR_4;
    }

    return 0;
}
