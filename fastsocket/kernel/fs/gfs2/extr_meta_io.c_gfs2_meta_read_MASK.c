
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct gfs2_trans {scalar_t__ tr_touched; } ;
struct gfs2_sbd {int sd_flags; } ;
struct gfs2_glock {struct gfs2_sbd* gl_sbd; } ;
struct buffer_head {int b_end_io; } ;
struct TYPE_2__ {struct gfs2_trans* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct gfs2_glock*,int ,int ) ;
 int FUNC_4 (struct gfs2_sbd*,struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int,struct buffer_head*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

int FUNC_11(struct gfs2_glock *VAR_8, u64 VAR_9, int VAR_10,
     struct buffer_head **VAR_11)
{
 struct gfs2_sbd *VAR_12 = VAR_8->gl_sbd;
 struct buffer_head *VAR_13;

 if (FUNC_8(FUNC_7(VAR_5, &VAR_12->sd_flags)))
  return -VAR_3;

 *VAR_11 = VAR_13 = FUNC_3(VAR_8, VAR_9, VAR_1);

 FUNC_5(VAR_13);
 if (FUNC_1(VAR_13)) {
  FUNC_9(VAR_13);
  return 0;
 }
 VAR_13->b_end_io = VAR_7;
 FUNC_2(VAR_13);
 FUNC_6(VAR_4 | (1 << VAR_0), VAR_13);
 if (!(VAR_10 & VAR_2))
  return 0;

 FUNC_10(VAR_13);
 if (FUNC_8(!FUNC_1(VAR_13))) {
  struct gfs2_trans *VAR_14 = VAR_6->journal_info;
  if (VAR_14 && VAR_14->tr_touched)
   FUNC_4(VAR_12, VAR_13);
  FUNC_0(VAR_13);
  return -VAR_3;
 }

 return 0;
}
