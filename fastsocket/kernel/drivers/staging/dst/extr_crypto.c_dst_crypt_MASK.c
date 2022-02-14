
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_crypto_engine {scalar_t__ enc; int cipher; struct ablkcipher_request* data; } ;
struct bio {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 int FUNC_0 (struct ablkcipher_request*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*,struct dst_crypto_engine*,int ) ;
 int FUNC_2 (struct bio*,struct dst_crypto_engine*,int ) ;
 int FUNC_3 (struct ablkcipher_request*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dst_crypto_engine *VAR_1, struct bio *VAR_2)
{
 struct ablkcipher_request *VAR_3 = VAR_1->data;

 FUNC_3(VAR_3, 0, sizeof(struct ablkcipher_request));
 FUNC_0(VAR_3, VAR_1->cipher);

 if (VAR_1->enc)
  return FUNC_2(VAR_2, VAR_1, VAR_0);
 else
  return FUNC_1(VAR_2, VAR_1, VAR_0);
}
