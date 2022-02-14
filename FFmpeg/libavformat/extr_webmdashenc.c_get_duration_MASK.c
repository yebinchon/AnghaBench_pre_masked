
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;


 int VAR_0 ;
 double FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static double FUNC_2(AVFormatContext *VAR_1)
{
    int VAR_2 = 0;
    double VAR_3 = 0.0;
    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
        AVDictionaryEntry *VAR_4 = FUNC_1(VAR_1->streams[VAR_2]->metadata,
                                                  VAR_0, ((void*)0), 0);
        if (!VAR_4 || FUNC_0(VAR_4->value) < 0) continue;
        if (FUNC_0(VAR_4->value) > VAR_3) VAR_3 = FUNC_0(VAR_4->value);
    }
    return VAR_3 / 1000;
}
