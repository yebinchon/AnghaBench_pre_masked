
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct SAPState {int last_time; int ann_size; int ann; int ann_fd; } ;
typedef int int64_t ;
struct TYPE_11__ {TYPE_1__** streams; struct SAPState* priv_data; } ;
struct TYPE_10__ {size_t stream_index; } ;
struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    AVFormatContext *VAR_3;
    struct SAPState *VAR_4 = VAR_1->priv_data;
    int64_t VAR_5 = FUNC_1();

    if (!VAR_4->last_time || VAR_5 - VAR_4->last_time > 5000000) {
        int VAR_6 = FUNC_3(VAR_4->ann_fd, VAR_4->ann, VAR_4->ann_size);

        if (VAR_6 < 0 && VAR_6 != FUNC_0(VAR_0))
            return VAR_6;
        VAR_4->last_time = VAR_5;
    }
    VAR_3 = VAR_1->streams[VAR_2->stream_index]->priv_data;
    return FUNC_2(VAR_3, 0, VAR_2, VAR_1, 0);
}
