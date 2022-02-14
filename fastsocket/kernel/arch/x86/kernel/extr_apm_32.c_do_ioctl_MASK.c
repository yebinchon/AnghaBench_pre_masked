
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct file {struct apm_user* private_data; } ;
struct apm_user {int suspend_wait; int suspend_result; int suspends_pending; int suspends_read; int standbys_pending; int standbys_read; int writer; int suser; } ;




 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct apm_user*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct apm_user*) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_8, u_int VAR_9, u_long VAR_10)
{
 struct apm_user *VAR_11;
 int VAR_12;

 VAR_11 = VAR_8->private_data;
 if (FUNC_0(VAR_11, "ioctl"))
  return -VAR_2;
 if (!VAR_11->suser || !VAR_11->writer)
  return -VAR_4;
 switch (VAR_9) {
 case 129:
  FUNC_1();
  if (VAR_11->standbys_read > 0) {
   VAR_11->standbys_read--;
   VAR_11->standbys_pending--;
   VAR_6--;
  } else
   FUNC_2(VAR_0, VAR_11);
  if (VAR_6 <= 0)
   FUNC_3();
  FUNC_5();
  break;
 case 128:
  FUNC_1();
  if (VAR_11->suspends_read > 0) {
   VAR_11->suspends_read--;
   VAR_11->suspends_pending--;
   VAR_7--;
  } else
   FUNC_2(VAR_1, VAR_11);
  if (VAR_7 <= 0) {
   VAR_12 = FUNC_4(1);
  } else {
   VAR_11->suspend_wait = 1;
   FUNC_6(VAR_5,
     VAR_11->suspend_wait == 0);
   VAR_12 = VAR_11->suspend_result;
  }
  FUNC_5();
  return VAR_12;
 default:
  return -VAR_3;
 }
 return 0;
}
