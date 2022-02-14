
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_device {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct rtc_device* data; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*,int ,struct rtc_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 struct rtc_device *VAR_5 = FUNC_0(VAR_3)->data;

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_2, VAR_5);
}
