
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* frame; } ;
struct TYPE_4__ {int* linesize; } ;
typedef TYPE_2__ SeqVideoContext ;



__attribute__((used)) static const unsigned char *FUNC_0(SeqVideoContext *VAR_0,
                                           const unsigned char *VAR_1,
                                           const unsigned char *VAR_2,
                                           unsigned char *VAR_3)
{
    int VAR_4, VAR_5;

    do {
        if (VAR_2 - VAR_1 < 2)
            return ((void*)0);
        VAR_4 = *VAR_1++;
        VAR_5 = ((VAR_4 >> 3) & 7) * VAR_0->frame->linesize[0] + (VAR_4 & 7);
        VAR_3[VAR_5] = *VAR_1++;
    } while (!(VAR_4 & 0x80));

    return VAR_1;
}
