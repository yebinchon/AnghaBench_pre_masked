
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_collect {unsigned int expected_pages; int pg_first; scalar_t__ length; scalar_t__ nr_pages; int * bio; struct inode* inode; int req_q; struct exofs_sb_info* sbi; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct exofs_sb_info {int s_dev; } ;
struct TYPE_2__ {struct exofs_sb_info* s_fs_info; } ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct page_collect *VAR_0, unsigned VAR_1,
  struct inode *VAR_2)
{
 struct exofs_sb_info *VAR_3 = VAR_2->i_sb->s_fs_info;

 VAR_0->sbi = VAR_3;
 VAR_0->req_q = FUNC_1(VAR_3->s_dev);
 VAR_0->inode = VAR_2;
 VAR_0->expected_pages = VAR_1;

 VAR_0->bio = ((void*)0);
 VAR_0->nr_pages = 0;
 VAR_0->length = 0;
 VAR_0->pg_first = -1;

 FUNC_0("_pcol_init ino=0x%lx expected_pages=%u\n", VAR_2->i_ino,
       VAR_1);
}
