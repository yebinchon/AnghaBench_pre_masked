
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_xattr_datum {int name_len; int value_len; size_t data_crc; char* xname; char* xvalue; int hashkey; int xprefix; int xid; int xindex; int flags; int node; } ;
struct jffs2_sb_info {size_t xdatum_mem_usage; int * xattrindex; } ;
struct jffs2_raw_xattr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,size_t,size_t,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (struct jffs2_sb_info*,int,size_t,size_t*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_13(struct jffs2_sb_info *VAR_7, struct jffs2_xattr_datum *VAR_8)
{

 char *VAR_9;
 size_t VAR_10;
 uint32_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 FUNC_0(FUNC_10(VAR_8->node) != VAR_5);
 FUNC_0(!FUNC_8(&VAR_8->xindex));
 retry:
 VAR_12 = VAR_8->name_len + 1 + VAR_8->value_len;
 VAR_9 = FUNC_6(VAR_12, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_14 = FUNC_4(VAR_7, FUNC_11(VAR_8->node)+sizeof(struct jffs2_raw_xattr),
          VAR_12, &VAR_10, VAR_9);

 if (VAR_14 || VAR_12!=VAR_10) {
  FUNC_1("jffs2_flash_read() returned %d, request=%d, readlen=%zu, at %#08x\n",
         VAR_14, VAR_12, VAR_10, FUNC_11(VAR_8->node));
  FUNC_5(VAR_9);
  return VAR_14 ? VAR_14 : -VAR_0;
 }

 VAR_9[VAR_8->name_len] = '\0';
 VAR_11 = FUNC_2(0, VAR_9, VAR_12);
 if (VAR_11 != VAR_8->data_crc) {
  FUNC_1("node CRC failed (JFFS2_NODETYPE_XREF)"
         " at %#08x, read: 0x%08x calculated: 0x%08x\n",
         FUNC_11(VAR_8->node), VAR_8->data_crc, VAR_11);
  FUNC_5(VAR_9);
  VAR_8->flags |= VAR_4;
  return VAR_0;
 }

 VAR_8->flags |= VAR_3;
 VAR_8->xname = VAR_9;
 VAR_8->xvalue = VAR_9 + VAR_8->name_len+1;

 VAR_7->xdatum_mem_usage += VAR_12;

 VAR_8->hashkey = FUNC_12(VAR_8->xprefix, VAR_8->xname, VAR_8->xvalue, VAR_8->value_len);
 VAR_13 = VAR_8->hashkey % VAR_6;
 FUNC_7(&VAR_8->xindex, &VAR_7->xattrindex[VAR_13]);
 if (!VAR_15) {
  VAR_15 = 1;
  FUNC_9(VAR_7);
  if (!VAR_8->xname)
   goto retry;
 }

 FUNC_3("success on loading xdatum (xid=%u, xprefix=%u, xname='%s')\n",
    VAR_8->xid, VAR_8->xprefix, VAR_8->xname);

 return 0;
}
