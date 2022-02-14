
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union jffs2_device_node {int nsize; int type; void* mctime; void* name_crc; void* node_crc; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; int compr; void* csize; void* dsize; } ;
typedef int uint32_t ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_inode {int nsize; int type; void* mctime; void* name_crc; void* node_crc; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; int compr; void* csize; void* dsize; } ;
struct jffs2_raw_dirent {int nsize; int type; void* mctime; void* name_crc; void* node_crc; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; int compr; void* csize; void* dsize; } ;
struct jffs2_inode_info {int highest_version; int sem; int dents; struct jffs2_full_dnode* metadata; } ;
struct jffs2_full_dnode {int i_ino; int i_ctime; int i_mtime; int i_mode; int * i_op; int i_sb; } ;
struct jffs2_full_dirent {int i_ino; int i_ctime; int i_mtime; int i_mode; int * i_op; int i_sb; } ;
struct inode {int i_ino; int i_ctime; int i_mtime; int i_mode; int * i_op; int i_sb; } ;
struct TYPE_2__ {int len; union jffs2_device_node* name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct jffs2_full_dnode*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct jffs2_inode_info* FUNC_2 (struct jffs2_full_dnode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct jffs2_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (struct jffs2_full_dnode*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ,union jffs2_device_node*,int) ;
 int FUNC_11 (struct dentry*,struct jffs2_full_dnode*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct jffs2_full_dnode*,int ,int ) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (struct jffs2_sb_info*,struct jffs2_full_dnode*,int *) ;
 union jffs2_device_node* FUNC_16 () ;
 union jffs2_device_node* FUNC_17 () ;
 int FUNC_18 (struct jffs2_full_dnode*) ;
 int FUNC_19 (struct jffs2_sb_info*) ;
 int FUNC_20 (union jffs2_device_node*,int ) ;
 int VAR_8 ;
 int FUNC_21 (union jffs2_device_node*) ;
 int FUNC_22 (union jffs2_device_node*) ;
 int FUNC_23 (struct jffs2_full_dnode*) ;
 int FUNC_24 (struct jffs2_full_dnode*,struct jffs2_full_dnode*) ;
 struct jffs2_full_dnode* FUNC_25 (struct jffs2_full_dnode*,int,union jffs2_device_node*) ;
 int FUNC_26 (struct jffs2_sb_info*,int,int *,int ,int ) ;
 struct jffs2_full_dnode* FUNC_27 (struct jffs2_sb_info*,struct jffs2_inode_info*,union jffs2_device_node*,union jffs2_device_node*,int,int ) ;
 struct jffs2_full_dnode* FUNC_28 (struct jffs2_sb_info*,struct jffs2_inode_info*,union jffs2_device_node*,char*,int,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ) ;

__attribute__((used)) static int FUNC_32 (struct inode *VAR_9, struct dentry *VAR_10, int VAR_11, dev_t VAR_12)
{
 struct jffs2_inode_info *VAR_13, *VAR_14;
 struct jffs2_sb_info *VAR_15;
 struct inode *VAR_16;
 struct jffs2_raw_inode *VAR_17;
 struct jffs2_raw_dirent *VAR_18;
 struct jffs2_full_dnode *VAR_19;
 struct jffs2_full_dirent *VAR_20;
 int VAR_21;
 union jffs2_device_node VAR_22;
 int VAR_23 = 0;
 uint32_t VAR_24;
 int VAR_25;

 if (!FUNC_31(VAR_12))
  return -VAR_1;

 VAR_17 = FUNC_17();
 if (!VAR_17)
  return -VAR_2;

 VAR_15 = FUNC_3(VAR_9->i_sb);

 if (FUNC_6(VAR_11) || FUNC_7(VAR_11))
  VAR_23 = FUNC_20(&VAR_22, VAR_12);




 VAR_21 = VAR_10->d_name.len;
 VAR_25 = FUNC_26(VAR_15, sizeof(*VAR_17) + VAR_23, &VAR_24,
      VAR_0, VAR_6);

 if (VAR_25) {
  FUNC_22(VAR_17);
  return VAR_25;
 }

 VAR_16 = FUNC_25(VAR_9, VAR_11, VAR_17);

 if (FUNC_0(VAR_16)) {
  FUNC_22(VAR_17);
  FUNC_19(VAR_15);
  return FUNC_5(VAR_16);
 }
 VAR_16->i_op = &VAR_8;
 FUNC_13(VAR_16, VAR_16->i_mode, VAR_12);

 VAR_13 = FUNC_2(VAR_16);

 VAR_17->dsize = VAR_17->csize = FUNC_9(VAR_23);
 VAR_17->totlen = FUNC_9(sizeof(*VAR_17) + VAR_23);
 VAR_17->hdr_crc = FUNC_9(FUNC_10(0, VAR_17, sizeof(struct jffs2_unknown_node)-4));

 VAR_17->compr = VAR_3;
 VAR_17->data_crc = FUNC_9(FUNC_10(0, &VAR_22, VAR_23));
 VAR_17->node_crc = FUNC_9(FUNC_10(0, VAR_17, sizeof(*VAR_17)-8));

 VAR_19 = FUNC_28(VAR_15, VAR_13, VAR_17, (char *)&VAR_22, VAR_23, VAR_0);

 FUNC_22(VAR_17);

 if (FUNC_0(VAR_19)) {

  FUNC_30(&VAR_13->sem);
  FUNC_19(VAR_15);
  FUNC_18(VAR_16);
  return FUNC_5(VAR_19);
 }



 VAR_13->metadata = VAR_19;
 FUNC_30(&VAR_13->sem);

 FUNC_19(VAR_15);

 VAR_25 = FUNC_24(VAR_16, VAR_9);
 if (VAR_25) {
  FUNC_18(VAR_16);
  return VAR_25;
 }
 VAR_25 = FUNC_23(VAR_16);
 if (VAR_25) {
  FUNC_18(VAR_16);
  return VAR_25;
 }

 VAR_25 = FUNC_26(VAR_15, sizeof(*VAR_18)+VAR_21, &VAR_24,
      VAR_0, FUNC_4(VAR_21));
 if (VAR_25) {

  FUNC_18(VAR_16);
  return VAR_25;
 }

 VAR_18 = FUNC_16();
 if (!VAR_18) {

  FUNC_19(VAR_15);
  FUNC_18(VAR_16);
  return -VAR_2;
 }

 VAR_14 = FUNC_2(VAR_9);
 FUNC_29(&VAR_14->sem);

 VAR_18->magic = FUNC_8(VAR_4);
 VAR_18->nodetype = FUNC_8(VAR_5);
 VAR_18->totlen = FUNC_9(sizeof(*VAR_18) + VAR_21);
 VAR_18->hdr_crc = FUNC_9(FUNC_10(0, VAR_18, sizeof(struct jffs2_unknown_node)-4));

 VAR_18->pino = FUNC_9(VAR_9->i_ino);
 VAR_18->version = FUNC_9(++VAR_14->highest_version);
 VAR_18->ino = FUNC_9(VAR_16->i_ino);
 VAR_18->mctime = FUNC_9(FUNC_12());
 VAR_18->nsize = VAR_21;


 VAR_18->type = (VAR_11 & VAR_7) >> 12;

 VAR_18->node_crc = FUNC_9(FUNC_10(0, VAR_18, sizeof(*VAR_18)-8));
 VAR_18->name_crc = FUNC_9(FUNC_10(0, VAR_10->d_name.name, VAR_21));

 VAR_20 = FUNC_27(VAR_15, VAR_14, VAR_18, VAR_10->d_name.name, VAR_21, VAR_0);

 if (FUNC_0(VAR_20)) {


  FUNC_19(VAR_15);
  FUNC_21(VAR_18);
  FUNC_30(&VAR_14->sem);
  FUNC_18(VAR_16);
  return FUNC_5(VAR_20);
 }

 VAR_9->i_mtime = VAR_9->i_ctime = FUNC_1(FUNC_14(VAR_18->mctime));

 FUNC_21(VAR_18);



 FUNC_15(VAR_15, VAR_20, &VAR_14->dents);

 FUNC_30(&VAR_14->sem);
 FUNC_19(VAR_15);

 FUNC_11(VAR_10, VAR_16);

 return 0;
}
