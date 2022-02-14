
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; struct TYPE_4__* next; struct TYPE_4__* inb; } ;
typedef TYPE_1__ Source ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(void)
{
 Source *VAR_1 = VAR_0;

 if (VAR_1->fd>=0) {
  FUNC_0(VAR_1->fd);
  FUNC_1(VAR_1->inb);
 }
 VAR_0 = VAR_1->next;
 FUNC_1(VAR_1);
}
