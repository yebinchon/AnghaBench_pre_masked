
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int height; int * linesize; int ** data; int width; int format; } ;
struct TYPE_5__ {unsigned int name; int nb_components; int log2_chroma_h; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;
typedef int AVBPrint ;


 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (unsigned int,int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(AVBPrint *VAR_0, AVFrame *VAR_1)
{
    const AVPixFmtDescriptor *VAR_2 = FUNC_4(VAR_1->format);
    int VAR_3, VAR_4;
    uint8_t *VAR_5;
    int VAR_6[5] = { 0 };

    FUNC_2(VAR_0, ", %d x %d", VAR_1->width, VAR_1->height);
    if (!VAR_2) {
        FUNC_2(VAR_0, ", unknown");
        return;
    }
    if (FUNC_3(VAR_6, VAR_1->format, VAR_1->width) < 0)
        return;
    FUNC_2(VAR_0, ", %s", VAR_2->name);
    for (VAR_3 = 0; VAR_6[VAR_3]; VAR_3++) {
        unsigned VAR_7 = 0;
        int VAR_8 = VAR_1->height;
        if ((VAR_3 == 1 || VAR_3 == 2) && VAR_2->nb_components >= 3)
            VAR_8 = FUNC_0(VAR_8, VAR_2->log2_chroma_h);
        VAR_5 = VAR_1->data[VAR_3];
        for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
            VAR_7 = FUNC_1(VAR_7, VAR_5, VAR_6[VAR_3]);
            VAR_5 += VAR_1->linesize[VAR_3];
        }
        FUNC_2(VAR_0, ", 0x%08x", VAR_7);
    }
}
