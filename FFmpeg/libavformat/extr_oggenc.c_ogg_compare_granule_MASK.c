
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {TYPE_2__** streams; } ;
struct TYPE_8__ {int time_base; int priv_data; } ;
struct TYPE_7__ {size_t stream_index; int granule; } ;
typedef TYPE_1__ OGGPage ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, OGGPage *VAR_2, OGGPage *VAR_3)
{
    AVStream *VAR_4 = VAR_1->streams[VAR_2->stream_index];
    AVStream *VAR_5 = VAR_1->streams[VAR_3->stream_index];
    int64_t VAR_6, VAR_7;

    if (VAR_2->granule == -1 || VAR_3->granule == -1)
        return 0;

    VAR_6 = FUNC_0(FUNC_1(VAR_4->priv_data, VAR_2->granule),
                                VAR_4->time_base, VAR_0);
    VAR_7 = FUNC_0(FUNC_1(VAR_5->priv_data, VAR_3->granule),
                                VAR_5 ->time_base, VAR_0);
    return VAR_6 > VAR_7;
}
