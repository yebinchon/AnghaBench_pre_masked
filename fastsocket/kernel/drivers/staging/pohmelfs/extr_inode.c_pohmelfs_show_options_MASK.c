
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct pohmelfs_sb {scalar_t__ crypto_fail_unsupported; int mcache_timeout; int trans_max_pages; int crypto_thread_num; int trans_retries; int wait_on_page_timeout; int drop_scan_timeout; int trans_scan_timeout; int idx; } ;


 struct pohmelfs_sb* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct vfsmount *VAR_1)
{
 struct pohmelfs_sb *VAR_2 = FUNC_0(VAR_1->mnt_sb);

 FUNC_2(VAR_0, ",idx=%u", VAR_2->idx);
 FUNC_2(VAR_0, ",trans_scan_timeout=%u", FUNC_1(VAR_2->trans_scan_timeout));
 FUNC_2(VAR_0, ",drop_scan_timeout=%u", FUNC_1(VAR_2->drop_scan_timeout));
 FUNC_2(VAR_0, ",wait_on_page_timeout=%u", FUNC_1(VAR_2->wait_on_page_timeout));
 FUNC_2(VAR_0, ",trans_retries=%u", VAR_2->trans_retries);
 FUNC_2(VAR_0, ",crypto_thread_num=%u", VAR_2->crypto_thread_num);
 FUNC_2(VAR_0, ",trans_max_pages=%u", VAR_2->trans_max_pages);
 FUNC_2(VAR_0, ",mcache_timeout=%u", FUNC_1(VAR_2->mcache_timeout));
 if (VAR_2->crypto_fail_unsupported)
  FUNC_2(VAR_0, ",crypto_fail_unsupported");

 return 0;
}
