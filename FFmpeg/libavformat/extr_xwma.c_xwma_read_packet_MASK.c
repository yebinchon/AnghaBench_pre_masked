
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {scalar_t__ data_end; } ;
typedef TYPE_2__ XWMAContext ;
struct TYPE_13__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {scalar_t__ stream_index; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int block_align; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    int VAR_3, VAR_4;
    int64_t VAR_5;
    AVStream *VAR_6;
    XWMAContext *VAR_7 = VAR_1->priv_data;

    VAR_6 = VAR_1->streams[0];

    VAR_5 = VAR_7->data_end - FUNC_2(VAR_1->pb);
    if (VAR_5 <= 0) {
        return VAR_0;
    }


    VAR_4 = (VAR_6->codecpar->block_align > 1) ? VAR_6->codecpar->block_align : 2230;
    VAR_4 = FUNC_0(VAR_4, VAR_5);

    VAR_3 = FUNC_1(VAR_1->pb, VAR_2, VAR_4);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_2->stream_index = 0;
    return VAR_3;
}
