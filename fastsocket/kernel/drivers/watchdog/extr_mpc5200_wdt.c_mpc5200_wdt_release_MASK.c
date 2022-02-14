
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc5200_wdt {scalar_t__ count; } ;
struct inode {int dummy; } ;
struct file {struct mpc5200_wdt* private_data; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mpc5200_wdt*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{

 struct mpc5200_wdt *VAR_3 = VAR_2->private_data;
 FUNC_1(VAR_3);
 VAR_3->count = 0;

 FUNC_0(0, &VAR_0);
 return 0;
}
