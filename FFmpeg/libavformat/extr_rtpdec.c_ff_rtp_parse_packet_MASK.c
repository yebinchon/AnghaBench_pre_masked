
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int prev_ret; int srtp; scalar_t__ srtp_enabled; } ;
typedef TYPE_1__ RTPDemuxContext ;
typedef int AVPacket ;


 scalar_t__ FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int **,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

int FUNC_4(RTPDemuxContext *VAR_0, AVPacket *VAR_1,
                        uint8_t **VAR_2, int VAR_3)
{
    int VAR_4;
    if (VAR_0->srtp_enabled && VAR_2 && FUNC_0(&VAR_0->srtp, *VAR_2, &VAR_3) < 0)
        return -1;
    VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    VAR_0->prev_ret = VAR_4;
    while (VAR_4 < 0 && FUNC_1(VAR_0))
        VAR_4 = FUNC_3(VAR_0, VAR_1);
    return VAR_4 ? VAR_4 : FUNC_1(VAR_0);
}
