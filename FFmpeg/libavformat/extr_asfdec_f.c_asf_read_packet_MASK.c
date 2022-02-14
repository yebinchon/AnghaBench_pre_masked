
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ packet_size_left; int packet_segments; scalar_t__ packet_time_start; } ;
struct TYPE_6__ {int pb; TYPE_2__* priv_data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    ASFContext *VAR_3 = VAR_1->priv_data;

    for (;;) {
        int VAR_4;


        if ((VAR_4 = FUNC_1(VAR_1, VAR_1->pb, VAR_2)) <= 0)
            return VAR_4;
        if ((VAR_4 = FUNC_0(VAR_1, VAR_1->pb)) < 0)
            FUNC_2(VAR_3->packet_size_left < VAR_0 ||
                   VAR_3->packet_segments < 1);
        VAR_3->packet_time_start = 0;
    }
}
