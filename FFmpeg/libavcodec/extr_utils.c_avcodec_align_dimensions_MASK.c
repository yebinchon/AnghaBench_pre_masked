
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pix_fmt; } ;
struct TYPE_6__ {int log2_chroma_w; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int*,int*,int*) ;

void FUNC_5(AVCodecContext *VAR_1, int *VAR_2, int *VAR_3)
{
    const AVPixFmtDescriptor *VAR_4 = FUNC_3(VAR_1->pix_fmt);
    int VAR_5 = VAR_4->log2_chroma_w;
    int VAR_6[VAR_0];
    int VAR_7;

    FUNC_4(VAR_1, VAR_2, VAR_3, VAR_6);
    VAR_7 = FUNC_1(VAR_6[0], VAR_6[3]);
    VAR_6[1] <<= VAR_5;
    VAR_6[2] <<= VAR_5;
    VAR_7 = FUNC_2(VAR_7, VAR_6[1], VAR_6[2]);
    *VAR_2 = FUNC_0(*VAR_2, VAR_7);
}
