
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct adx_wdt* private_data; } ;
struct adx_wdt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adx_wdt*,int) ;
 int FUNC_1 (struct adx_wdt*) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,struct file*) ;
 struct adx_wdt* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct adx_wdt *VAR_5 = FUNC_3(VAR_1);

 if (FUNC_4(0, &VAR_2))
  return -VAR_0;

 VAR_4->private_data = VAR_5;
 FUNC_0(VAR_5, 30);
 FUNC_1(VAR_5);

 return FUNC_2(VAR_3, VAR_4);
}
