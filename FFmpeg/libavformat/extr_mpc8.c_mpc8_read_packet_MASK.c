
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int duration; scalar_t__ stream_index; } ;
struct TYPE_8__ {scalar_t__ apetag_start; } ;
typedef TYPE_1__ MPCContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,scalar_t__*) ;
 int FUNC_5 (TYPE_3__*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    MPCContext *VAR_6 = VAR_4->priv_data;
    int VAR_7;
    int64_t VAR_8, VAR_9;

    while(!FUNC_2(VAR_4->pb)){
        VAR_8 = FUNC_3(VAR_4->pb);


        if (VAR_6->apetag_start && VAR_8 >= VAR_6->apetag_start)
            return VAR_0;

        FUNC_4(VAR_4->pb, &VAR_7, &VAR_9);
        if (VAR_9 < 0)
            return -1;
        if(VAR_7 == VAR_2){
            if(FUNC_1(VAR_4->pb, VAR_5, VAR_9) < 0)
                return FUNC_0(VAR_1);
            VAR_5->stream_index = 0;
            VAR_5->duration = 1;
            return 0;
        }
        if(VAR_7 == VAR_3)
            return VAR_0;
        FUNC_5(VAR_4, VAR_7, VAR_8, VAR_9);
    }
    return VAR_0;
}
