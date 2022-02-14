
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {unsigned int start; } ;
struct TYPE_15__ {int container_ul; } ;
struct TYPE_14__ {int nb_streams; TYPE_2__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_13__ {unsigned int last_indexed_edit_unit; unsigned int edit_units_count; int content_package_rate; int essence_container_count; TYPE_9__ tc; } ;
struct TYPE_12__ {size_t index; } ;
struct TYPE_11__ {TYPE_3__* priv_data; TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ MXFStreamContext ;
typedef TYPE_4__ MXFContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_9__*,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int) ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int FUNC_7 (TYPE_5__*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_6)
{
    MXFContext *VAR_7 = VAR_6->priv_data;
    AVIOContext *VAR_8 = VAR_6->pb;
    unsigned VAR_9;
    uint32_t VAR_10;
    int VAR_11, VAR_12 = 0x58;

    VAR_9 = VAR_7->last_indexed_edit_unit + VAR_7->edit_units_count;


    FUNC_5(VAR_8, VAR_4, 16);
    FUNC_6(VAR_8, 57);

    for (VAR_11 = 0; VAR_11 < VAR_6->nb_streams; VAR_11++) {
        if (VAR_6->streams[VAR_11]->codecpar->codec_type == VAR_0)
            VAR_12 |= 0x4;
        else if (VAR_6->streams[VAR_11]->codecpar->codec_type == VAR_1)
            VAR_12 |= 0x2;
    }
    FUNC_1(VAR_8, VAR_12);
    FUNC_1(VAR_8, VAR_7->content_package_rate);
    FUNC_1(VAR_8, 0x00);
    FUNC_2(VAR_8, 0x00);
    FUNC_2(VAR_8, (VAR_7->tc.start + VAR_9) & 0xFFFF);
    if (VAR_7->essence_container_count > 1)
        FUNC_5(VAR_8, VAR_2, 16);
    else {
        MXFStreamContext *VAR_13 = VAR_6->streams[0]->priv_data;
        FUNC_5(VAR_8, VAR_3[VAR_13->index].container_ul, 16);
    }
    FUNC_1(VAR_8, 0);
    FUNC_4(VAR_8, 0);
    FUNC_4(VAR_8, 0);

    FUNC_1(VAR_8, 0x81);
    VAR_10 = FUNC_0(&VAR_7->tc, VAR_9);
    FUNC_3(VAR_8, VAR_10);
    FUNC_3(VAR_8, 0);
    FUNC_4(VAR_8, 0);


    FUNC_5(VAR_8, VAR_5, 16);
    FUNC_6(VAR_8, 35);
    FUNC_1(VAR_8, 0x83);
    FUNC_2(VAR_8, 0x20);
    FUNC_7(VAR_6, 1);
}
