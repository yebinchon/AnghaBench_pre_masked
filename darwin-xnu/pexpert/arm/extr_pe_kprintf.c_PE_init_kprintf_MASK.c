
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boot_arg ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ initialized; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,unsigned int*,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(boolean_t VAR_8)
{
 unsigned int VAR_9;

 if (VAR_3.initialized == VAR_1)
  FUNC_1("Platform Expert not initialized");

 if (!VAR_8) {
  FUNC_3(&VAR_6, 0);

  if (FUNC_0("debug", &VAR_9, sizeof (VAR_9)))
   if (VAR_9 & VAR_0)
    VAR_5 = VAR_1;

  if (FUNC_2())
   VAR_2 = VAR_7;
  else
   VAR_2 = VAR_4;
 }
}
