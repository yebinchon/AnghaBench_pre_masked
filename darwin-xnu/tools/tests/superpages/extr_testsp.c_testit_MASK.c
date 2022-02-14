
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_2__ {char* description; scalar_t__ (* fn ) () ;} ;


 char* VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_1 ;

boolean_t
FUNC_2(int VAR_2) {
 boolean_t VAR_3;

 VAR_0[0] = 0;
 FUNC_0 ("Test #%d \"%s\"...", VAR_2+1, VAR_1[VAR_2].description);
 VAR_3 = VAR_1[VAR_2].fn();
 if (VAR_3)
  FUNC_0 ("OK\n");
 else {
  FUNC_0 ("FAILED!");
  if (VAR_0[0])
   FUNC_0 (" (%s)\n", VAR_0);
  else
   FUNC_0 ("\n");
 }
}
