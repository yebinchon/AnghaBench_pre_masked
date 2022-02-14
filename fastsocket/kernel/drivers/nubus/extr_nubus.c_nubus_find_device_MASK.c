
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dev {unsigned short category; unsigned short type; unsigned short dr_hw; unsigned short dr_sw; struct nubus_dev* next; } ;


 struct nubus_dev* VAR_0 ;

struct nubus_dev*
FUNC_0(unsigned short VAR_1,
    unsigned short VAR_2,
    unsigned short VAR_3,
    unsigned short VAR_4,
    const struct nubus_dev* VAR_5)
{
 struct nubus_dev* VAR_6 =
  VAR_5 ? VAR_5->next : VAR_0;

 while (VAR_6) {
  if (VAR_6->category == VAR_1
      && VAR_6->type == VAR_2
      && VAR_6->dr_hw == VAR_3
      && VAR_6->dr_sw == VAR_4)
   return VAR_6;
  VAR_6 = VAR_6->next;
 }
 return ((void*)0);
}
