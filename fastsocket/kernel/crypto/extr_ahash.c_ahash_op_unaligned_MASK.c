
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ahash {int dummy; } ;
struct ahash_request_priv {scalar_t__ ubuf; struct ahash_request* data; int complete; int result; } ;
struct TYPE_2__ {int flags; struct ahash_request* data; int complete; } ;
struct ahash_request {struct ahash_request_priv* priv; TYPE_1__ base; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned long) ;
 int VAR_4 ;
 int FUNC_2 (struct ahash_request*,int) ;
 unsigned long FUNC_3 (struct crypto_ahash*) ;
 unsigned int FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 struct ahash_request_priv* FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_5,
         int (*VAR_6)(struct ahash_request *))
{
 struct crypto_ahash *VAR_7 = FUNC_5(VAR_5);
 unsigned long VAR_8 = FUNC_3(VAR_7);
 unsigned int VAR_9 = FUNC_4(VAR_7);
 struct ahash_request_priv *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(sizeof(*VAR_10) + FUNC_1(VAR_9, VAR_8),
         (VAR_5->base.flags & VAR_0) ?
         VAR_3 : VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->result = VAR_5->result;
 VAR_10->complete = VAR_5->base.complete;
 VAR_10->data = VAR_5->base.data;

 VAR_5->result = FUNC_0((u8 *)VAR_10->ubuf, VAR_8 + 1);
 VAR_5->base.complete = VAR_4;
 VAR_5->base.data = VAR_5;
 VAR_5->priv = VAR_10;

 VAR_11 = VAR_6(VAR_5);
 FUNC_2(VAR_5, VAR_11);

 return VAR_11;
}
