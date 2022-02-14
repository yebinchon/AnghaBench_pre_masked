
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pb; } ;
struct TYPE_8__ {scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    int VAR_3, VAR_4 = 1024;

    if (FUNC_3(VAR_1->pb))
        return VAR_0;

    VAR_3 = FUNC_0(VAR_1->pb, VAR_2, VAR_4);

    if (VAR_3 != VAR_4) {
        if (VAR_3 < 0) {
            FUNC_1(VAR_2);
            return VAR_3;
        }
        FUNC_2(VAR_2, VAR_3);
    }
    VAR_2->stream_index = 0;

    return VAR_3;
}
