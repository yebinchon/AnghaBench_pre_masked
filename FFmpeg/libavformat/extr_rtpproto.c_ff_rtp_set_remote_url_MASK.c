
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int path ;
typedef int hostname ;
typedef int buf ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int rtcp_hd; int rtp_hd; } ;
typedef TYPE_2__ RTPContext ;


 scalar_t__ FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (int *,int ,int *,int ,char*,int,int*,char*,int,char const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,int *,char*,int,char*,char*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,int *,int) ;

int FUNC_6(URLContext *VAR_0, const char *VAR_1)
{
    RTPContext *VAR_2 = VAR_0->priv_data;
    char VAR_3[256];
    int VAR_4, VAR_5;
    const char *VAR_6;

    char VAR_7[1024];
    char VAR_8[1024];

    FUNC_1(((void*)0), 0, ((void*)0), 0, VAR_3, sizeof(VAR_3), &VAR_4,
                 VAR_8, sizeof(VAR_8), VAR_1);
    VAR_5 = VAR_4 + 1;

    VAR_6 = FUNC_4(VAR_1, '?');
    if (VAR_6) {
        if (FUNC_0(VAR_7, sizeof(VAR_7), "rtcpport", VAR_6)) {
            VAR_5 = FUNC_5(VAR_7, ((void*)0), 10);
        }
    }

    FUNC_3(VAR_7, sizeof(VAR_7), "udp", ((void*)0), VAR_3, VAR_4, "%s", VAR_8);
    FUNC_2(VAR_2->rtp_hd, VAR_7);

    FUNC_3(VAR_7, sizeof(VAR_7), "udp", ((void*)0), VAR_3, VAR_5, "%s", VAR_8);
    FUNC_2(VAR_2->rtcp_hd, VAR_7);
    return 0;
}
