
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int fec_hd; int rtcp_hd; int rtp_hd; int filters; } ;
typedef TYPE_2__ RTPContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0)
{
    RTPContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->filters);

    FUNC_1(VAR_1->rtp_hd);
    FUNC_1(VAR_1->rtcp_hd);
    FUNC_2(&VAR_1->fec_hd);
    return 0;
}
