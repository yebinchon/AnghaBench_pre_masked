
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long data; int function; scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_3)
  return;
 VAR_3 = 1;
 FUNC_0(("gdth_detect(): Initializing timer !\n"));
 VAR_2.expires = VAR_4 + VAR_0;
 VAR_2.data = 0L;
 VAR_2.function = VAR_1;
 FUNC_1(&VAR_2);
}
