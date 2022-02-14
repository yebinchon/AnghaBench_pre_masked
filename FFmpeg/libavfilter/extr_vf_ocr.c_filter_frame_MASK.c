
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int number ;
struct TYPE_12__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_11__ {TYPE_4__* dst; } ;
struct TYPE_10__ {int height; int width; int * linesize; int * data; int * metadata; } ;
struct TYPE_9__ {int tess; } ;
typedef TYPE_1__ OCRContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int* FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,char*,char*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVDictionary **VAR_3 = &VAR_2->metadata;
    AVFilterContext *VAR_4 = VAR_1->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    OCRContext *VAR_6 = VAR_4->priv;
    char *VAR_7;
    int *VAR_8;

    VAR_7 = FUNC_1(VAR_6->tess, VAR_2->data[0], 1,
                             VAR_2->linesize[0], 0, 0, VAR_2->width, VAR_2->height);
    VAR_8 = FUNC_0(VAR_6->tess);
    FUNC_4(VAR_3, "lavfi.ocr.text", VAR_7, 0);
    for (int VAR_9 = 0; VAR_8[VAR_9] != -1; VAR_9++) {
        char VAR_10[256];

        FUNC_6(VAR_10, sizeof(VAR_10), "%d ", VAR_8[VAR_9]);
        FUNC_4(VAR_3, "lavfi.ocr.confidence", VAR_10, VAR_0);
    }

    FUNC_3(VAR_7);
    FUNC_2(VAR_8);

    return FUNC_5(VAR_5, VAR_2);
}
