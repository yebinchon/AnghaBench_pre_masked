
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_unlinkdata {TYPE_1__* dir; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nfs_unlinkdata*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct nfs_unlinkdata *VAR_1 = VAR_0;
 struct super_block *VAR_2 = VAR_1->dir->i_sb;

 FUNC_0(VAR_1->dir);
 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
}
