
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_enc_idx_entry {int flags; } ;
struct v4l2_enc_idx {int entries; struct v4l2_enc_idx_entry* entry; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int pgm_info_write_idx; int pgm_info_read_idx; struct v4l2_enc_idx_entry* pgm_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5, struct v4l2_enc_idx *VAR_6)
{
 struct ivtv *VAR_7 = ((struct ivtv_open_id *)VAR_5)->itv;
 struct v4l2_enc_idx_entry *VAR_8 = VAR_6->entry;
 int VAR_9;
 int VAR_10;

 VAR_9 = (VAR_7->pgm_info_write_idx + VAR_0 - VAR_7->pgm_info_read_idx) %
    VAR_0;
 if (VAR_9 > VAR_1)
  VAR_9 = VAR_1;
 VAR_6->entries = 0;
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  *VAR_8 = VAR_7->pgm_info[(VAR_7->pgm_info_read_idx + VAR_10) % VAR_0];
  if ((VAR_8->flags & VAR_3) <= VAR_2) {
   VAR_6->entries++;
   VAR_8++;
  }
 }
 VAR_7->pgm_info_read_idx = (VAR_7->pgm_info_read_idx + VAR_6->entries) % VAR_0;
 return 0;
}
