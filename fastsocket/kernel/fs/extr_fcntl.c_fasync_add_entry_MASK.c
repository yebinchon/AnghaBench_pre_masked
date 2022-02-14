
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_lock; int f_flags; } ;
struct fasync_struct {int fa_fd; struct fasync_struct* fa_next; struct file* fa_file; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fasync_struct* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct fasync_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(int VAR_6, struct file *VAR_7, struct fasync_struct **VAR_8)
{
 struct fasync_struct *VAR_9, *VAR_10, **VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_9)
  return -VAR_0;

 FUNC_2(&VAR_7->f_lock);
 FUNC_4(&VAR_5);
 for (VAR_11 = VAR_8; (VAR_10 = *VAR_11) != ((void*)0); VAR_11 = &VAR_10->fa_next) {
  if (VAR_10->fa_file != VAR_7)
   continue;
  VAR_10->fa_fd = VAR_6;
  FUNC_1(VAR_4, VAR_9);
  goto out;
 }

 VAR_9->magic = VAR_2;
 VAR_9->fa_file = VAR_7;
 VAR_9->fa_fd = VAR_6;
 VAR_9->fa_next = *VAR_8;
 *VAR_8 = VAR_9;
 VAR_12 = 1;
 VAR_7->f_flags |= VAR_1;

out:
 FUNC_5(&VAR_5);
 FUNC_3(&VAR_7->f_lock);
 return VAR_12;
}
