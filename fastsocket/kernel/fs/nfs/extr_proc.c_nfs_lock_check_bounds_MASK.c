
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct file_lock *VAR_3)
{
 __s32 VAR_4, VAR_5;

 VAR_4 = (__s32)VAR_3->fl_start;
 if ((loff_t)VAR_4 != VAR_3->fl_start)
  goto out_einval;

 if (VAR_3->fl_end != VAR_2) {
  VAR_5 = (__s32)VAR_3->fl_end;
  if ((loff_t)VAR_5 != VAR_3->fl_end)
   goto out_einval;
 } else
  VAR_5 = VAR_1;

 if (VAR_4 < 0 || VAR_4 > VAR_5)
  goto out_einval;
 return 0;
out_einval:
 return -VAR_0;
}
