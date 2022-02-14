
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_3__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int body_offset; int header_written; } ;
struct TYPE_8__ {int track_essence_element_key; } ;
typedef TYPE_1__ MXFStreamContext ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *,int ,int) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1)
{
    MXFContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    AVStream *VAR_4 = VAR_1->streams[0];
    MXFStreamContext *VAR_5 = VAR_4->priv_data;
    const uint8_t *VAR_6 = ((void*)0);

    int VAR_7;

    if (!VAR_2->header_written)
        VAR_6 = VAR_0;

    if ((VAR_7 = FUNC_3(VAR_1, 1, 0, VAR_6, 0)) < 0)
        return VAR_7;
    FUNC_2(VAR_1);
    FUNC_0(VAR_3, VAR_5->track_essence_element_key, 16);
    FUNC_1(VAR_3, VAR_2->body_offset);
    return 0;
}
