
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; char* buf; } ;
typedef TYPE_1__ AVProbeData ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int*,char*,int *) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    AVIOContext VAR_2;
    int VAR_3 = 0;
    int VAR_4 = 0;

    if (VAR_1->buf_size < 2 || VAR_1->buf[0] != '-' || VAR_1->buf[1] != '-')
        return 0;

    FUNC_0(&VAR_2, VAR_1->buf, VAR_1->buf_size, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    VAR_3 = (FUNC_1(&VAR_2, &VAR_4, "--", ((void*)0)) >= 0) ? VAR_0 : 0;

    return VAR_3;
}
