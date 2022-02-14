
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct priv {int child; int tweak; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int tfm; } ;
struct TYPE_2__ {int cia_encrypt; } ;


 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,struct priv*,int ,int ) ;
 struct priv* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_0, struct scatterlist *VAR_1,
     struct scatterlist *VAR_2, unsigned int VAR_3)
{
 struct priv *VAR_4 = FUNC_2(VAR_0->tfm);
 struct blkcipher_walk VAR_5;

 FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3);
 return FUNC_1(VAR_0, &VAR_5, VAR_4, FUNC_3(VAR_4->tweak)->cia_encrypt,
       FUNC_3(VAR_4->child)->cia_encrypt);
}
