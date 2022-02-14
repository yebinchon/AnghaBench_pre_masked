
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int * i_hash_cache; } ;
typedef int __be64 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gfs2_inode *VAR_0)
{
 __be64 *VAR_1 = VAR_0->i_hash_cache;
 VAR_0->i_hash_cache = ((void*)0);
 if (FUNC_0(VAR_1))
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);
}
