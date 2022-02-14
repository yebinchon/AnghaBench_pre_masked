
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int** offset; int V; } ;
struct TYPE_6__ {int crc_ctx; } ;
struct TYPE_8__ {TYPE_2__ dsp; TYPE_1__ frame; } ;
typedef TYPE_3__ SBCDecContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1)
{
    SBCDecContext *VAR_2 = VAR_1->priv_data;
    int VAR_3, VAR_4;

    VAR_2->frame.crc_ctx = FUNC_1(VAR_0);

    FUNC_2(VAR_2->dsp.V, 0, sizeof(VAR_2->dsp.V));
    for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
        for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->dsp.offset[0]); VAR_3++)
            VAR_2->dsp.offset[VAR_4][VAR_3] = (10 * VAR_3 + 10);
    return 0;
}
