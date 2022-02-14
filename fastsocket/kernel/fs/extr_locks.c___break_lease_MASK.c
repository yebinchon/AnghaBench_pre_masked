
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct file_lock* i_flock; } ;
struct file_lock {scalar_t__ fl_owner; int fl_type; unsigned long fl_break_time; struct file_lock* fl_next; int fl_wait; TYPE_1__* fl_lmops; } ;
struct TYPE_4__ {scalar_t__ files; } ;
struct TYPE_3__ {int (* fl_break ) (struct file_lock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (struct file_lock*) ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (struct file_lock*) ;
 int FUNC_3 (struct file_lock*) ;
 TYPE_2__* VAR_9 ;
 unsigned long VAR_10 ;
 struct file_lock* FUNC_4 (int *,int) ;
 unsigned long VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 (struct file_lock*) ;
 int FUNC_7 (struct file_lock*,struct file_lock*) ;
 int FUNC_8 (struct file_lock*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int,unsigned long) ;

int FUNC_12(struct inode *VAR_12, unsigned int VAR_13)
{
 int VAR_14 = 0, VAR_15;
 struct file_lock *VAR_16, *VAR_17;
 struct file_lock *VAR_18;
 unsigned long VAR_19;
 int VAR_20 = 0;
 int VAR_21 = (VAR_13 & VAR_6) != VAR_8;

 VAR_16 = FUNC_4(((void*)0), VAR_21 ? VAR_4 : VAR_2);

 FUNC_5();

 FUNC_9(VAR_12);

 VAR_17 = VAR_12->i_flock;
 if ((VAR_17 == ((void*)0)) || !FUNC_1(VAR_17))
  goto out;

 for (VAR_18 = VAR_17; VAR_18 && FUNC_1(VAR_18); VAR_18 = VAR_18->fl_next)
  if (VAR_18->fl_owner == VAR_9->files)
   VAR_20 = 1;

 if (VAR_21) {

  VAR_15 = VAR_3 | VAR_1;
 } else if (VAR_17->fl_type & VAR_1) {

  VAR_15 = VAR_17->fl_type;
 } else if (VAR_17->fl_type & VAR_4) {

  VAR_15 = VAR_2 | VAR_1;
 } else {

  goto out;
 }

 if (FUNC_0(VAR_16) && !VAR_20
   && ((VAR_13 & VAR_7) == 0)) {
  VAR_14 = FUNC_2(VAR_16);
  goto out;
 }

 VAR_19 = 0;
 if (VAR_11 > 0) {
  VAR_19 = VAR_10 + VAR_11 * VAR_5;
  if (VAR_19 == 0)
   VAR_19++;
 }

 for (VAR_18 = VAR_17; VAR_18 && FUNC_1(VAR_18); VAR_18 = VAR_18->fl_next) {
  if (VAR_18->fl_type != VAR_15) {
   VAR_18->fl_type = VAR_15;
   VAR_18->fl_break_time = VAR_19;

   VAR_18->fl_lmops->fl_break(VAR_18);
  }
 }

 if (VAR_20 || (VAR_13 & VAR_7)) {
  VAR_14 = -VAR_0;
  goto out;
 }

restart:
 VAR_19 = VAR_17->fl_break_time;
 if (VAR_19 != 0) {
  VAR_19 -= VAR_10;
  if (VAR_19 == 0)
   VAR_19++;
 }
 FUNC_7(VAR_17, VAR_16);
 VAR_14 = FUNC_11(VAR_16->fl_wait,
      !VAR_16->fl_next, VAR_19);
 FUNC_3(VAR_16);
 if (VAR_14 >= 0) {
  if (VAR_14 == 0)
   FUNC_9(VAR_12);

  for (VAR_17 = VAR_12->i_flock; VAR_17 && FUNC_1(VAR_17);
    VAR_17 = VAR_17->fl_next) {
   if (VAR_17->fl_type & VAR_1)
    goto restart;
  }
  VAR_14 = 0;
 }

out:
 FUNC_10();
 if (!FUNC_0(VAR_16))
  FUNC_6(VAR_16);
 return VAR_14;
}
