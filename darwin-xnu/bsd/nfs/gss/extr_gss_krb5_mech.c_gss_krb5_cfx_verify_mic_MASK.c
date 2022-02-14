
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* lucid_context_t ;
typedef int gss_qop_t ;
typedef TYPE_2__* gss_ctx_id_t ;
typedef int gss_cfx_mic_token_desc ;
typedef TYPE_3__* gss_cfx_mic_token ;
typedef TYPE_4__* gss_buffer_t ;
struct TYPE_19__ {int length; TYPE_3__* value; } ;
typedef TYPE_5__ gss_buffer_desc ;
typedef TYPE_6__* crypto_ctx_t ;
struct TYPE_20__ {scalar_t__ digest_size; } ;
struct TYPE_18__ {scalar_t__ length; TYPE_3__* value; } ;
struct TYPE_17__ {int SND_SEQ; } ;
struct TYPE_15__ {int recv_seq; } ;
struct TYPE_16__ {TYPE_6__ gss_cryptor; TYPE_1__ gss_lucid_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_6__*,int *,TYPE_4__*,TYPE_5__*,int *,int*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

uint32_t
FUNC_5(uint32_t *VAR_5,
   gss_ctx_id_t VAR_6,
   gss_buffer_t VAR_7,
   gss_buffer_t VAR_8,
   gss_qop_t *VAR_9 )
{
 gss_cfx_mic_token VAR_10 = VAR_8->value;
 lucid_context_t VAR_11 = &VAR_6->gss_lucid_ctx;
 crypto_ctx_t VAR_12 = &VAR_6->gss_cryptor;
 uint8_t *VAR_13 = (uint8_t *)VAR_8->value + sizeof (gss_cfx_mic_token_desc);
 int VAR_14 = 0;
 uint64_t VAR_15;
 uint32_t VAR_16;
 gss_buffer_desc VAR_17;

 if (VAR_9)
  *VAR_9 = VAR_1;
 if (VAR_5 == ((void*)0))
  VAR_5 = &VAR_16;

 if (VAR_8->length != sizeof(gss_cfx_mic_token_desc) + VAR_12->digest_size) {
  FUNC_4("mic token wrong length\n");
  *VAR_5 = VAR_0;
  goto out;
 }
 *VAR_5 = FUNC_0(VAR_6, VAR_10);
 if (*VAR_5)
  return (VAR_4);
 VAR_17.value = VAR_10;
 VAR_17.length = sizeof (gss_cfx_mic_token_desc);
 *VAR_5 = FUNC_1(VAR_12, ((void*)0), VAR_7, &VAR_17, VAR_13, &VAR_14, 0, 0);

 if (VAR_14) {

  FUNC_2(&VAR_15, VAR_10->SND_SEQ, sizeof (uint64_t));
  VAR_15 = FUNC_3(VAR_15);
  VAR_11->recv_seq = VAR_15;
 }

out:
 return (VAR_14 ? VAR_3 : VAR_2);
}
