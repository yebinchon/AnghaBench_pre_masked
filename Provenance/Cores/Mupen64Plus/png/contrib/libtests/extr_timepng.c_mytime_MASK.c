
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct timespec *VAR_2)
{

   if (!FUNC_0(VAR_0, VAR_2))
      return 1;

   FUNC_2("CLOCK_PROCESS_CPUTIME_ID");
   FUNC_1(VAR_1, "timepng: could not get the time\n");
   return 0;
}
