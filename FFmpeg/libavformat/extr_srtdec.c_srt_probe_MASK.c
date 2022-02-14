
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int buf_size; int buf; } ;
typedef int FFTextReader ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 char FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

__attribute__((used)) static int FUNC_7(const AVProbeData *VAR_1)
{
    int VAR_2;
    char VAR_3[64], *VAR_4;
    FFTextReader VAR_5;

    FUNC_1(&VAR_5, VAR_1->buf, VAR_1->buf_size);

    while (FUNC_2(&VAR_5) == '\r' || FUNC_2(&VAR_5) == '\n')
        FUNC_3(&VAR_5);





    if (FUNC_0(&VAR_5, VAR_3, sizeof(VAR_3)) < 0 ||
        FUNC_6(VAR_3, &VAR_4, 10) < 0 || VAR_4 == VAR_3)
        return 0;


    if (FUNC_0(&VAR_5, VAR_3, sizeof(VAR_3)) < 0)
        return 0;
    VAR_4 = VAR_3;
    if (VAR_3[0] == '-')
        VAR_4++;
    if (VAR_4[0] >= '0' && VAR_4[0] <= '9' && FUNC_5(VAR_3, " --> ")
        && FUNC_4(VAR_3, "%*d:%*d:%*d%*1[,.]%*d --> %*d:%*d:%*d%*1[,.]%d", &VAR_2) == 1)
        return VAR_0;

    return 0;
}
