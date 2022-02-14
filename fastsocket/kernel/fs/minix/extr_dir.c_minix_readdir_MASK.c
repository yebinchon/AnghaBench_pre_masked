
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct minix_sb_info {unsigned int s_dirsize; scalar_t__ s_version; int s_namelen; } ;
struct inode {unsigned long i_size; struct super_block* i_sb; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {unsigned long f_pos; TYPE_2__ f_path; } ;
struct TYPE_7__ {char* name; scalar_t__ inode; } ;
typedef TYPE_3__ minix_dirent ;
struct TYPE_8__ {char* name; scalar_t__ inode; } ;
typedef TYPE_4__ minix3_dirent ;
typedef int (* filldir_t ) (void*,char*,unsigned int,unsigned long,scalar_t__,int ) ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct page* FUNC_1 (struct inode*,unsigned long) ;
 unsigned long FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*,unsigned long) ;
 char* FUNC_5 (char*,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 unsigned int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct file * VAR_4, void * VAR_5, filldir_t VAR_6)
{
 unsigned long VAR_7 = VAR_4->f_pos;
 struct inode *VAR_8 = VAR_4->f_path.dentry->d_inode;
 struct super_block *VAR_9 = VAR_8->i_sb;
 unsigned VAR_10 = VAR_7 & ~VAR_2;
 unsigned long VAR_11 = VAR_7 >> VAR_3;
 unsigned long VAR_12 = FUNC_2(VAR_8);
 struct minix_sb_info *VAR_13 = FUNC_6(VAR_9);
 unsigned VAR_14 = VAR_13->s_dirsize;
 char *VAR_15;
 __u32 VAR_16;

 VAR_7 = (VAR_7 + VAR_14-1) & ~(VAR_14-1);
 if (VAR_7 >= VAR_8->i_size)
  goto done;

 for ( ; VAR_11 < VAR_12; VAR_11++, VAR_10 = 0) {
  char *VAR_17, *VAR_18, *VAR_19;
  struct page *VAR_20 = FUNC_1(VAR_8, VAR_11);

  if (FUNC_0(VAR_20))
   continue;
  VAR_18 = (char *)FUNC_7(VAR_20);
  VAR_17 = VAR_18+VAR_10;
  VAR_19 = VAR_18 + FUNC_4(VAR_8, VAR_11) - VAR_14;
  for ( ; VAR_17 <= VAR_19; VAR_17 = FUNC_5(VAR_17, VAR_13)) {
   if (VAR_13->s_version == VAR_1) {
    minix3_dirent *VAR_21 = (minix3_dirent *)VAR_17;
    VAR_15 = VAR_21->name;
    VAR_16 = VAR_21->inode;
    } else {
    minix_dirent *VAR_22 = (minix_dirent *)VAR_17;
    VAR_15 = VAR_22->name;
    VAR_16 = VAR_22->inode;
   }
   if (VAR_16) {
    int VAR_23;

    unsigned VAR_24 = FUNC_8(VAR_15, VAR_13->s_namelen);
    VAR_10 = VAR_17 - VAR_18;
    VAR_23 = VAR_6(VAR_5, VAR_15, VAR_24,
     (VAR_11 << VAR_3) | VAR_10,
     VAR_16, VAR_0);
    if (VAR_23) {
     FUNC_3(VAR_20);
     goto done;
    }
   }
  }
  FUNC_3(VAR_20);
 }

done:
 VAR_4->f_pos = (VAR_11 << VAR_3) | VAR_10;
 return 0;
}
