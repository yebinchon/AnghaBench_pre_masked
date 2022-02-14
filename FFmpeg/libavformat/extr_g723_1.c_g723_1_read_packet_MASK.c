
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pb; } ;
struct TYPE_7__ {int* data; int duration; int size; scalar_t__ stream_index; int pos; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    VAR_3->pos = FUNC_4(VAR_2->pb);
    VAR_5 = FUNC_2(VAR_2->pb);
    VAR_4 = VAR_1[VAR_5 & 3];

    VAR_6 = FUNC_0(VAR_3, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_3->data[0] = VAR_5;
    VAR_3->duration = 240;
    VAR_3->stream_index = 0;

    VAR_6 = FUNC_3(VAR_2->pb, VAR_3->data + 1, VAR_4 - 1);
    if (VAR_6 < VAR_4 - 1) {
        FUNC_1(VAR_3);
        return VAR_6 < 0 ? VAR_6 : VAR_0;
    }

    return VAR_3->size;
}
