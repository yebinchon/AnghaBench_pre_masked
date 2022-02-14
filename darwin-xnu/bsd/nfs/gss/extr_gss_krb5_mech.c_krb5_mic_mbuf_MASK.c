
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct hmac_walker_ctx {int hmac_ctx; } ;
typedef int mbuf_t ;
typedef TYPE_2__* gss_buffer_t ;
typedef TYPE_3__* crypto_ctx_t ;
struct TYPE_14__ {int output_size; } ;
struct TYPE_11__ {void** ikey; } ;
struct TYPE_13__ {int flags; int digest_size; TYPE_8__* di; void** ckey; TYPE_1__ ks; int lock; } ;
struct TYPE_12__ {int value; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_8__*,int ,int *) ;
 int FUNC_3 (TYPE_8__*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct hmac_walker_ctx*,TYPE_3__*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int,int ,struct hmac_walker_ctx*) ;
 scalar_t__ FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int ) ;

int
FUNC_10(crypto_ctx_t VAR_6, gss_buffer_t VAR_7,
       mbuf_t VAR_8, uint32_t VAR_9, uint32_t VAR_10, gss_buffer_t VAR_11, uint8_t *VAR_12, int *VAR_13, int VAR_14, int VAR_15)
{
 struct hmac_walker_ctx VAR_16;
 uint8_t VAR_17[VAR_6->di->output_size];
 int VAR_18;
 int VAR_19 = (VAR_13 == ((void*)0)) ? (VAR_15 ? VAR_2 : VAR_3) : (VAR_15 ? VAR_3 : VAR_2);
 void *VAR_20;

 if (VAR_14) {
  if (!(VAR_6->flags & VAR_0)) {
   FUNC_5(VAR_6->lock);
   if (!(VAR_6->flags & VAR_0)) {
    FUNC_1(VAR_6);
   }
   VAR_6->flags |= VAR_0;
   FUNC_6(VAR_6->lock);
  }
  VAR_20 = VAR_6->ks.ikey[VAR_19];
 } else {
  VAR_20 = VAR_6->ckey[VAR_19];
 }

 FUNC_4(&VAR_16, VAR_6, VAR_20);

 if (VAR_7) {
  FUNC_3(VAR_6->di, VAR_16.hmac_ctx, VAR_7->length, VAR_7->value);
 }

 VAR_18 = FUNC_7(VAR_8, VAR_9, VAR_10, 1, VAR_5, &VAR_16);

 if (VAR_18)
  return (VAR_18);
 if (VAR_11)
  FUNC_3(VAR_6->di, VAR_16.hmac_ctx, VAR_11->length, VAR_11->value);

 FUNC_2(VAR_6->di, VAR_16.hmac_ctx, VAR_17);
 FUNC_0(VAR_16.hmac_ctx, VAR_4);

 if (VAR_13) {
  *VAR_13 = (FUNC_8(VAR_12, VAR_17, VAR_6->digest_size) == 0);
  if (!*VAR_13)
   return (VAR_1);
 } else
  FUNC_9(VAR_12, VAR_17, VAR_6->digest_size);

 return (0);
}
