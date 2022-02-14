
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_flock; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {scalar_t__ fl_start; scalar_t__ fl_end; scalar_t__ fl_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct page*,struct inode*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, struct page *VAR_5, struct inode *VAR_6)
{
 if (VAR_4->f_flags & VAR_3)
  return 0;
 if (!FUNC_1(VAR_5, VAR_6))
  return 0;
 if (FUNC_0(VAR_6, VAR_0))
  return 1;
 if (VAR_6->i_flock == ((void*)0) || (VAR_6->i_flock->fl_start == 0 &&
   VAR_6->i_flock->fl_end == VAR_2 &&
   VAR_6->i_flock->fl_type != VAR_1))
  return 1;
 return 0;
}
