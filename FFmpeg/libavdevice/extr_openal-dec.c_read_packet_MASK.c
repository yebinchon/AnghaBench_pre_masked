
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sample_step; int device; } ;
typedef TYPE_1__ al_data ;
struct TYPE_11__ {int flags; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int size; scalar_t__ data; int pts; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef int ALCsizei ;
typedef int ALCint ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char const**) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int ,char*,char const*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext* VAR_4, AVPacket *VAR_5)
{
    al_data *VAR_6 = VAR_4->priv_data;
    int VAR_7=0;
    const char *VAR_8;
    ALCint VAR_9;

    for (;;) {

        FUNC_3(VAR_6->device, VAR_0, (ALCsizei) sizeof(ALCint), &VAR_9);
        if ((VAR_7 = FUNC_1(VAR_6->device, &VAR_8))) goto fail;
        if (VAR_9 > 0)
            break;
        if (VAR_4->flags & VAR_1)
            return FUNC_0(VAR_3);
        FUNC_8(1000);
    }


    if ((VAR_7 = FUNC_6(VAR_5, VAR_9*VAR_6->sample_step)) < 0)
        goto fail;
    VAR_5->pts = FUNC_4();


    FUNC_2(VAR_6->device, VAR_5->data, VAR_9);
    if ((VAR_7 = FUNC_1(VAR_6->device, &VAR_8))) goto fail;

    return VAR_5->size;
fail:

    if (VAR_5->data)
        FUNC_7(VAR_5);
    if (VAR_8)
        FUNC_5(VAR_4, VAR_2, "Error: %s\n", VAR_8);
    return VAR_7;
}
