
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {TYPE_1__* sys; } ;
struct TYPE_9__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int buf; TYPE_5__* dv_demux; } ;
struct TYPE_7__ {int frame_size; } ;
typedef TYPE_2__ RawDVContext ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    int VAR_3;
    RawDVContext *VAR_4 = VAR_1->priv_data;

    VAR_3 = FUNC_3(VAR_4->dv_demux, VAR_2);

    if (VAR_3 < 0) {
        int VAR_5;
        int64_t VAR_6 = FUNC_2(VAR_1->pb);
        if (!VAR_4->dv_demux->sys)
            return FUNC_0(VAR_0);
        VAR_3 = VAR_4->dv_demux->sys->frame_size;
        VAR_5 = FUNC_1(VAR_1->pb, VAR_4->buf, VAR_3);
        if (VAR_5 < 0) {
            return VAR_5;
        } else if (VAR_5 == 0) {
            return FUNC_0(VAR_0);
        }

        VAR_3 = FUNC_4(VAR_4->dv_demux, VAR_2, VAR_4->buf, VAR_3, VAR_6);
    }

    return VAR_3;
}
