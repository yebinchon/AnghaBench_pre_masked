
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ avail_in; int * next_in; int workspace; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;

int FUNC_3(void)
{
 if (!VAR_1++) {
  VAR_2.workspace = FUNC_0(FUNC_2());
  if ( !VAR_2.workspace ) {
   VAR_1 = 0;
   return -VAR_0;
  }
  VAR_2.next_in = ((void*)0);
  VAR_2.avail_in = 0;
  FUNC_1(&VAR_2);
 }
 return 0;
}
