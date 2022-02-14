
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_bufdata {int bd_list; } ;
struct buffer_head {int * b_bdev; struct gfs2_bufdata* b_private; } ;
struct TYPE_2__ {int journal_info; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_sbd*) ;
 int FUNC_7 (struct buffer_head*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_12(struct gfs2_sbd *VAR_1, struct buffer_head *VAR_2)
{
 struct gfs2_bufdata *VAR_3;

 FUNC_10(VAR_2);
 FUNC_5(VAR_1);
 FUNC_1(VAR_2);
 VAR_3 = VAR_2->b_private;
 if (VAR_3) {
  if (!FUNC_9(&VAR_3->bd_list) && !FUNC_0(VAR_2))
   FUNC_8(&VAR_3->bd_list);
  else
   FUNC_7(VAR_2, VAR_0->journal_info, 0);
 }
 VAR_2->b_bdev = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(VAR_1);
 FUNC_11(VAR_2);
}
