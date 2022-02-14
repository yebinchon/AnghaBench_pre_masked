
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_crypto_engine {int iv; int cipher; struct ablkcipher_request* data; } ;
struct pohmelfs_crypto_thread {struct pohmelfs_crypto_engine eng; struct netfs_trans* trans; } ;
struct netfs_trans {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 int FUNC_0 (struct ablkcipher_request*,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct netfs_trans*) ;
 int FUNC_3 (struct netfs_trans*,struct pohmelfs_crypto_engine*,int ) ;

__attribute__((used)) static int FUNC_4(struct pohmelfs_crypto_thread *VAR_1)
{
 struct netfs_trans *VAR_2 = VAR_1->trans;
 struct pohmelfs_crypto_engine *VAR_3 = &VAR_1->eng;
 struct ablkcipher_request *VAR_4 = VAR_3->data;

 FUNC_1(VAR_4, 0, sizeof(struct ablkcipher_request));
 FUNC_0(VAR_4, VAR_3->cipher);

 VAR_3->iv = FUNC_2(VAR_2);

 return FUNC_3(VAR_2, VAR_3, VAR_0);
}
