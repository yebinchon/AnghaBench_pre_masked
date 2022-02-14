
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {int sd_log_in_flight; int sd_vfs; int sd_log_flush_head; } ;
struct buffer_head {int b_end_io; struct gfs2_sbd* b_private; int b_size; int b_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_sbd*,int ) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int VAR_0 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct buffer_head* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_8(struct gfs2_sbd *VAR_1)
{
 u64 VAR_2 = FUNC_2(VAR_1, VAR_1->sd_log_flush_head);
 struct buffer_head *VAR_3;

 VAR_3 = FUNC_6(VAR_1->sd_vfs, VAR_2);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3->b_data, 0, VAR_3->b_size);
 FUNC_7(VAR_3);
 FUNC_1(VAR_3);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->sd_log_in_flight);
 VAR_3->b_private = VAR_1;
 VAR_3->b_end_io = VAR_0;

 return VAR_3;
}
