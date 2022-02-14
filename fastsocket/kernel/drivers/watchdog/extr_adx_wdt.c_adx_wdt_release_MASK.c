
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct adx_wdt* private_data; } ;
struct adx_wdt {int dummy; } ;


 int FUNC_0 (struct adx_wdt*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct adx_wdt *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_3);
 FUNC_1(0, &VAR_0);

 return 0;
}
