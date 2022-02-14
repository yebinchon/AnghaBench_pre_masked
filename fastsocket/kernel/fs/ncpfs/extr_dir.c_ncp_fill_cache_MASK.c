
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qstr {int len; int * name; int hash; } ;
struct TYPE_7__ {int NSCreator; int nameLen; int entryName; } ;
struct ncp_entry_info {void* ino; scalar_t__ opened; TYPE_2__ i; } ;
struct ncp_cache_control {scalar_t__ fpos; size_t idx; int ofs; scalar_t__ filled; int valid; TYPE_5__* cache; scalar_t__ page; } ;
struct inode {int i_sb; int i_data; void* i_ino; } ;
struct TYPE_6__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_1__ f_path; } ;
struct TYPE_8__ {int len; scalar_t__ name; } ;
struct dentry {void* d_fsdata; struct inode* d_inode; TYPE_4__* d_op; TYPE_3__ d_name; } ;
typedef void* ino_t ;
typedef scalar_t__ (* filldir_t ) (void*,int *,int,scalar_t__,void*,int ) ;
typedef int __u8 ;
typedef int __name ;
struct TYPE_10__ {struct dentry** dentry; } ;
struct TYPE_9__ {scalar_t__ (* d_hash ) (struct dentry*,struct qstr*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_4 (struct dentry*,struct qstr*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 void* FUNC_7 (struct dentry*,struct qstr*) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 void* FUNC_10 (int ,int) ;
 TYPE_5__* FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,int *,int ) ;
 TYPE_4__ VAR_3 ;
 struct inode* FUNC_14 (int ,struct ncp_entry_info*) ;
 int FUNC_15 (struct dentry*) ;
 int FUNC_16 (struct inode*,int ) ;
 int FUNC_17 (struct inode*,struct ncp_entry_info*) ;
 scalar_t__ FUNC_18 (int ,int *,int*,int ,int ,int) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (struct dentry*,struct qstr*) ;
 int FUNC_21 (scalar_t__) ;

__attribute__((used)) static int
FUNC_22(struct file *VAR_4, void *VAR_5, filldir_t VAR_6,
  struct ncp_cache_control *VAR_7, struct ncp_entry_info *VAR_8)
{
 struct dentry *VAR_9, *VAR_10 = VAR_4->f_path.dentry;
 struct inode *VAR_11, *VAR_12 = VAR_10->d_inode;
 struct ncp_cache_control VAR_13 = *VAR_7;
 struct qstr VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;
 ino_t VAR_17 = 0;
 __u8 VAR_18[VAR_2 + 1];

 VAR_14.len = sizeof(VAR_18);
 if (FUNC_18(FUNC_0(VAR_12), VAR_18, &VAR_14.len,
   VAR_8->i.entryName, VAR_8->i.nameLen,
   !FUNC_16(VAR_12, VAR_8->i.NSCreator)))
  return 1;

 VAR_14.name = VAR_18;
 VAR_14.hash = FUNC_8(VAR_14.name, VAR_14.len);

 if (VAR_10->d_op && VAR_10->d_op->d_hash)
  if (VAR_10->d_op->d_hash(VAR_10, &VAR_14) != 0)
   goto end_advance;

 VAR_9 = FUNC_4(VAR_10, &VAR_14);

 if (!VAR_9) {
  VAR_9 = FUNC_2(VAR_10, &VAR_14);
  if (!VAR_9)
   goto end_advance;
 } else {
  VAR_16 = 1;
  FUNC_13((char *) VAR_9->d_name.name, VAR_14.name,
       VAR_9->d_name.len);
 }

 if (!VAR_9->d_inode) {
  VAR_8->opened = 0;
  VAR_8->ino = FUNC_10(VAR_12->i_sb, 2);
  VAR_11 = FUNC_14(VAR_12->i_sb, VAR_8);
  if (VAR_11) {
   VAR_9->d_op = &VAR_3;
   FUNC_3(VAR_9, VAR_11);
   if (!VAR_16)
    FUNC_5(VAR_9);
  }
 } else
  FUNC_17(VAR_9->d_inode, VAR_8);

 if (VAR_9->d_inode) {
  VAR_17 = VAR_9->d_inode->i_ino;
  VAR_9->d_fsdata = (void *) VAR_13.fpos;
  FUNC_15(VAR_9);
 }

 if (VAR_13.idx >= VAR_1) {
  if (VAR_13.page) {
   FUNC_12(VAR_13.page);
   FUNC_1(VAR_13.page);
   FUNC_21(VAR_13.page);
   FUNC_19(VAR_13.page);
  }
  VAR_13.cache = ((void*)0);
  VAR_13.idx -= VAR_1;
  VAR_13.ofs += 1;
  VAR_13.page = FUNC_9(&VAR_12->i_data, VAR_13.ofs);
  if (VAR_13.page)
   VAR_13.cache = FUNC_11(VAR_13.page);
 }
 if (VAR_13.cache) {
  VAR_13.cache->dentry[VAR_13.idx] = VAR_9;
  VAR_15 = 1;
 }
 FUNC_6(VAR_9);
end_advance:
 if (!VAR_15)
  VAR_13.valid = 0;
 if (!VAR_13.filled && (VAR_13.fpos == VAR_4->f_pos)) {
  if (!VAR_17)
   VAR_17 = FUNC_7(VAR_10, &VAR_14);
  if (!VAR_17)
   VAR_17 = FUNC_10(VAR_12->i_sb, 2);
  VAR_13.filled = VAR_6(VAR_5, VAR_14.name, VAR_14.len,
         VAR_4->f_pos, VAR_17, VAR_0);
  if (!VAR_13.filled)
   VAR_4->f_pos += 1;
 }
 VAR_13.fpos += 1;
 VAR_13.idx += 1;
 *VAR_7 = VAR_13;
 return (VAR_13.valid || !VAR_13.filled);
}
