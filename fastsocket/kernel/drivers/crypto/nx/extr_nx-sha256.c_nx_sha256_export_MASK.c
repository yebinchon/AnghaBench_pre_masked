
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct shash_desc {TYPE_1__* tfm; } ;
struct sha256_state {int * state; int * buf; scalar_t__ count; } ;
struct TYPE_5__ {int message_bit_length; int * message_digest; } ;
struct TYPE_6__ {TYPE_2__ sha256; } ;
struct nx_csbcpb {TYPE_3__ cpb; } ;
struct nx_crypto_ctx {scalar_t__ csbcpb; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nx_crypto_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 struct sha256_state* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_9, void *VAR_10)
{
 struct sha256_state *VAR_11 = FUNC_2(VAR_9);
 struct nx_crypto_ctx *VAR_12 = FUNC_0(&VAR_9->tfm->base);
 struct nx_csbcpb *VAR_13 = (struct nx_csbcpb *)VAR_12->csbcpb;
 struct sha256_state *VAR_14 = VAR_10;

 VAR_14->count = VAR_11->count +
        (VAR_13->cpb.sha256.message_bit_length / 8);
 FUNC_1(VAR_14->buf, VAR_11->buf, sizeof(VAR_14->buf));




 if (VAR_13->cpb.sha256.message_bit_length)
  FUNC_1(VAR_14->state, VAR_13->cpb.sha256.message_digest,
         VAR_0);
 else {
  VAR_14->state[0] = VAR_1;
  VAR_14->state[1] = VAR_2;
  VAR_14->state[2] = VAR_3;
  VAR_14->state[3] = VAR_4;
  VAR_14->state[4] = VAR_5;
  VAR_14->state[5] = VAR_6;
  VAR_14->state[6] = VAR_7;
  VAR_14->state[7] = VAR_8;
 }

 return 0;
}
