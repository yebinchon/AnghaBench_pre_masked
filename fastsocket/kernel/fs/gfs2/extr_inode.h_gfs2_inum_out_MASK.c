
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_no_addr; int i_no_formal_ino; } ;
struct TYPE_2__ {void* no_addr; void* no_formal_ino; } ;
struct gfs2_dirent {TYPE_1__ de_inum; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(const struct gfs2_inode *VAR_0,
     struct gfs2_dirent *VAR_1)
{
 VAR_1->de_inum.no_formal_ino = FUNC_0(VAR_0->i_no_formal_ino);
 VAR_1->de_inum.no_addr = FUNC_0(VAR_0->i_no_addr);
}
