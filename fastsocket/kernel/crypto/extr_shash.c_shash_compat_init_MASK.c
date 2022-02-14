
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int flags; } ;
struct hash_desc {int flags; int tfm; } ;


 struct shash_desc** FUNC_0 (int ) ;
 int FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct hash_desc *VAR_0)
{
 struct shash_desc **VAR_1 = FUNC_0(VAR_0->tfm);
 struct shash_desc *VAR_2 = *VAR_1;

 VAR_2->flags = VAR_0->flags;

 return FUNC_1(VAR_2);
}
