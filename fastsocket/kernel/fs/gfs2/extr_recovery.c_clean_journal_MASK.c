
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct gfs2_sbd {TYPE_2__* sd_jdesc; int sd_vfs; } ;
struct gfs2_log_header_host {unsigned int lh_blkno; scalar_t__ lh_sequence; } ;
struct TYPE_4__ {void* mh_jid; void* mh_format; void* __pad0; void* mh_type; void* mh_magic; } ;
struct gfs2_log_header {void* lh_hash; void* lh_blkno; void* lh_flags; void* lh_sequence; TYPE_1__ lh_header; } ;
struct gfs2_jdesc {int jd_inode; } ;
struct TYPE_6__ {int i_blkbits; } ;
struct gfs2_inode {TYPE_3__ i_inode; } ;
struct buffer_head {int b_size; struct gfs2_log_header* b_data; int b_blocknr; int b_state; } ;
struct TYPE_5__ {unsigned int jd_jid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (unsigned int) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*,unsigned int,struct buffer_head*,int ) ;
 int FUNC_7 (struct gfs2_inode*) ;
 unsigned int FUNC_8 (char const*,int) ;
 int FUNC_9 (struct gfs2_sbd*,struct buffer_head*) ;
 int FUNC_10 (struct gfs2_sbd*,unsigned int*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct gfs2_log_header*,int ,int) ;
 struct buffer_head* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 scalar_t__ FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_18(struct gfs2_jdesc *VAR_5, struct gfs2_log_header_host *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5->jd_inode);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_5->jd_inode);
 unsigned int VAR_9;
 struct gfs2_log_header *VAR_10;
 u32 VAR_11;
 struct buffer_head *VAR_12;
 int VAR_13;
 struct buffer_head VAR_14 = { .b_state = 0, .b_blocknr = 0 };

 VAR_9 = VAR_6->lh_blkno;
 FUNC_10(VAR_8, &VAR_9);
 VAR_14.b_size = 1 << VAR_7->i_inode.i_blkbits;
 VAR_13 = FUNC_6(&VAR_7->i_inode, VAR_9, &VAR_14, 0);
 if (VAR_13)
  return VAR_13;
 if (!VAR_14.b_blocknr) {
  FUNC_7(VAR_7);
  return -VAR_0;
 }

 VAR_12 = FUNC_13(VAR_8->sd_vfs, VAR_14.b_blocknr);
 FUNC_11(VAR_12);
 FUNC_12(VAR_12->b_data, 0, VAR_12->b_size);
 FUNC_15(VAR_12);
 FUNC_3(VAR_12);
 FUNC_17(VAR_12);

 VAR_10 = (struct gfs2_log_header *)VAR_12->b_data;
 FUNC_12(VAR_10, 0, sizeof(struct gfs2_log_header));
 VAR_10->lh_header.mh_magic = FUNC_4(VAR_3);
 VAR_10->lh_header.mh_type = FUNC_4(VAR_4);
 VAR_10->lh_header.__pad0 = FUNC_5(0);
 VAR_10->lh_header.mh_format = FUNC_4(VAR_1);
 VAR_10->lh_header.mh_jid = FUNC_4(VAR_8->sd_jdesc->jd_jid);
 VAR_10->lh_sequence = FUNC_5(VAR_6->lh_sequence + 1);
 VAR_10->lh_flags = FUNC_4(VAR_2);
 VAR_10->lh_blkno = FUNC_4(VAR_9);
 VAR_11 = FUNC_8((const char *)VAR_10, sizeof(struct gfs2_log_header));
 VAR_10->lh_hash = FUNC_4(VAR_11);

 FUNC_14(VAR_12);
 if (FUNC_16(VAR_12))
  FUNC_9(VAR_8, VAR_12);
 FUNC_2(VAR_12);

 return VAR_13;
}
