
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {void** ikey; int * dec; int * enc; } ;
struct crypto_ctx {int etype; int mpad; int digest_size; int lock; int * ckey; TYPE_6__* enc_mode; int flags; TYPE_6__* di; void* key; TYPE_3__ ks; TYPE_6__* dec_mode; int keylen; TYPE_4__* gss_ctx; } ;
typedef TYPE_4__* lucid_context_t ;
struct TYPE_15__ {int block_size; } ;
struct TYPE_11__ {void* key_val; int key_len; } ;
struct TYPE_12__ {int etype; TYPE_1__ key; } ;
struct TYPE_14__ {int initiate; TYPE_2__ ctx_key; } ;




 int VAR_0 ;

 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_6__* FUNC_1 () ;
 TYPE_6__* FUNC_2 () ;
 TYPE_6__* FUNC_3 () ;
 TYPE_6__* FUNC_4 () ;
 void* FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (struct crypto_ctx*,int *,int,int *) ;
 int FUNC_7 (struct crypto_ctx*,int *,int,int *,int ) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int ) ;

int
FUNC_10(struct crypto_ctx *VAR_9, lucid_context_t VAR_10)
{
 VAR_9->gss_ctx = VAR_10;
 void *VAR_11;
 uint8_t VAR_12[VAR_6];

 VAR_9->keylen = VAR_9->gss_ctx->ctx_key.key.key_len;
 VAR_11 = VAR_9->gss_ctx->ctx_key.key.key_val;
 VAR_9->etype = VAR_9->gss_ctx->ctx_key.etype;
 VAR_9->key = VAR_11;

 switch(VAR_9->etype) {
 case 130:
 case 129:
  VAR_9->enc_mode = FUNC_2();
  FUNC_0(VAR_9->enc_mode);
  VAR_9->dec_mode = FUNC_1();
  FUNC_0(VAR_9->dec_mode);
  VAR_9->ks.enc = ((void*)0);
  VAR_9->ks.dec = ((void*)0);
  VAR_9->di = FUNC_5();
  FUNC_0(VAR_9->di);
  VAR_9->flags = VAR_0;
  VAR_9->mpad = 1;
  VAR_9->digest_size = 12;
  FUNC_8(VAR_9->gss_ctx->initiate ?
    VAR_5 : VAR_4,
    0x99, VAR_12);
  FUNC_7(VAR_9, VAR_12, VAR_6, &VAR_9->ckey[VAR_3], VAR_9->keylen);
  FUNC_8(VAR_9->gss_ctx->initiate ?
    VAR_4 : VAR_5,
    0x99, VAR_12);
  FUNC_7(VAR_9, VAR_12, VAR_6, &VAR_9->ckey[VAR_2], VAR_9->keylen);
  break;
 case 128:
  VAR_9->enc_mode = FUNC_4();
  FUNC_0(VAR_9->enc_mode);
  VAR_9->dec_mode = FUNC_3();
  FUNC_0(VAR_9->dec_mode);
  VAR_9->ks.ikey[VAR_3] = VAR_9->key;
  VAR_9->ks.ikey[VAR_2] = VAR_9->key;
  VAR_9->di = FUNC_5();
  FUNC_0(VAR_9->di);
  VAR_9->flags = 0;
  VAR_9->mpad = VAR_9->enc_mode->block_size;
  VAR_9->digest_size = 20;
  FUNC_8(VAR_4, 0x99, VAR_12);
  FUNC_6(VAR_9, VAR_12, VAR_6, &VAR_9->ckey[VAR_3]);
  FUNC_6(VAR_9, VAR_12, VAR_6, &VAR_9->ckey[VAR_2]);
  break;
 default:
  return (VAR_1);
 }

 VAR_9->lock = FUNC_9(VAR_8, VAR_7);

 return (0);
}
