
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int rtp_fd; int rtcp_fd; } ;
typedef TYPE_2__ RTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_1, int **VAR_2,
                                     int *VAR_3)
{
    RTPContext *VAR_4 = VAR_1->priv_data;
    int *VAR_5 = *VAR_2 = FUNC_1(sizeof(**VAR_2) * 2);
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_5[0] = VAR_4->rtp_fd;
    VAR_5[1] = VAR_4->rtcp_fd;
    *VAR_3 = 2;
    return 0;
}
