
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *) ;
 int VAR_8 ;
 int FUNC_1 (struct inode*,struct file*) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_13, struct file *VAR_14)
{
 int VAR_15;

 if (*VAR_0 & (1 << 13))
  return -VAR_3;

 if (FUNC_3(1, &VAR_11))
  return -VAR_3;

 VAR_9 = VAR_10 * (VAR_8 / 256);

 *VAR_1 = 0;
 FUNC_4();
 *VAR_2 = VAR_7 | VAR_5
  | VAR_6;
 *VAR_0 |= 1 << 13;

 VAR_15 = 0;

 FUNC_1(VAR_13, VAR_14);
 return VAR_15;
}
