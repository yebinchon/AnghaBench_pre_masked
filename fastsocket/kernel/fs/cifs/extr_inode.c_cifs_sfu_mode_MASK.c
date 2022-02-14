
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_fattr {int cf_mode; } ;
typedef int ssize_t ;
typedef int __u32 ;
typedef int __le32 ;


 int FUNC_0 (int,struct cifs_tcon*,unsigned char const*,char*,char*,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 int FUNC_2 (struct tcon_link*) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 (struct tcon_link*) ;
 struct tcon_link* FUNC_5 (struct cifs_sb_info*) ;
 int FUNC_6 (int ) ;
 struct cifs_tcon* FUNC_7 (struct tcon_link*) ;

__attribute__((used)) static int FUNC_8(struct cifs_fattr *VAR_3, const unsigned char *VAR_4,
    struct cifs_sb_info *VAR_5, int VAR_6)
{
 return -VAR_1;

}
