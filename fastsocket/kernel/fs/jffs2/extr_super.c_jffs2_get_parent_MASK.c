
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_inode_info {TYPE_1__* inocache; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_sb; int i_mode; } ;
struct TYPE_3__ {int ino; int pino_nlink; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 struct jffs2_inode_info* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_6(struct dentry *VAR_0)
{
 struct jffs2_inode_info *VAR_1;
 uint32_t VAR_2;

 FUNC_0(!FUNC_3(VAR_0->d_inode->i_mode));

 VAR_1 = FUNC_2(VAR_0->d_inode);

 VAR_2 = VAR_1->inocache->pino_nlink;

 FUNC_1("Parent of directory ino #%u is #%u\n",
      VAR_1->inocache->ino, VAR_2);

 return FUNC_4(FUNC_5(VAR_0->d_inode->i_sb, VAR_2));
}
