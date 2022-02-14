
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
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    char VAR_2[7];
    FFTextReader VAR_3;
    FUNC_1(&VAR_3, VAR_1->buf, VAR_1->buf_size);
    FUNC_2(&VAR_3, VAR_2, sizeof(VAR_2));

    return !FUNC_0(VAR_2, "<window", 7) ? VAR_0 : 0;
}
