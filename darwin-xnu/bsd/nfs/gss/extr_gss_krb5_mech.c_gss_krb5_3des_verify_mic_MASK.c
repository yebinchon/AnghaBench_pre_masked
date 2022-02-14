
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int* Sign_Alg; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int gss_qop_t ;
typedef TYPE_2__* gss_ctx_id_t ;
typedef int gss_buffer_t ;
struct TYPE_16__ {int length; TYPE_1__* value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef TYPE_1__ gss_1964_mic_token_desc ;
typedef TYPE_5__* crypto_ctx_t ;
struct TYPE_17__ {int digest_size; } ;
struct TYPE_15__ {TYPE_5__ gss_cryptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_1__,TYPE_3__*,int *,int *,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,int ,int *,TYPE_1__*,int*,int ,int ) ;
 TYPE_1__ VAR_4 ;

uint32_t
FUNC_2(uint32_t *VAR_5,
    gss_ctx_id_t VAR_6,
    gss_buffer_t VAR_7,
    gss_buffer_t VAR_8,
    gss_qop_t *VAR_9)
{
 crypto_ctx_t VAR_10 = &VAR_6->gss_cryptor;
 uint8_t VAR_11[VAR_10->digest_size];
 gss_buffer_desc VAR_12;
 gss_1964_mic_token_desc VAR_13 = VAR_4;
 gss_buffer_desc VAR_14;
 int VAR_15;

 VAR_13.Sign_Alg[0] = 0x04;
 VAR_13.Sign_Alg[1] = 0x00;
 VAR_12.length = VAR_10->digest_size;
 VAR_12.value = VAR_11;
 VAR_14.length = sizeof(gss_1964_mic_token_desc);
 VAR_14.value = &VAR_13;

 if (VAR_9)
  *VAR_9 = VAR_0;

 *VAR_5 = FUNC_0(VAR_6, VAR_8, VAR_13, &VAR_12, ((void*)0), ((void*)0), 0);
 if (*VAR_5)
  return (VAR_3);

 *VAR_5 = FUNC_1(VAR_10, &VAR_14, VAR_7, ((void*)0), VAR_11, &VAR_15, 0, 0);
 if (*VAR_5)
  return (VAR_3);

 return (VAR_15 ? VAR_2 : VAR_1);
}
