
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int mbox_msg_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 struct omap_mbox* FUNC_1 (struct device*) ;
 int FUNC_2 (struct omap_mbox*,int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
  const char * VAR_3, size_t VAR_4)
{
 int VAR_5;
 mbox_msg_t *VAR_6 = (mbox_msg_t *)VAR_3;
 struct omap_mbox *VAR_7 = FUNC_1(VAR_1);

 for (; VAR_4 >= sizeof(mbox_msg_t); VAR_4 -= sizeof(mbox_msg_t)) {
  VAR_5 = FUNC_2(VAR_7, FUNC_0(*VAR_6), ((void*)0));
  if (VAR_5)
   return -VAR_0;
  VAR_6++;
 }

 return (size_t)((char *)VAR_6 - VAR_3);
}
