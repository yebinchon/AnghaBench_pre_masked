
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* int64_t ;
typedef int data ;
struct TYPE_5__ {int size; int stream_index; scalar_t__ duration; void* dts; void* pts; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0,
                                         int VAR_1,
                                         int64_t VAR_2) {
    AVPacket VAR_3;
    uint8_t VAR_4[2] = {0};
    int VAR_5;

    FUNC_0(&VAR_3);
    VAR_3.size = sizeof(VAR_4);
    VAR_3.data = VAR_4;
    VAR_3.pts = VAR_2;
    VAR_3.dts = VAR_2;
    VAR_3.duration = 0;
    VAR_3.stream_index = VAR_1;

    VAR_5 = FUNC_2(VAR_0, &VAR_3);
    FUNC_1(&VAR_3);

    return VAR_5;
}
