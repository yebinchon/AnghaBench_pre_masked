
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; scalar_t__ data; } ;
struct TYPE_7__ {int music_emu; } ;
typedef TYPE_1__ GMEContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,int,short*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    GMEContext *VAR_5 = VAR_3->priv_data;
    int VAR_6 = VAR_0 / 2;
    int VAR_7;

    if (FUNC_2(VAR_5->music_emu))
        return VAR_1;

    if ((VAR_7 = FUNC_0(VAR_4, VAR_0)) < 0)
        return VAR_7;

    if (FUNC_1(VAR_5->music_emu, VAR_6, (short *)VAR_4->data))
        return VAR_2;
    VAR_4->size = VAR_0;

    return 0;
}
