
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct pohmelfs_crypto_engine {int timeout; int iv; struct ablkcipher_request* data; } ;
struct ablkcipher_request {int dummy; } ;
typedef int iv ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct ablkcipher_request*,struct scatterlist*,struct scatterlist*,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pohmelfs_crypto_engine *VAR_0,
  struct scatterlist *VAR_1, struct scatterlist *VAR_2)
{
 struct ablkcipher_request *VAR_3 = VAR_0->data;
 u8 VAR_4[32];

 FUNC_1(VAR_4, 0, sizeof(VAR_4));

 FUNC_0(VAR_4, &VAR_0->iv, sizeof(VAR_0->iv));

 return FUNC_2(VAR_3, VAR_1, VAR_2, VAR_4, 1, VAR_0->timeout);
}
