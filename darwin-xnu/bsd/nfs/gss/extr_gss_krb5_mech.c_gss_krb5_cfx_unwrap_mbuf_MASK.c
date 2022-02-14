
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__* TOK_ID; scalar_t__ Filler; int Flags; int* EC; int* RRC; int SND_SEQ; } ;
typedef TYPE_4__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int seq ;
typedef int mbuf_t ;
typedef TYPE_5__* lucid_context_t ;
typedef scalar_t__ gss_qop_t ;
typedef TYPE_6__* gss_ctx_id_t ;
typedef TYPE_4__ gss_cfx_wrap_token_desc ;
struct TYPE_26__ {int length; TYPE_4__* value; } ;
typedef TYPE_8__ gss_buffer_desc ;
typedef TYPE_9__* crypto_ctx_t ;
struct TYPE_27__ {int digest_size; } ;
struct TYPE_20__ {scalar_t__ acceptor_subkey; } ;
struct TYPE_21__ {TYPE_1__ data_4121; } ;
struct TYPE_22__ {TYPE_2__ lucid_protocol_u; } ;
struct TYPE_24__ {int initiate; int recv_seq; TYPE_3__ key_data; } ;
struct TYPE_25__ {TYPE_9__ gss_cryptor; TYPE_5__ gss_lucid_ctx; } ;
struct TYPE_19__ {scalar_t__* TOK_ID; scalar_t__ Filler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_9__*,int *,size_t*,int ,int) ;
 int FUNC_3 (TYPE_9__*,int *,int ,int ,size_t,TYPE_8__*,TYPE_4__*,int*,int,int) ;
 int FUNC_4 (int ,size_t,int,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 TYPE_10__ VAR_8 ;

uint32_t
FUNC_9(uint32_t * VAR_9,
    gss_ctx_id_t VAR_10,
    mbuf_t *VAR_11,
    size_t VAR_12,
    int *VAR_13,
    gss_qop_t *VAR_14 )
{
 gss_cfx_wrap_token_desc VAR_15;
 lucid_context_t VAR_16 = &VAR_10->gss_lucid_ctx;
 crypto_ctx_t VAR_17 = &VAR_10->gss_cryptor;
 int VAR_18, VAR_19;
 uint16_t VAR_20 = 0 , VAR_21 = 0;
 uint64_t VAR_22;
 int VAR_23 = (*VAR_14 == VAR_5);
 int VAR_24 = VAR_16->initiate ? (VAR_23 ? 0 : 1) : (VAR_23 ? 1 : 0);

 VAR_18 = FUNC_4(*VAR_11, 0, sizeof (gss_cfx_wrap_token_desc), &VAR_15);
 FUNC_1(*VAR_11, sizeof (gss_cfx_wrap_token_desc));
 VAR_12 -= sizeof (gss_cfx_wrap_token_desc);


 if (VAR_15.TOK_ID[0] != VAR_8.TOK_ID[0] ||
     VAR_15.TOK_ID[1] != VAR_8.TOK_ID[1] ||
     VAR_15.Filler != VAR_8.Filler) {
  FUNC_8("Token id does not match\n");
  goto badrpc;
 }
 if ((VAR_24 && !(VAR_15.Flags & VAR_2)) ||
     (VAR_16->key_data.lucid_protocol_u.data_4121.acceptor_subkey && !(VAR_15.Flags & VAR_0))) {
  FUNC_8("Bad flags %x\n", VAR_15.Flags);
  goto badrpc;
 }


 FUNC_6(&VAR_22, VAR_15.SND_SEQ, sizeof (VAR_22));
 VAR_22 = FUNC_7(VAR_22);
 VAR_16->recv_seq = VAR_22;

 VAR_20 = (VAR_15.EC[0] << 8) | VAR_15.EC[1];
 VAR_21 = (VAR_15.RRC[0] << 8) | VAR_15.RRC[1];
 *VAR_14 = VAR_4;
 VAR_19 = ((VAR_15.Flags & VAR_1) == VAR_1);
 if (VAR_13)
  *VAR_13 = VAR_19;
 if (VAR_19) {
  gss_cfx_wrap_token_desc VAR_25;

  if (VAR_21)
   FUNC_0(*VAR_11, VAR_21);
  VAR_18 = FUNC_2(VAR_17, VAR_11, &VAR_12, 0, VAR_23);
  if (VAR_18) {
   FUNC_8("krb5_cfx_crypt_mbuf %d\n", VAR_18);
   *VAR_9 = VAR_18;
   return (VAR_7);
  }
  if (VAR_12 >= sizeof(gss_cfx_wrap_token_desc))
   VAR_12 -= sizeof(gss_cfx_wrap_token_desc);
  else
   goto badrpc;
  FUNC_4(*VAR_11, VAR_12, sizeof(gss_cfx_wrap_token_desc), &VAR_25);

  VAR_15.RRC[0] = VAR_15.RRC[1] = 0;
  if (FUNC_5(&VAR_15, &VAR_25, sizeof (gss_cfx_wrap_token_desc)) != 0) {
   FUNC_8("Encrypted token mismach\n");
   goto badrpc;
  }

  FUNC_1(*VAR_11, -(sizeof(gss_cfx_wrap_token_desc) + VAR_20));
  VAR_12 -= (sizeof(gss_cfx_wrap_token_desc) + VAR_20);
 } else {
  uint8_t VAR_26[VAR_17->digest_size];
  int VAR_27;
  gss_buffer_desc VAR_28;

  if (VAR_20 != VAR_17->digest_size || VAR_12 >= VAR_17->digest_size)
   goto badrpc;
  VAR_12 -= VAR_17->digest_size;
  FUNC_4(*VAR_11, VAR_12, VAR_17->digest_size, VAR_26);
  FUNC_1(*VAR_11, -VAR_17->digest_size);

  VAR_15.EC[0] = VAR_15.EC[1] = VAR_15.RRC[0] = VAR_15.RRC[1] = 0;
  VAR_28.value = &VAR_15;
  VAR_28.length = sizeof(gss_cfx_wrap_token_desc);
  VAR_18 = FUNC_3(VAR_17, ((void*)0), *VAR_11, 0, VAR_12, &VAR_28, VAR_26, &VAR_27, 1, VAR_23);
  if (VAR_18)
   goto badrpc;
 }
 return (VAR_6);

badrpc:
 *VAR_9 = VAR_3;
 return (VAR_7);
}
