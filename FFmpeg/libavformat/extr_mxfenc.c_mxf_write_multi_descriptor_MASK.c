
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_23__ {long long nb_streams; TYPE_2__** streams; TYPE_5__* pb; TYPE_4__* priv_data; } ;
struct TYPE_22__ {scalar_t__ buf_ptr; } ;
struct TYPE_18__ {int num; int den; } ;
struct TYPE_21__ {int essence_container_count; TYPE_1__ time_base; } ;
struct TYPE_20__ {size_t index; } ;
struct TYPE_19__ {TYPE_3__* priv_data; } ;
struct TYPE_17__ {int * container_ul; } ;
typedef TYPE_3__ MXFStreamContext ;
typedef TYPE_4__ MXFContext ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int const*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int * VAR_2 ;
 TYPE_12__* VAR_3 ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_4)
{
    MXFContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    const uint8_t *VAR_7;
    int VAR_8;

    FUNC_5(VAR_6, 0x014400);
    FUNC_0(VAR_4, "multiple descriptor key", VAR_6->buf_ptr - 16);
    FUNC_3(VAR_6, 64 + 16LL * VAR_4->nb_streams);

    FUNC_4(VAR_6, 16, 0x3C0A);
    FUNC_7(VAR_6, VAR_0, 0);
    FUNC_0(VAR_4, "multi_desc uid", VAR_6->buf_ptr - 16);


    FUNC_4(VAR_6, 8, 0x3001);
    FUNC_1(VAR_6, VAR_5->time_base.den);
    FUNC_1(VAR_6, VAR_5->time_base.num);


    FUNC_4(VAR_6, 16, 0x3004);
    if (VAR_5->essence_container_count > 1)
        VAR_7 = VAR_2;
    else {
        MXFStreamContext *VAR_9 = VAR_4->streams[0]->priv_data;
        VAR_7 = VAR_3[VAR_9->index].container_ul;
    }
    FUNC_2(VAR_6, VAR_7, 16);


    FUNC_4(VAR_6, VAR_4->nb_streams * 16 + 8, 0x3F01);
    FUNC_6(VAR_6, VAR_4->nb_streams);
    for (VAR_8 = 0; VAR_8 < VAR_4->nb_streams; VAR_8++)
        FUNC_7(VAR_6, VAR_1, VAR_8);
}
