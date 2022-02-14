
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct inode {int dummy; } ;
struct file {struct apm_user* private_data; } ;
struct apm_user {int suspend_result; int suspend_state; int writer; int suser; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct inode * VAR_12, struct file *VAR_13, u_int VAR_14, u_long VAR_15)
{
 struct apm_user *VAR_16 = VAR_13->private_data;
 int VAR_17 = -VAR_1;

 if (!VAR_16->suser || !VAR_16->writer)
  return -VAR_2;

 switch (VAR_14) {
 case 130:
  FUNC_3(&VAR_10);

  VAR_16->suspend_result = -VAR_0;

  switch (VAR_16->suspend_state) {
  case 128:





   VAR_16->suspend_state = VAR_5;
   FUNC_0(&VAR_11);
   FUNC_4(&VAR_10);





   FUNC_7(&VAR_9);





   FUNC_2();

   FUNC_6(VAR_9,
       VAR_16->suspend_state == VAR_6);





   FUNC_1();
   break;
  case 129:
   VAR_16->suspend_result = -VAR_3;
   FUNC_4(&VAR_10);
   break;
  default:
   VAR_16->suspend_state = VAR_8;
   FUNC_4(&VAR_10);






   VAR_16->suspend_result = FUNC_5(VAR_4);
  }

  FUNC_3(&VAR_10);
  VAR_17 = VAR_16->suspend_result;
  VAR_16->suspend_state = VAR_7;
  FUNC_4(&VAR_10);
  break;
 }

 return VAR_17;
}
