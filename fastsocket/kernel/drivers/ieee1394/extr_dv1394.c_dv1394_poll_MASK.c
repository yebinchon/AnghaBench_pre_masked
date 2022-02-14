
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_card {scalar_t__ n_frames; int active_frame; scalar_t__ n_clear_frames; int spinlock; int waitq; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct video_card* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct video_card *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_1(VAR_2, &VAR_4->waitq, VAR_3);

 FUNC_2(&VAR_4->spinlock, VAR_6);
 if ( VAR_4->n_frames == 0 ) {

 } else if ( VAR_4->active_frame == -1 ) {

  VAR_5 |= VAR_1;
 } else {

  if (VAR_4->n_clear_frames >0)
   VAR_5 |= VAR_1 | VAR_0;
 }
 FUNC_3(&VAR_4->spinlock, VAR_6);

 return VAR_5;
}
