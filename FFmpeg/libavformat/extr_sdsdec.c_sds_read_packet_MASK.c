
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_9__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int pos; scalar_t__ stream_index; int flags; scalar_t__ data; } ;
struct TYPE_7__ {int data; int (* read_block ) (int ,int *) ;int size; } ;
typedef TYPE_1__ SDSContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    SDSContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    int64_t VAR_7;
    int VAR_8;

    if (FUNC_1(VAR_6))
        return VAR_0;

    VAR_7 = FUNC_6(VAR_6);
    if (FUNC_3(VAR_6) != 0xF07E)
        return VAR_1;
    FUNC_5(VAR_6, 3);

    VAR_8 = FUNC_0(VAR_4, VAR_5->size);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_8 = FUNC_4(VAR_6, VAR_5->data, 120);

    VAR_5->read_block(VAR_5->data, (uint32_t *)VAR_4->data);

    FUNC_5(VAR_6, 1);
    if (FUNC_2(VAR_6) != 0xF7)
        return VAR_1;

    VAR_4->flags &= ~VAR_2;
    VAR_4->stream_index = 0;
    VAR_4->pos = VAR_7;

    return VAR_8;
}
