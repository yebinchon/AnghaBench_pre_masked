
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {scalar_t__ dts; scalar_t__ size; struct TYPE_9__* next; } ;
struct TYPE_8__ {scalar_t__ buffer_index; TYPE_2__* predecode_packet; TYPE_2__* premux_packet; } ;
typedef TYPE_1__ StreamInfo ;
typedef TYPE_2__ PacketDesc ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int64_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
        AVStream *VAR_4 = VAR_1->streams[VAR_3];
        StreamInfo *VAR_5 = VAR_4->priv_data;
        PacketDesc *VAR_6;

        while ((VAR_6 = VAR_5->predecode_packet) &&
               VAR_2 > VAR_6->dts) {
            if (VAR_5->buffer_index < VAR_6->size ||
                VAR_5->predecode_packet == VAR_5->premux_packet) {
                FUNC_1(VAR_1, VAR_0,
                       "buffer underflow st=%d bufi=%d size=%d\n",
                       VAR_3, VAR_5->buffer_index, VAR_6->size);
                break;
            }
            VAR_5->buffer_index -= VAR_6->size;
            VAR_5->predecode_packet = VAR_6->next;
            FUNC_0(&VAR_6);
        }
    }

    return 0;
}
