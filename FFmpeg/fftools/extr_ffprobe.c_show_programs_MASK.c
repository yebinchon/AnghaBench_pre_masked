
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_6__ {int nb_programs; int ** programs; } ;
struct TYPE_5__ {TYPE_2__* fmt_ctx; } ;
typedef TYPE_1__ InputFile ;
typedef int AVProgram ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(WriterContext *VAR_1, InputFile *VAR_2)
{
    AVFormatContext *VAR_3 = VAR_2->fmt_ctx;
    int VAR_4, VAR_5 = 0;

    FUNC_2(VAR_1, VAR_0);
    for (VAR_4 = 0; VAR_4 < VAR_3->nb_programs; VAR_4++) {
        AVProgram *VAR_6 = VAR_3->programs[VAR_4];
        if (!VAR_6)
            continue;
        VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_6);
        if (VAR_5 < 0)
            break;
    }
    FUNC_1(VAR_1);
    return VAR_5;
}
