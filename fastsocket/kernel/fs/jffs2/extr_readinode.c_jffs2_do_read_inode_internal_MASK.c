
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_readinode_info {scalar_t__ latest_ref; size_t mctime_ver; scalar_t__ latest_mctime; int fds; TYPE_2__* mdata_tn; int tn_root; } ;
struct jffs2_raw_inode {int mode; void* csize; void* dsize; void* isize; void* mtime; void* ctime; void* version; void* node_crc; void* uid; void* gid; void* atime; } ;
struct jffs2_inode_info {char* target; TYPE_1__* inocache; int fragtree; TYPE_5__* metadata; int sem; int dents; } ;
typedef int rii ;
struct TYPE_11__ {scalar_t__ raw; } ;
struct TYPE_10__ {TYPE_5__* node; } ;
struct TYPE_9__ {TYPE_5__* fn; } ;
struct TYPE_8__ {int ino; scalar_t__ state; int pino_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_7 ;




 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,struct jffs2_raw_inode*,int) ;
 int FUNC_7 (char*,...) ;
 TYPE_4__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 size_t FUNC_10 (void*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_readinode_info*) ;
 int FUNC_13 (struct jffs2_inode_info*) ;
 int FUNC_14 (struct jffs2_sb_info*,struct jffs2_inode_info*) ;
 int FUNC_15 (struct jffs2_sb_info*,int,size_t,size_t*,char*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_readinode_info*) ;
 int FUNC_21 (struct jffs2_sb_info*,TYPE_2__*) ;
 int FUNC_22 (struct jffs2_sb_info*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_23 (struct jffs2_sb_info*,int *,size_t) ;
 int FUNC_24 (char*) ;
 char* FUNC_25 (size_t,int ) ;
 int FUNC_26 (struct jffs2_readinode_info*,int ,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (int) ;

__attribute__((used)) static int FUNC_30(struct jffs2_sb_info *VAR_12,
     struct jffs2_inode_info *VAR_13,
     struct jffs2_raw_inode *VAR_14)
{
 struct jffs2_readinode_info VAR_15;
 uint32_t VAR_16, VAR_17;
 size_t VAR_18;
 int VAR_19;

 FUNC_7("ino #%u pino/nlink is %d\n", VAR_13->inocache->ino,
        VAR_13->inocache->pino_nlink);

 FUNC_26(&VAR_15, 0, sizeof(VAR_15));


 VAR_19 = FUNC_20(VAR_12, VAR_13, &VAR_15);

 if (VAR_19) {
  FUNC_0("cannot read nodes for ino %u, returned error is %d\n", VAR_13->inocache->ino, VAR_19);
  if (VAR_13->inocache->state == VAR_6)
   FUNC_22(VAR_12, VAR_13->inocache, VAR_3);
  return VAR_19;
 }

 VAR_19 = FUNC_12(VAR_12, VAR_13, &VAR_15);
 if (VAR_19) {
  FUNC_0("Failed to build final fragtree for inode #%u: error %d\n",
       VAR_13->inocache->ino, VAR_19);
  if (VAR_13->inocache->state == VAR_6)
   FUNC_22(VAR_12, VAR_13->inocache, VAR_3);
  FUNC_19(&VAR_15.tn_root);

  if (VAR_15.mdata_tn) {
   FUNC_16(VAR_15.mdata_tn->fn);
   FUNC_18(VAR_15.mdata_tn);
   VAR_15.mdata_tn = ((void*)0);
  }
  return VAR_19;
 }

 if (VAR_15.mdata_tn) {
  if (VAR_15.mdata_tn->fn->raw == VAR_15.latest_ref) {
   VAR_13->metadata = VAR_15.mdata_tn->fn;
   FUNC_18(VAR_15.mdata_tn);
  } else {
   FUNC_21(VAR_12, VAR_15.mdata_tn);
  }
  VAR_15.mdata_tn = ((void*)0);
 }

 VAR_13->dents = VAR_15.fds;

 FUNC_13(VAR_13);

 if (FUNC_29(!VAR_15.latest_ref)) {

  if (VAR_13->inocache->ino != 1) {
   FUNC_2("no data nodes found for ino #%u\n", VAR_13->inocache->ino);
   if (!VAR_15.fds) {
    if (VAR_13->inocache->state == VAR_6)
     FUNC_22(VAR_12, VAR_13->inocache, VAR_3);
    return -VAR_0;
   }
   FUNC_1("but it has children so we fake some modes for it\n");
  }
  VAR_14->mode = FUNC_5(130|VAR_9|VAR_10|VAR_11);
  VAR_14->version = FUNC_4(0);
  VAR_14->atime = VAR_14->ctime = VAR_14->mtime = FUNC_4(0);
  VAR_14->isize = FUNC_4(0);
  VAR_14->gid = FUNC_3(0);
  VAR_14->uid = FUNC_3(0);
  if (VAR_13->inocache->state == VAR_6)
   FUNC_22(VAR_12, VAR_13->inocache, VAR_5);
  return 0;
 }

 VAR_19 = FUNC_15(VAR_12, FUNC_28(VAR_15.latest_ref), sizeof(*VAR_14), &VAR_18, (void *)VAR_14);
 if (VAR_19 || VAR_18 != sizeof(*VAR_14)) {
  FUNC_0("failed to read from flash: error %d, %zd of %zd bytes read\n",
   VAR_19, VAR_18, sizeof(*VAR_14));

  FUNC_27(&VAR_13->sem);
  FUNC_14(VAR_12, VAR_13);
  return VAR_19?VAR_19:-VAR_0;
 }

 VAR_16 = FUNC_6(0, VAR_14, sizeof(*VAR_14)-8);
 if (VAR_16 != FUNC_10(VAR_14->node_crc)) {
  FUNC_0("CRC failed for read_inode of inode %u at physical location 0x%x\n",
   VAR_13->inocache->ino, FUNC_28(VAR_15.latest_ref));
  FUNC_27(&VAR_13->sem);
  FUNC_14(VAR_12, VAR_13);
  return -VAR_0;
 }

 switch(FUNC_11(VAR_14->mode) & VAR_8) {
 case 130:
  if (VAR_15.mctime_ver > FUNC_10(VAR_14->version)) {


   VAR_14->ctime = VAR_14->mtime = FUNC_4(VAR_15.latest_mctime);
  }
  break;


 case 128:

  VAR_17 = FUNC_23(VAR_12, &VAR_13->fragtree, FUNC_10(VAR_14->isize));
  if (VAR_17 != FUNC_10(VAR_14->isize)) {
   FUNC_2("Truncating ino #%u to %d bytes failed because it only had %d bytes to start with!\n",
          VAR_13->inocache->ino, FUNC_10(VAR_14->isize), VAR_17);
   VAR_14->isize = FUNC_4(VAR_17);
  }
  break;

 case 129:




  if (!FUNC_10(VAR_14->isize))
   VAR_14->isize = VAR_14->dsize;

  if (VAR_13->inocache->state != VAR_4) {



   VAR_13->target = FUNC_25(FUNC_10(VAR_14->csize) + 1, VAR_2);
   if (!VAR_13->target) {
    FUNC_0("can't allocate %d bytes of memory for the symlink target path cache\n", FUNC_10(VAR_14->csize));
    FUNC_27(&VAR_13->sem);
    FUNC_14(VAR_12, VAR_13);
    return -VAR_1;
   }

   VAR_19 = FUNC_15(VAR_12, FUNC_28(VAR_15.latest_ref) + sizeof(*VAR_14),
      FUNC_10(VAR_14->csize), &VAR_18, (char *)VAR_13->target);

   if (VAR_19 || VAR_18 != FUNC_10(VAR_14->csize)) {
    if (VAR_18 != FUNC_10(VAR_14->csize))
     VAR_19 = -VAR_0;
    FUNC_24(VAR_13->target);
    VAR_13->target = ((void*)0);
    FUNC_27(&VAR_13->sem);
    FUNC_14(VAR_12, VAR_13);
    return -VAR_19;
   }

   VAR_13->target[FUNC_10(VAR_14->csize)] = '\0';
   FUNC_7("symlink's target '%s' cached\n", VAR_13->target);
  }



 case 132:
 case 131:


  if (VAR_13->metadata) {
   FUNC_0("Argh. Special inode #%u with mode 0%o had metadata node\n",
          VAR_13->inocache->ino, FUNC_11(VAR_14->mode));
   FUNC_27(&VAR_13->sem);
   FUNC_14(VAR_12, VAR_13);
   return -VAR_0;
  }
  if (!FUNC_8(&VAR_13->fragtree)) {
   FUNC_0("Argh. Special inode #%u with mode 0%o has no fragments\n",
          VAR_13->inocache->ino, FUNC_11(VAR_14->mode));
   FUNC_27(&VAR_13->sem);
   FUNC_14(VAR_12, VAR_13);
   return -VAR_0;
  }

  if (FUNC_9(FUNC_8(&VAR_13->fragtree))) {
   FUNC_0("Argh. Special inode #%u with mode 0x%x had more than one node\n",
          VAR_13->inocache->ino, FUNC_11(VAR_14->mode));

   FUNC_27(&VAR_13->sem);
   FUNC_14(VAR_12, VAR_13);
   return -VAR_0;
  }

  VAR_13->metadata = FUNC_8(&VAR_13->fragtree)->node;
  FUNC_17(FUNC_8(&VAR_13->fragtree));
  VAR_13->fragtree = VAR_7;
  break;
 }
 if (VAR_13->inocache->state == VAR_6)
  FUNC_22(VAR_12, VAR_13->inocache, VAR_5);

 return 0;
}
