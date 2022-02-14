
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
 int FUNC_0 (int *,int ,int ) ;
 char FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_1)
{
    char VAR_2[13];
    FFTextReader VAR_3;
    FUNC_0(&VAR_3, VAR_1->buf, VAR_1->buf_size);

    while (FUNC_1(&VAR_3) == '\r' || FUNC_1(&VAR_3) == '\n')
        FUNC_2(&VAR_3);

    FUNC_3(&VAR_3, VAR_2, sizeof(VAR_2));

    if (!FUNC_4(VAR_2, "[Script Info]", 13))
        return VAR_0;

    return 0;
}
