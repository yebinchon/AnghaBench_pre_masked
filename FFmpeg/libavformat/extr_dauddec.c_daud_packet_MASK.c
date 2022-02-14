
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pb; } ;
struct TYPE_6__ {scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2) {
    AVIOContext *VAR_3 = VAR_1->pb;
    int VAR_4, VAR_5;
    if (FUNC_2(VAR_3))
        return FUNC_0(VAR_0);
    VAR_5 = FUNC_3(VAR_3);
    FUNC_3(VAR_3);
    VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_5);
    VAR_2->stream_index = 0;
    return VAR_4;
}
