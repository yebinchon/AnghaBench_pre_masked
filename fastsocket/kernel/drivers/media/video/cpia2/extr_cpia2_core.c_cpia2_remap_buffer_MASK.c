
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; } ;
struct camera_data {unsigned long frame_size; unsigned long num_frames; int mmapped; int busy_lock; scalar_t__ frame_buffer; int present; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

int FUNC_5(struct camera_data *VAR_7, struct vm_area_struct *VAR_8)
{
 const char *VAR_9 = (const char *)VAR_8->vm_start;
 unsigned long VAR_10 = VAR_8->vm_end-VAR_8->vm_start;
 unsigned long VAR_11 = VAR_8->vm_pgoff << VAR_5;
 unsigned long VAR_12 = (unsigned long) VAR_9;
 unsigned long VAR_13, VAR_14;

 if (!VAR_7)
  return -VAR_2;

 FUNC_0("mmap offset:%ld size:%ld\n", VAR_11, VAR_10);


 if (FUNC_2(&VAR_7->busy_lock))
  return -VAR_3;

 if (!VAR_7->present) {
  FUNC_3(&VAR_7->busy_lock);
  return -VAR_2;
 }

 if (VAR_10 > VAR_7->frame_size*VAR_7->num_frames ||
     (VAR_11 % VAR_7->frame_size) != 0 ||
     (VAR_11+VAR_10 > VAR_7->frame_size*VAR_7->num_frames)) {
  FUNC_3(&VAR_7->busy_lock);
  return -VAR_1;
 }

 VAR_14 = ((unsigned long) (VAR_7->frame_buffer)) + VAR_11;
 while (VAR_10 > 0) {
  VAR_13 = FUNC_1(VAR_14);
  if (FUNC_4(VAR_8, VAR_12, VAR_13 >> VAR_5, VAR_6, VAR_4)) {
   FUNC_3(&VAR_7->busy_lock);
   return -VAR_0;
  }
  VAR_12 += VAR_6;
  VAR_14 += VAR_6;
  if (VAR_10 > VAR_6)
   VAR_10 -= VAR_6;
  else
   VAR_10 = 0;
 }

 VAR_7->mmapped = 1;
 FUNC_3(&VAR_7->busy_lock);
 return 0;
}
