
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {unsigned int i_size; int i_sb; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct cramfs_inode {int namelen; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_2 ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct cramfs_inode* FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct dentry*,int *) ;
 int * FUNC_5 (int ,struct cramfs_inode*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static struct dentry * FUNC_9(struct inode *VAR_4, struct dentry *VAR_5, struct nameidata *VAR_6)
{
 unsigned int VAR_7 = 0;
 int VAR_8;

 FUNC_7(&VAR_3);
 VAR_8 = FUNC_0(VAR_4->i_sb)->flags & VAR_0;
 while (VAR_7 < VAR_4->i_size) {
  struct cramfs_inode *VAR_9;
  char *VAR_10;
  int VAR_11, VAR_12;

  VAR_9 = FUNC_3(VAR_4->i_sb, FUNC_2(VAR_4) + VAR_7, sizeof(*VAR_9)+VAR_1);
  VAR_10 = (char *)(VAR_9+1);


  if (VAR_8 && (VAR_5->d_name.name[0] < VAR_10[0]))
   break;

  VAR_11 = VAR_9->namelen << 2;
  VAR_7 += sizeof(*VAR_9) + VAR_11;


  if (((VAR_5->d_name.len + 3) & ~3) != VAR_11)
   continue;

  for (;;) {
   if (!VAR_11) {
    FUNC_8(&VAR_3);
    return FUNC_1(-VAR_2);
   }
   if (VAR_10[VAR_11-1])
    break;
   VAR_11--;
  }
  if (VAR_11 != VAR_5->d_name.len)
   continue;
  VAR_12 = FUNC_6(VAR_5->d_name.name, VAR_10, VAR_11);
  if (VAR_12 > 0)
   continue;
  if (!VAR_12) {
   struct cramfs_inode VAR_13 = *VAR_9;
   FUNC_8(&VAR_3);
   FUNC_4(VAR_5, FUNC_5(VAR_4->i_sb, &VAR_13));
   return ((void*)0);
  }

  if (VAR_8)
   break;
 }
 FUNC_8(&VAR_3);
 FUNC_4(VAR_5, ((void*)0));
 return ((void*)0);
}
