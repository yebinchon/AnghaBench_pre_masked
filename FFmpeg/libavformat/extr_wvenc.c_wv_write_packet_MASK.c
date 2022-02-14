
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int samples; } ;
typedef TYPE_1__ WvMuxContext ;
struct TYPE_10__ {scalar_t__ samples; } ;
typedef TYPE_2__ WvHeader ;
struct TYPE_12__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_11__ {scalar_t__ size; int data; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    WvMuxContext *VAR_5 = VAR_3->priv_data;
    WvHeader VAR_6;
    int VAR_7;

    if (VAR_4->size < VAR_2 ||
        (VAR_7 = FUNC_3(&VAR_6, VAR_4->data)) < 0) {
        FUNC_1(VAR_3, VAR_0, "Invalid WavPack packet.\n");
        return FUNC_0(VAR_1);
    }
    VAR_5->samples += VAR_6.samples;

    FUNC_2(VAR_3->pb, VAR_4->data, VAR_4->size);

    return 0;
}
