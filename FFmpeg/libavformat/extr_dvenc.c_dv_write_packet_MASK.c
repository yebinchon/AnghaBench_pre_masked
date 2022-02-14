
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct AVFormatContext {int pb; int * streams; int priv_data; } ;
struct TYPE_3__ {size_t stream_index; int size; int data; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct AVFormatContext*,int ,int ,int ,int ,int **) ;

__attribute__((used)) static int FUNC_2(struct AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    uint8_t* VAR_2;
    int VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_0->priv_data, VAR_0->streams[VAR_1->stream_index],
                              VAR_1->data, VAR_1->size, &VAR_2);
    if (VAR_3 > 0) {
        FUNC_0(VAR_0->pb, VAR_2, VAR_3);
    }
    return 0;
}
