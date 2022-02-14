
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_bitmap; } ;
struct gfs2_quota_data {int qd_slot; int qd_slot_count; TYPE_1__* qd_gl; } ;
struct TYPE_2__ {struct gfs2_sbd* gl_sbd; } ;


 int FUNC_0 (struct gfs2_sbd*,int ) ;
 int FUNC_1 (struct gfs2_sbd*,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gfs2_quota_data *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->qd_gl->gl_sbd;

 FUNC_2(&VAR_0);
 FUNC_0(VAR_2, VAR_1->qd_slot_count);
 if (!--VAR_1->qd_slot_count) {
  FUNC_1(VAR_2, VAR_2->sd_quota_bitmap, VAR_1->qd_slot, 0);
  VAR_1->qd_slot = -1;
 }
 FUNC_3(&VAR_0);
}
