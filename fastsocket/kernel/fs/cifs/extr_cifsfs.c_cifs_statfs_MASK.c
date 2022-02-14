
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kstatfs {scalar_t__ f_ffree; scalar_t__ f_files; int f_namelen; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_3__ {int Capability; } ;
struct cifs_tcon {TYPE_2__* ses; TYPE_1__ fsUnixInfo; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_4__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cifs_tcon*,struct kstatfs*) ;
 int FUNC_1 (int,struct cifs_tcon*,struct kstatfs*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cifs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int,struct cifs_tcon*,struct kstatfs*) ;
 struct cifs_tcon* FUNC_6 (struct cifs_sb_info*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct dentry *VAR_6, struct kstatfs *VAR_7)
{
 struct super_block *VAR_8 = VAR_6->d_sb;
 struct cifs_sb_info *VAR_9 = FUNC_2(VAR_8);
 struct cifs_tcon *VAR_10 = FUNC_6(VAR_9);
 int VAR_11 = -VAR_4;
 int VAR_12;

 VAR_12 = FUNC_4();

 VAR_7->f_type = VAR_2;
 VAR_7->f_namelen = VAR_5;
 VAR_7->f_files = 0;
 VAR_7->f_ffree = 0;




 if ((VAR_10->ses->capabilities & VAR_1) &&
     (VAR_3 & FUNC_7(VAR_10->fsUnixInfo.Capability)))
  VAR_11 = FUNC_1(VAR_12, VAR_10, VAR_7);





 if (VAR_11 && (VAR_10->ses->capabilities & VAR_0))
  VAR_11 = FUNC_0(VAR_12, VAR_10, VAR_7);






 if (VAR_11)
  VAR_11 = FUNC_5(VAR_12, VAR_10, VAR_7);

 FUNC_3(VAR_12);
 return 0;
}
