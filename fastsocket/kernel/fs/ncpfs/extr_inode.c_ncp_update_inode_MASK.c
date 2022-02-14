
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entryName; int attributes; } ;
struct ncp_entry_info {TYPE_1__ i; int file_handle; int access; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int dirEntNum; int volNumber; int file_handle; int access; int nwattr; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct inode*,struct ncp_entry_info*) ;

void FUNC_4(struct inode *VAR_0, struct ncp_entry_info *VAR_1)
{
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_0)->nwattr = VAR_1->i.attributes;
 FUNC_1(VAR_0)->access = VAR_1->access;
 FUNC_2(FUNC_1(VAR_0)->file_handle, VAR_1->file_handle,
   sizeof(VAR_1->file_handle));
 FUNC_0("ncp_update_inode: updated %s, volnum=%d, dirent=%u\n",
  VAR_1->i.entryName, FUNC_1(VAR_0)->volNumber,
  FUNC_1(VAR_0)->dirEntNum);
}
