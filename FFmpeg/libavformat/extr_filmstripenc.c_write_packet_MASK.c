
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int data; } ;
struct TYPE_6__ {int nb_frames; } ;
typedef TYPE_1__ FilmstripMuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    FilmstripMuxContext *VAR_2 = VAR_0->priv_data;
    FUNC_0(VAR_0->pb, VAR_1->data, VAR_1->size);
    VAR_2->nb_frames++;
    return 0;
}
