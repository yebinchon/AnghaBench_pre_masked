
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_4__ {int state; int block_hint; } ;


 int VAR_0 ;






 int * FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(thread_t VAR_1)
{
 if (!(VAR_1->state & VAR_0))
  return 0;

 switch (VAR_1->block_hint) {

  case 128:
  case 133:
   return 0;


  case 131:
  case 130:
  case 129:
  case 132:
   return (FUNC_0(VAR_1) != ((void*)0));

  default:
   return 1;
 }
}
