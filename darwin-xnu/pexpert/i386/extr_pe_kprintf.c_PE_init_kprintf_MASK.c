
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boot_arg ;
typedef int boolean_t ;
struct TYPE_2__ {unsigned int initialized; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,unsigned int*,int) ;
 TYPE_1__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(boolean_t VAR_9)
{
 unsigned int VAR_10;

 if (VAR_3.initialized == VAR_1)
  FUNC_2("Platform Expert not initialized");

 if (!VAR_9) {
  unsigned int VAR_11 = VAR_4;

  FUNC_3(&VAR_7, 0);

  if (FUNC_0("debug", &VAR_10, sizeof (VAR_10)))
   if (VAR_10 & VAR_0)
    VAR_11 = VAR_1;




  if (!VAR_11 && (!VAR_6 || FUNC_1()))
   VAR_2 = VAR_8;
  else
   VAR_2 = VAR_5;

  VAR_6 = VAR_11;
 }
}
