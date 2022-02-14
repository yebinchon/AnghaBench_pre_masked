
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; char* buf; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_2)
{
    GetBitContext VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    if(VAR_2->buf_size < 15)
        return 0;


    if ( FUNC_0(VAR_2->buf) != FUNC_0("CWS")
        && FUNC_0(VAR_2->buf) != FUNC_0("FWS"))
        return 0;

    if ( FUNC_0(VAR_2->buf) == FUNC_0("CWS")
        && VAR_2->buf[3] <= 20)
        return VAR_1 / 4 + 1;

    if (FUNC_3(&VAR_3, VAR_2->buf + 3, VAR_2->buf_size - 3) < 0)
        return 0;

    FUNC_4(&VAR_3, 40);
    VAR_4 = FUNC_1(&VAR_3, 5);
    if (!VAR_4)
        return 0;
    VAR_5 = FUNC_2(&VAR_3, VAR_4);
    VAR_6 = FUNC_2(&VAR_3, VAR_4);
    VAR_7 = FUNC_2(&VAR_3, VAR_4);
    VAR_8 = FUNC_2(&VAR_3, VAR_4);
    if (VAR_5 || VAR_7 || !VAR_6 || !VAR_8)
        return 0;

    if (VAR_2->buf[3] >= 20 || VAR_6 < 16 || VAR_8 < 16)
        return VAR_1 / 4;

    return VAR_0 + 1;
}
