
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int flags; } ;
struct scatterlist {unsigned int offset; int length; } ;
struct hash_desc {int flags; int tfm; } ;


 scalar_t__ VAR_0 ;
 struct shash_desc** FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct shash_desc*,void*,unsigned int,int *) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct hash_desc*,int *) ;
 int FUNC_8 (struct hash_desc*) ;
 int FUNC_9 (struct hash_desc*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct hash_desc *VAR_1, struct scatterlist *VAR_2,
          unsigned int VAR_3, u8 *VAR_4)
{
 unsigned int VAR_5 = VAR_2->offset;
 int VAR_6;

 if (VAR_3 < FUNC_5(VAR_2->length, ((unsigned int)(VAR_0)) - VAR_5)) {
  struct shash_desc **VAR_7 = FUNC_0(VAR_1->tfm);
  struct shash_desc *VAR_8 = *VAR_7;
  void *VAR_9;

  VAR_8->flags = VAR_1->flags;

  VAR_9 = FUNC_1(FUNC_6(VAR_2), 0);
  VAR_6 = FUNC_3(VAR_8, VAR_9 + VAR_5, VAR_3, VAR_4);
  FUNC_2(VAR_9, 0);
  FUNC_4(VAR_8->flags);
  goto out;
 }

 VAR_6 = FUNC_8(VAR_1);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_9(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_7(VAR_1, VAR_4);

out:
 return VAR_6;
}
