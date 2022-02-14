
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* sys; } ;
struct TYPE_10__ {TYPE_3__* dv_demux; } ;
struct TYPE_9__ {int frame_size; } ;
typedef TYPE_2__ RawDVContext ;
typedef TYPE_3__ DVDemuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, int VAR_2,
                        int64_t VAR_3, int VAR_4)
{
    RawDVContext *VAR_5 = VAR_1->priv_data;
    DVDemuxContext *VAR_6 = VAR_5->dv_demux;
    int64_t VAR_7 = FUNC_1(VAR_1, VAR_6, VAR_3, VAR_4);

    if (FUNC_0(VAR_1->pb, VAR_7, VAR_0) < 0)
        return -1;

    FUNC_2(VAR_6, VAR_7 / VAR_6->sys->frame_size);
    return 0;
}
