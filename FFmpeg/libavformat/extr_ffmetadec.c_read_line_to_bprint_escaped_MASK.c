
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ error; } ;
typedef TYPE_1__ AVIOContext ;
typedef int AVBPrint ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 char FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int64_t FUNC_4(AVIOContext *VAR_1, AVBPrint *VAR_2)
{
    int VAR_3, VAR_4;
    int64_t VAR_5 = 0;
    char VAR_6[1024];
    char VAR_7;
    char VAR_8 = ' ';

    do {
        VAR_3 = 0;
        do {
            VAR_7 = FUNC_2(VAR_1);
            VAR_4 = VAR_8 != '\\' && (VAR_7 == '\r' || VAR_7 == '\n' || VAR_7 == '\0');
            if (!VAR_4)
                VAR_6[VAR_3++] = VAR_7;
            VAR_8 = VAR_7;
        } while (!VAR_4 && VAR_3 < sizeof(VAR_6));
        FUNC_0(VAR_2, VAR_6, VAR_3);
        VAR_5 += VAR_3;
    } while (!VAR_4);

    if (VAR_7 == '\r' && FUNC_2(VAR_1) != '\n' && !FUNC_1(VAR_1))
        FUNC_3(VAR_1, -1);

    if (!VAR_7 && VAR_1->error)
        return VAR_1->error;

    if (!VAR_7 && !VAR_5 && FUNC_1(VAR_1))
        return VAR_0;

    return VAR_5;
}
