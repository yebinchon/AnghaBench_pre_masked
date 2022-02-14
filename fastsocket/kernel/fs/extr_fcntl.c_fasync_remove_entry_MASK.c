
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_lock; int f_flags; } ;
struct fasync_struct {struct fasync_struct* fa_next; struct file* fa_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct fasync_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, struct fasync_struct **VAR_4)
{
 struct fasync_struct *VAR_5, **VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_3->f_lock);
 FUNC_3(&VAR_2);
 for (VAR_6 = VAR_4; (VAR_5 = *VAR_6) != ((void*)0); VAR_6 = &VAR_5->fa_next) {
  if (VAR_5->fa_file != VAR_3)
   continue;
  *VAR_6 = VAR_5->fa_next;
  FUNC_0(VAR_1, VAR_5);
  VAR_3->f_flags &= ~VAR_0;
  VAR_7 = 1;
  break;
 }
 FUNC_4(&VAR_2);
 FUNC_2(&VAR_3->f_lock);
 return VAR_7;
}
