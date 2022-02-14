
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct file_lock* i_flock; } ;
struct file_lock {scalar_t__ fl_owner; struct file_lock* fl_next; } ;
typedef scalar_t__ fl_owner_t ;
struct TYPE_2__ {scalar_t__ files; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct inode *VAR_2)
{
 fl_owner_t VAR_3 = VAR_1->files;
 struct file_lock *VAR_4;




 FUNC_1();
 for (VAR_4 = VAR_2->i_flock; VAR_4 != ((void*)0); VAR_4 = VAR_4->fl_next) {
  if (!FUNC_0(VAR_4))
   continue;
  if (VAR_4->fl_owner != VAR_3)
   break;
 }
 FUNC_2();
 return VAR_4 ? -VAR_0 : 0;
}
