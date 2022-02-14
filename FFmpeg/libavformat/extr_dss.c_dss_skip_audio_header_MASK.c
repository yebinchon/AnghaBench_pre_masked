
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int counter; } ;
typedef TYPE_1__ DSSDemuxContext ;
typedef int AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    DSSDemuxContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;

    FUNC_0(VAR_5, VAR_0);
    VAR_4->counter += VAR_1 - VAR_0;
}
