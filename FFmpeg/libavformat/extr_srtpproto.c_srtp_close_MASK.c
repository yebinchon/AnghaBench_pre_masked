
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int * rtp_hd; int srtp_in; int srtp_out; } ;
typedef TYPE_2__ SRTPProtoContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0)
{
    SRTPProtoContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(&VAR_1->srtp_out);
    FUNC_0(&VAR_1->srtp_in);
    FUNC_1(VAR_1->rtp_hd);
    VAR_1->rtp_hd = ((void*)0);
    return 0;
}
