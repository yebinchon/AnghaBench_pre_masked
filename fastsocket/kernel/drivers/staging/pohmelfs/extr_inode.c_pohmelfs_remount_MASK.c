
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned long s_flags; } ;
struct pohmelfs_sb {int dummy; } ;


 int VAR_0 ;
 struct pohmelfs_sb* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,struct pohmelfs_sb*,int) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1, int *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct pohmelfs_sb *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6 = VAR_1->s_flags;

 VAR_4 = FUNC_1(VAR_3, VAR_5, 1);
 if (VAR_4)
  goto err_out_restore;

 if (!(*VAR_2 & VAR_0))
  VAR_1->s_flags &= ~VAR_0;
 return 0;

err_out_restore:
 VAR_1->s_flags = VAR_6;
 return VAR_4;
}
