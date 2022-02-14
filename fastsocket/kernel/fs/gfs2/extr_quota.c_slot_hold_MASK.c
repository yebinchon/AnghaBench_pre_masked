
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int qd_slot_count; TYPE_1__* qd_gl; } ;
struct TYPE_2__ {struct gfs2_sbd* gl_sbd; } ;


 int FUNC_0 (struct gfs2_sbd*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_quota_data *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->qd_gl->gl_sbd;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_2, VAR_1->qd_slot_count);
 VAR_1->qd_slot_count++;
 FUNC_2(&VAR_0);
}
