
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct AVFormatContext {int pb; TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ size; int data; } ;
struct TYPE_5__ {int streaminfo; } ;
typedef TYPE_1__ FlacMuxerContext ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (TYPE_2__*,int ,int*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    FlacMuxerContext *VAR_5 = VAR_3->priv_data;
    uint8_t *VAR_6;
    int VAR_7;


    VAR_6 = FUNC_3(VAR_4, VAR_0,
                                         &VAR_7);
    if (VAR_6 && VAR_7 == VAR_2) {
        FUNC_1(&VAR_5->streaminfo);

        VAR_5->streaminfo = FUNC_2(VAR_2);
        if (!VAR_5->streaminfo)
            return FUNC_0(VAR_1);
        FUNC_5(VAR_5->streaminfo, VAR_6, VAR_2);
    }

    if (VAR_4->size)
        FUNC_4(VAR_3->pb, VAR_4->data, VAR_4->size);
    return 0;
}
