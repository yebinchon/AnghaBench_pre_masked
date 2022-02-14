
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
typedef int keyboard_event ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ _node ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

s32 FUNC_2(keyboard_event *VAR_1)
{
 _node *VAR_2 = (_node *) FUNC_0(&VAR_0);

 if (!VAR_2)
  return 0;

 *VAR_1 = VAR_2->event;

 FUNC_1(VAR_2);

 return 1;
}
