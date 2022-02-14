
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pb; } ;
struct TYPE_7__ {int pos; int duration; int pts; scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    int VAR_4, VAR_5;

    VAR_5 = VAR_1;

    VAR_3->pos = FUNC_3(VAR_2->pb);
    VAR_3->stream_index = 0;

    VAR_4 = FUNC_1(VAR_2->pb, VAR_3, VAR_5);
    if (VAR_4 < VAR_1) {
        FUNC_2(VAR_3);
        return VAR_4 < 0 ? VAR_4 : FUNC_0(VAR_0);
    }
    VAR_3->duration = 1;
    VAR_3->pts = VAR_3->pos / VAR_1;

    return 0;
}
