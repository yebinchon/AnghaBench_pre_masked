
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_ail_lock; } ;
struct gfs2_bufdata {TYPE_1__* bd_ail; int bd_ail_st_list; } ;
struct buffer_head {struct gfs2_bufdata* b_private; } ;
struct TYPE_4__ {int journal_info; } ;
struct TYPE_3__ {int ai_ail2_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_sbd*,int ) ;
 int FUNC_5 (struct gfs2_sbd*,struct buffer_head*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct gfs2_bufdata*,int) ;

void FUNC_11(struct gfs2_sbd *VAR_1, struct buffer_head *VAR_2)
{
 struct gfs2_bufdata *VAR_3;

 FUNC_0(!VAR_0->journal_info);

 FUNC_2(VAR_2);
 if (FUNC_9(VAR_2))
  FUNC_4(VAR_1, 0);
 if (!FUNC_1(VAR_2))
  FUNC_5(VAR_1, VAR_2);
 VAR_3 = VAR_2->b_private;



 FUNC_7(&VAR_1->sd_ail_lock);
 if (VAR_3->bd_ail)
  FUNC_6(&VAR_3->bd_ail_st_list, &VAR_3->bd_ail->ai_ail2_list);
 FUNC_8(&VAR_1->sd_ail_lock);
 FUNC_3(VAR_2);
 FUNC_10(VAR_3, 1);
}
