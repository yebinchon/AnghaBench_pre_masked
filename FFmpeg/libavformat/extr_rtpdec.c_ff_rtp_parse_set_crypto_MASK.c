
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int srtp_enabled; int srtp; } ;
typedef TYPE_1__ RTPDemuxContext ;


 int FUNC_0 (int *,char const*,char const*) ;

void FUNC_1(RTPDemuxContext *VAR_0, const char *VAR_1,
                             const char *VAR_2)
{
    if (!FUNC_0(&VAR_0->srtp, VAR_1, VAR_2))
        VAR_0->srtp_enabled = 1;
}
