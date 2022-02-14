
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_1(struct seq_file *VAR_2, struct cifs_sb_info *VAR_3)
{
 FUNC_0(VAR_2, ",cache=");

 if (VAR_3->mnt_cifs_flags & VAR_1)
  FUNC_0(VAR_2, "strict");
 else if (VAR_3->mnt_cifs_flags & VAR_0)
  FUNC_0(VAR_2, "none");
 else
  FUNC_0(VAR_2, "loose");
}
