
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {int data_offset; int data_size; int first_packet_offset; int packet_size; int nb_streams; TYPE_3__** asf_st; } ;
struct TYPE_13__ {int index; } ;
struct TYPE_12__ {int * streams; int pb; TYPE_4__* priv_data; } ;
struct TYPE_11__ {int flags; int dts; size_t stream_index; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFStream ;
typedef TYPE_4__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int ,int ,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int64_t FUNC_8(AVFormatContext *VAR_4, int VAR_5,
                                  int64_t *VAR_6, int64_t VAR_7)
{
    ASFContext *VAR_8 = VAR_4->priv_data;
    int64_t VAR_9 = *VAR_6, VAR_10, VAR_11 = VAR_1, VAR_12;
    AVPacket VAR_13;
    int VAR_14;

    VAR_12 = VAR_8->data_offset + VAR_8->data_size;

    VAR_14 = (VAR_9 - VAR_8->first_packet_offset + VAR_8->packet_size - 1) /
        VAR_8->packet_size;
    VAR_14 = FUNC_2(VAR_14, 0, ((VAR_12 - VAR_8->first_packet_offset) / VAR_8->packet_size - 1));
    VAR_9 = VAR_8->first_packet_offset + VAR_14 * VAR_8->packet_size;

    FUNC_5(VAR_4->pb, VAR_9, VAR_3);
    VAR_10 = VAR_9;

    FUNC_7(VAR_4);
    while (FUNC_6(VAR_4->pb) < VAR_12) {

        int VAR_15, VAR_16, VAR_17;

        FUNC_3(&VAR_13);
        VAR_10 = FUNC_6(VAR_4->pb);
        if ((VAR_16 = FUNC_0(VAR_4, &VAR_13)) < 0) {
            VAR_11 = VAR_1;
            return VAR_16;
        }


        if ((VAR_10 >= (VAR_9 + VAR_8->packet_size)))
            VAR_9 += VAR_8->packet_size;
        for (VAR_15 = 0; VAR_15 < VAR_8->nb_streams; VAR_15++) {
            ASFStream *VAR_18 = VAR_8->asf_st[VAR_15];

            VAR_17 = 0;
            if (VAR_13.flags & VAR_2) {
                VAR_11 = VAR_13.dts;
                if (VAR_11) {
                    FUNC_1(VAR_4->streams[VAR_13.stream_index], VAR_9,
                                       VAR_11, VAR_13.size, 0, VAR_0);
                    if (VAR_5 == VAR_18->index) {
                        VAR_17 = 1;
                        break;
                    }
                }
            }
        }
        if (VAR_17)
            break;
        FUNC_4(&VAR_13);
    }
    *VAR_6 = VAR_9;

    FUNC_4(&VAR_13);
    return VAR_11;
}
