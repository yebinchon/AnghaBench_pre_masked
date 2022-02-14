
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct minix_sb_info {char* s_dirsize; scalar_t__ s_version; } ;
struct inode {scalar_t__ i_ino; int i_sb; } ;
struct TYPE_3__ {char* name; scalar_t__ inode; } ;
typedef TYPE_1__ minix_dirent ;
struct TYPE_4__ {char* name; scalar_t__ inode; } ;
typedef TYPE_2__ minix3_dirent ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 struct page* FUNC_1 (struct inode*,unsigned long) ;
 unsigned long FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*,unsigned long) ;
 char* FUNC_5 (char*,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct page*) ;

int FUNC_8(struct inode * VAR_1)
{
 struct page *VAR_2 = ((void*)0);
 unsigned long VAR_3, VAR_4 = FUNC_2(VAR_1);
 struct minix_sb_info *VAR_5 = FUNC_6(VAR_1->i_sb);
 char *VAR_6;
 __u32 VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  char *VAR_8, *VAR_9, *VAR_10;

  VAR_2 = FUNC_1(VAR_1, VAR_3);
  if (FUNC_0(VAR_2))
   continue;

  VAR_9 = (char *)FUNC_7(VAR_2);
  VAR_10 = VAR_9 + FUNC_4(VAR_1, VAR_3) - VAR_5->s_dirsize;
  for (VAR_8 = VAR_9; VAR_8 <= VAR_10; VAR_8 = FUNC_5(VAR_8, VAR_5)) {
   if (VAR_5->s_version == VAR_0) {
    minix3_dirent *VAR_11 = (minix3_dirent *)VAR_8;
    VAR_6 = VAR_11->name;
    VAR_7 = VAR_11->inode;
   } else {
    minix_dirent *VAR_12 = (minix_dirent *)VAR_8;
    VAR_6 = VAR_12->name;
    VAR_7 = VAR_12->inode;
   }

   if (VAR_7 != 0) {

    if (VAR_6[0] != '.')
     goto not_empty;
    if (!VAR_6[1]) {
     if (VAR_7 != VAR_1->i_ino)
      goto not_empty;
    } else if (VAR_6[1] != '.')
     goto not_empty;
    else if (VAR_6[2])
     goto not_empty;
   }
  }
  FUNC_3(VAR_2);
 }
 return 1;

not_empty:
 FUNC_3(VAR_2);
 return 0;
}
