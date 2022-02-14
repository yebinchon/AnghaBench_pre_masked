
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {int block_align; int channels; int codec_id; } ;
struct TYPE_17__ {TYPE_1__** streams; TYPE_3__* pb; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int seekable; } ;
struct TYPE_15__ {int data; int size_entries_used; int packets; int pkt_sizes; scalar_t__ size_buffer_size; } ;
struct TYPE_14__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ CAFContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2)
{
    CAFContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    AVCodecParameters *VAR_5 = VAR_2->streams[0]->codecpar;

    if (VAR_4->seekable & VAR_0) {
        int64_t VAR_6 = FUNC_3(VAR_4);

        FUNC_2(VAR_4, VAR_3->data, VAR_1);
        FUNC_5(VAR_4, VAR_6 - VAR_3->data - 8);
        FUNC_2(VAR_4, VAR_6, VAR_1);
        if (!VAR_5->block_align) {
            FUNC_7(VAR_4, "pakt");
            FUNC_5(VAR_4, VAR_3->size_entries_used + 24);
            FUNC_5(VAR_4, VAR_3->packets);
            FUNC_5(VAR_4, VAR_3->packets * FUNC_8(VAR_5->codec_id, VAR_5->channels, VAR_5->block_align));
            FUNC_4(VAR_4, 0);
            FUNC_4(VAR_4, 0);
            FUNC_6(VAR_4, VAR_3->pkt_sizes, VAR_3->size_entries_used);
            VAR_3->size_buffer_size = 0;
        }
        FUNC_1(VAR_4);
    }
    FUNC_0(&VAR_3->pkt_sizes);
    return 0;
}
