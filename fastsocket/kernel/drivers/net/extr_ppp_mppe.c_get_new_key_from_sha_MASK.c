
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct ppp_mppe_state {int keylen; int sha1_digest; int sha1; int session_key; int master_key; } ;
struct hash_desc {scalar_t__ flags; int tfm; } ;
struct TYPE_2__ {int sha_pad2; int sha_pad1; } ;


 int FUNC_0 (struct hash_desc*,struct scatterlist*,unsigned int,int ) ;
 unsigned int FUNC_1 (struct scatterlist*,int ,int) ;
 int FUNC_2 (struct scatterlist*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ppp_mppe_state * VAR_1)
{
 struct hash_desc VAR_2;
 struct scatterlist VAR_3[4];
 unsigned int VAR_4;

 FUNC_2(VAR_3, 4);

 VAR_4 = FUNC_1(&VAR_3[0], VAR_1->master_key, VAR_1->keylen);
 VAR_4 += FUNC_1(&VAR_3[1], VAR_0->sha_pad1,
      sizeof(VAR_0->sha_pad1));
 VAR_4 += FUNC_1(&VAR_3[2], VAR_1->session_key, VAR_1->keylen);
 VAR_4 += FUNC_1(&VAR_3[3], VAR_0->sha_pad2,
      sizeof(VAR_0->sha_pad2));

 VAR_2.tfm = VAR_1->sha1;
 VAR_2.flags = 0;

 FUNC_0(&VAR_2, VAR_3, VAR_4, VAR_1->sha1_digest);
}
