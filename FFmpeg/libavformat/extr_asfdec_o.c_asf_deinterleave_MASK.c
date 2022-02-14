
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_14__ {TYPE_3__** asf_st; } ;
struct TYPE_10__ {unsigned char* data; } ;
struct TYPE_13__ {int data_size; TYPE_1__ avpkt; } ;
struct TYPE_12__ {int virtual_pkt_len; int virtual_chunk_len; int span; } ;
struct TYPE_11__ {TYPE_5__* priv_data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFStream ;
typedef TYPE_4__ ASFPacket ;
typedef TYPE_5__ ASFContext ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, ASFPacket *VAR_1, int VAR_2)
{
    ASFContext *VAR_3 = VAR_0->priv_data;
    ASFStream *VAR_4 = VAR_3->asf_st[VAR_2];
    unsigned char *VAR_5 = VAR_1->avpkt.data;
    uint16_t VAR_6 = VAR_3->asf_st[VAR_2]->virtual_pkt_len;
    uint16_t VAR_7 = VAR_3->asf_st[VAR_2]->virtual_chunk_len;
    int VAR_8 = VAR_6 / VAR_7;
    AVPacket VAR_9;
    int VAR_10 = 0, VAR_11, VAR_12, VAR_13;


    if ((VAR_13 = FUNC_0(&VAR_9, VAR_1->data_size)) < 0)
        return VAR_13;

    while (VAR_1->data_size >= VAR_4->span * VAR_6 + VAR_10) {
        if (VAR_10 >= VAR_1->data_size) {
            break;
        }
        for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
            if (VAR_10 >= VAR_1->data_size) {
                break;
            }
            for (VAR_11 = 0; VAR_11 < VAR_4->span; VAR_11++) {
                if ((VAR_10 + VAR_7) >= VAR_1->data_size)
                    break;
                FUNC_2(VAR_9.data + VAR_10,
                       VAR_5 + (VAR_11 * VAR_8 + VAR_12) * VAR_7,
                       VAR_7);
                VAR_10 += VAR_7;
            }
        }
        VAR_5 += VAR_4->span * VAR_6;
        if (VAR_5 > VAR_1->avpkt.data + VAR_1->data_size)
            break;
    }
    FUNC_1(&VAR_1->avpkt);
    VAR_1->avpkt = VAR_9;

    return 0;
}
