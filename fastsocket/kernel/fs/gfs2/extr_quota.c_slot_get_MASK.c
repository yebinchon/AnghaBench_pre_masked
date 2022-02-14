
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {unsigned int sd_quota_chunks; unsigned char** sd_quota_bitmap; unsigned int sd_quota_slots; } ;
struct gfs2_quota_data {unsigned int qd_slot; int qd_slot_count; TYPE_1__* qd_gl; } ;
struct TYPE_2__ {struct gfs2_sbd* gl_sbd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gfs2_quota_data *VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_3->qd_gl->gl_sbd;
 unsigned int VAR_5, VAR_6 = 0, VAR_7;
 unsigned char VAR_8 = 0;

 FUNC_0(&VAR_2);

 if (VAR_3->qd_slot_count++) {
  FUNC_1(&VAR_2);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->sd_quota_chunks; VAR_5++)
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_8 = VAR_4->sd_quota_bitmap[VAR_5][VAR_6];
   if (VAR_8 != 0xFF)
    goto found;
  }

 goto fail;

found:
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  if (!(VAR_8 & (1 << VAR_7)))
   break;
 VAR_3->qd_slot = VAR_5 * (8 * VAR_1) + VAR_6 * 8 + VAR_7;

 if (VAR_3->qd_slot >= VAR_4->sd_quota_slots)
  goto fail;

 VAR_4->sd_quota_bitmap[VAR_5][VAR_6] |= 1 << VAR_7;

 FUNC_1(&VAR_2);

 return 0;

fail:
 VAR_3->qd_slot_count--;
 FUNC_1(&VAR_2);
 return -VAR_0;
}
