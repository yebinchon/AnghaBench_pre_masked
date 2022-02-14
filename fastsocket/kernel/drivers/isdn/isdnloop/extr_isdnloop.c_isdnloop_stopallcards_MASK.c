
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ isdnloop_card ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 isdnloop_card *VAR_1 = VAR_0;

 while (VAR_1) {
  FUNC_0(VAR_1);
  VAR_1 = VAR_1->next;
 }
}
