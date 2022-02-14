
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dev {unsigned short category; unsigned short type; struct nubus_dev* next; } ;


 struct nubus_dev* VAR_0 ;

struct nubus_dev*
FUNC_0(unsigned short VAR_1,
  unsigned short VAR_2,
  const struct nubus_dev* VAR_3)
{
 struct nubus_dev* VAR_4 =
  VAR_3 ? VAR_3->next : VAR_0;

 while (VAR_4) {
  if (VAR_4->category == VAR_1
      && VAR_4->type == VAR_2)
   return VAR_4;
  VAR_4 = VAR_4->next;
 }
 return ((void*)0);
}
