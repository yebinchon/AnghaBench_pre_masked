
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int bitcount; } ;
struct TYPE_10__ {TYPE_3__*** best_offset; } ;
struct TYPE_9__ {int bitcount; char* path; } ;
typedef TYPE_1__ PathCounter ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ BestOffset ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_1(MLPEncodeContext *VAR_3, unsigned int VAR_4,
                                   PathCounter *VAR_5, int VAR_6)
{
    BestOffset *VAR_7, *VAR_8 = VAR_2;
    int VAR_9 = VAR_5->bitcount;
    char *VAR_10 = VAR_5->path + 1;
    int VAR_11;
    int VAR_12;

    for (VAR_12 = 0; VAR_10[VAR_12]; VAR_12++)
        VAR_8 = VAR_3->best_offset[VAR_12][VAR_4];

    VAR_11 = VAR_10[VAR_12 - 1] - VAR_1;

    VAR_7 = VAR_3->best_offset[VAR_12][VAR_4];

    VAR_9 += VAR_7[VAR_6].bitcount;

    if (VAR_11 != VAR_6 ||
        FUNC_0(&VAR_8[VAR_11], &VAR_7[VAR_6]))
        VAR_9 += VAR_0;

    return VAR_9;
}
