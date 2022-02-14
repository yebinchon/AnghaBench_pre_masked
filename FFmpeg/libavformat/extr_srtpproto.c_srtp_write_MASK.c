
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
struct TYPE_7__ {int aes; } ;
struct TYPE_6__ {int const* encryptbuf; int rtp_hd; TYPE_4__ srtp_out; } ;
typedef TYPE_2__ SRTPProtoContext ;


 int FUNC_0 (TYPE_4__*,int const*,int,int const*,int) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    SRTPProtoContext *VAR_3 = VAR_0->priv_data;
    if (!VAR_3->srtp_out.aes)
        return FUNC_1(VAR_3->rtp_hd, VAR_1, VAR_2);
    VAR_2 = FUNC_0(&VAR_3->srtp_out, VAR_1, VAR_2, VAR_3->encryptbuf,
                           sizeof(VAR_3->encryptbuf));
    if (VAR_2 < 0)
        return VAR_2;
    return FUNC_1(VAR_3->rtp_hd, VAR_3->encryptbuf, VAR_2);
}
