
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int mbuf_t ;
typedef TYPE_1__* lucid_context_t ;
typedef int gss_qop_t ;
typedef TYPE_2__* gss_ctx_id_t ;
typedef int gss_cfx_mic_token_desc ;
typedef TYPE_3__* gss_cfx_mic_token ;
typedef TYPE_4__* gss_buffer_t ;
struct TYPE_15__ {int length; TYPE_3__* value; } ;
typedef TYPE_5__ gss_buffer_desc ;
typedef int * crypto_ctx_t ;
struct TYPE_14__ {TYPE_3__* value; } ;
struct TYPE_13__ {int SND_SEQ; } ;
struct TYPE_11__ {int recv_seq; } ;
struct TYPE_12__ {int gss_cryptor; TYPE_1__ gss_lucid_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int *,int *,int ,size_t,size_t,TYPE_5__*,int *,int*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

uint32_t
FUNC_4(uint32_t *VAR_4,
        gss_ctx_id_t VAR_5,
        mbuf_t VAR_6,
        size_t VAR_7,
        size_t VAR_8,
        gss_buffer_t VAR_9,
        gss_qop_t *VAR_10 )
{
 gss_cfx_mic_token VAR_11 = VAR_9->value;
 lucid_context_t VAR_12 = &VAR_5->gss_lucid_ctx;
 crypto_ctx_t VAR_13 = &VAR_5->gss_cryptor;
 uint8_t *VAR_14 = (uint8_t *)VAR_9->value + sizeof (gss_cfx_mic_token_desc);
 int VAR_15;
 uint64_t VAR_16;
 uint32_t VAR_17;
 gss_buffer_desc VAR_18;

 if (VAR_10)
  *VAR_10 = VAR_0;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_17;

 *VAR_4 = FUNC_0(VAR_5, VAR_11);
 if (*VAR_4)
  return (VAR_3);

 VAR_18.length = sizeof(gss_cfx_mic_token_desc);
 VAR_18.value = VAR_9->value;

 *VAR_4 = FUNC_1(VAR_13, ((void*)0), VAR_6, VAR_7, VAR_8, &VAR_18, VAR_14, &VAR_15, 0, 0);


 FUNC_2(&VAR_16, VAR_11->SND_SEQ, sizeof (uint64_t));
 VAR_16 = FUNC_3(VAR_16);
 VAR_12->recv_seq = VAR_16;

 return (VAR_15 ? VAR_2 : VAR_1);
}
