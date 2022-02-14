
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ stream_index; } ;
struct TYPE_7__ {scalar_t__ data_end; } ;
typedef TYPE_1__ DTSHDDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    DTSHDDemuxContext *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4, VAR_5;
    int VAR_6;

    VAR_5 = VAR_3->data_end - FUNC_2(VAR_1->pb);
    VAR_4 = FUNC_0(VAR_5, 1024);
    if (VAR_4 <= 0)
        return VAR_0;

    VAR_6 = FUNC_1(VAR_1->pb, VAR_2, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_2->stream_index = 0;

    return VAR_6;
}
