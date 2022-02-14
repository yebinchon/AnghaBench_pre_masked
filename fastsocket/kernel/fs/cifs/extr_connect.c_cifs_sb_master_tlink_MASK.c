
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct cifs_sb_info {struct tcon_link* master_tlink; } ;



__attribute__((used)) static inline struct tcon_link *
FUNC_0(struct cifs_sb_info *VAR_0)
{
 return VAR_0->master_tlink;
}
