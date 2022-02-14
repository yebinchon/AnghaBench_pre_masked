
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nubus_dev {struct nubus_dev* next; TYPE_1__* board; } ;
struct TYPE_2__ {unsigned int slot; } ;


 struct nubus_dev* VAR_0 ;

struct nubus_dev*
FUNC_0(unsigned int VAR_1,
  const struct nubus_dev* VAR_2)
{
 struct nubus_dev* VAR_3 =
  VAR_2 ? VAR_2->next : VAR_0;

 while (VAR_3) {
  if (VAR_3->board->slot == VAR_1)
   return VAR_3;
  VAR_3 = VAR_3->next;
 }
 return ((void*)0);
}
