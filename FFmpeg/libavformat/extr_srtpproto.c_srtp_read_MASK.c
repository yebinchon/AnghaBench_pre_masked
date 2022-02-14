
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ aes; } ;
struct TYPE_6__ {TYPE_4__ srtp_in; int rtp_hd; } ;
typedef TYPE_2__ SRTPProtoContext ;


 scalar_t__ FUNC_0 (TYPE_4__*,int *,int*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    SRTPProtoContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;
start:
    VAR_4 = FUNC_1(VAR_3->rtp_hd, VAR_1, VAR_2);
    if (VAR_4 > 0 && VAR_3->srtp_in.aes) {
        if (FUNC_0(&VAR_3->srtp_in, VAR_1, &VAR_4) < 0)
            goto start;
    }
    return VAR_4;
}
