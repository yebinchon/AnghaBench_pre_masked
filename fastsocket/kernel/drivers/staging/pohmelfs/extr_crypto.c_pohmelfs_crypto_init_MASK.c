
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int hash_string; int cipher_string; } ;


 int FUNC_0 (struct pohmelfs_sb*) ;
 int FUNC_1 (struct pohmelfs_sb*) ;

int FUNC_2(struct pohmelfs_sb *VAR_0)
{
 int VAR_1;

 if (!VAR_0->cipher_string && !VAR_0->hash_string)
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
