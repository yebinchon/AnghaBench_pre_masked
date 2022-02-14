
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int size; scalar_t__ data; } ;
struct TYPE_8__ {int frames; } ;
struct TYPE_10__ {TYPE_2__* frame; int * rc; TYPE_1__ packet; } ;
struct TYPE_9__ {int framebits; } ;
typedef TYPE_3__ OpusEncContext ;
typedef TYPE_4__ AVPacket ;


 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int*,int*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(OpusEncContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2, VAR_3;


    FUNC_1(VAR_0, VAR_1->data, &VAR_2, &VAR_3);


    if (VAR_3) {
        for (int VAR_4 = 0; VAR_4 < VAR_0->packet.frames - 1; VAR_4++) {
            VAR_2 += FUNC_2(VAR_1->data + VAR_2,
                                       VAR_0->frame[VAR_4].framebits >> 3);
        }
    }


    for (int VAR_5 = 0; VAR_5 < VAR_0->packet.frames; VAR_5++) {
        FUNC_0(&VAR_0->rc[VAR_5], VAR_1->data + VAR_2,
                           VAR_0->frame[VAR_5].framebits >> 3);
        VAR_2 += VAR_0->frame[VAR_5].framebits >> 3;
    }

    VAR_1->size = VAR_2;
}
