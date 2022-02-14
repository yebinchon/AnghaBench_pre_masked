
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib {int dummy; } ;
struct aac_dev {int dummy; } ;
struct aac_close {void* cid; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fib* FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int,int,int *,int *) ;
 void* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct fib*) ;

int FUNC_7(struct aac_dev * VAR_5)
{
 struct fib * VAR_6;
 struct aac_close *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_1;
 FUNC_3(VAR_6);

 VAR_7 = (struct aac_close *) FUNC_6(VAR_6);

 VAR_7->command = FUNC_5(VAR_4);
 VAR_7->cid = FUNC_5(0xfffffffe);

 VAR_8 = FUNC_4(VAR_0,
     VAR_6,
     sizeof(struct aac_close),
     VAR_3,
     -2 , 1,
     ((void*)0), ((void*)0));

 if (VAR_8 >= 0)
  FUNC_1(VAR_6);

 if (VAR_8 != -VAR_2)
  FUNC_2(VAR_6);
 return VAR_8;
}
