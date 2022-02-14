
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int sb_bsize; } ;
struct gfs2_sbd {int sd_log_in_flight; TYPE_2__* sd_vfs; TYPE_1__ sd_sb; int sd_log_flush_head; } ;
struct buffer_head {int b_state; int b_end_io; struct buffer_head* b_private; int b_bdev; int b_size; int b_blocknr; int b_page; int b_count; } ;
struct TYPE_4__ {int s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct gfs2_sbd*,int ) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct buffer_head*,int ,int ) ;
 int FUNC_7 (int ,struct buffer_head*) ;

__attribute__((used)) static void FUNC_8(struct gfs2_sbd *VAR_7, struct buffer_head *VAR_8)
{
 u64 VAR_9 = FUNC_3(VAR_7, VAR_7->sd_log_flush_head);
 struct buffer_head *VAR_10;

 VAR_10 = FUNC_5(VAR_5, VAR_3);
 FUNC_1(&VAR_10->b_count, 1);
 VAR_10->b_state = (1 << VAR_1) | (1 << VAR_2) | (1 << VAR_0);
 FUNC_6(VAR_10, VAR_8->b_page, FUNC_2(VAR_8));
 VAR_10->b_blocknr = VAR_9;
 VAR_10->b_size = VAR_7->sd_sb.sb_bsize;
 VAR_10->b_bdev = VAR_7->sd_vfs->s_bdev;
 VAR_10->b_private = VAR_8;
 VAR_10->b_end_io = VAR_6;

 FUNC_4(VAR_7);
 FUNC_0(&VAR_7->sd_log_in_flight);

 FUNC_7(VAR_4, VAR_10);
}
