
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int * pb; } ;
struct TYPE_7__ {int stream_index; int pts; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVPacket *VAR_2) {
    AVIOContext *VAR_3 = VAR_1->pb;
    int64_t VAR_4;
    int VAR_5, VAR_6, VAR_7;

    if (FUNC_2(VAR_1, &VAR_4, &VAR_6, &VAR_7, 1) < 0 ||
       (VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_6)) <= 0)
        return FUNC_0(VAR_0);

    VAR_2->stream_index = VAR_7 - 1;
    VAR_2->pts = VAR_4;

    return VAR_5;
}
