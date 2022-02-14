
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_11__ {int utt_started; int ps; } ;
struct TYPE_10__ {int * outputs; TYPE_4__* priv; } ;
struct TYPE_9__ {TYPE_3__* dst; } ;
struct TYPE_8__ {int nb_samples; scalar_t__* data; int * metadata; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVDictionary ;
typedef TYPE_4__ ASRContext ;


 int FUNC_0 (int **,char*,char const*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int const*,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    AVDictionary **VAR_3 = &VAR_1->metadata;
    ASRContext *VAR_4 = VAR_2->priv;
    int VAR_5;
    const char *VAR_6;

    FUNC_5(VAR_4->ps, (const int16_t *)VAR_1->data[0], VAR_1->nb_samples, 0, 0);
    VAR_5 = FUNC_4(VAR_4->ps);
    if (VAR_5 && !VAR_4->utt_started)
        VAR_4->utt_started = 1;
    if (!VAR_5 && VAR_4->utt_started) {
        FUNC_2(VAR_4->ps);
        VAR_6 = FUNC_3(VAR_4->ps, ((void*)0));
        if (VAR_6 != ((void*)0))
            FUNC_0(VAR_3, "lavfi.asr.text", VAR_6, 0);
        FUNC_6(VAR_4->ps);
        VAR_4->utt_started = 0;
    }

    return FUNC_1(VAR_2->outputs[0], VAR_1);
}
