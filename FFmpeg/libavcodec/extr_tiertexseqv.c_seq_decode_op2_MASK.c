
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* frame; } ;
struct TYPE_4__ {int * linesize; } ;
typedef TYPE_2__ SeqVideoContext ;


 int FUNC_0 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static const unsigned char *FUNC_1(SeqVideoContext *VAR_0,
                                           const unsigned char *VAR_1,
                                           const unsigned char *VAR_2,
                                           unsigned char *VAR_3)
{
    int VAR_4;

    if (VAR_2 - VAR_1 < 8 * 8)
        return ((void*)0);

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        FUNC_0(VAR_3, VAR_1, 8);
        VAR_1 += 8;
        VAR_3 += VAR_0->frame->linesize[0];
    }

    return VAR_1;
}
