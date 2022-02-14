
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int pb; } ;
struct TYPE_6__ {int pos; int pts; scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2, VAR_3 = FUNC_1(VAR_0->pb);
    int64_t VAR_4 = FUNC_2(VAR_0->pb);

    VAR_2 = FUNC_0(VAR_0->pb, VAR_1, VAR_3);
    VAR_1->stream_index = 0;
    VAR_1->pts = VAR_4;
    VAR_1->pos -= 12;

    return VAR_2;
}
