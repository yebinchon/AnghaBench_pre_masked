
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;
struct itimerval {struct timeval it_value; int it_interval; } ;
typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct sigaction*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,struct itimerval*,int *) ;
 scalar_t__ FUNC_9 (int ,struct sigaction*,int ) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (long) ;

__attribute__((used)) static int FUNC_12(int VAR_7, const char **VAR_8)
{
   long VAR_9;
   struct timeval VAR_10;
   MMAL_STATUS_T VAR_11;

   if (VAR_7 != 4)
   {
      FUNC_7("usage: %s autosusp <timeout-ms> <signal>\n",
             VAR_8[0]);
      FUNC_7("   e.g. 650 9\n");
      FUNC_1(1);
   }
   VAR_9 = 1000 * FUNC_0(VAR_8[2]);
   VAR_4 = FUNC_0(VAR_8[3]);

   if ((VAR_11=FUNC_5()) != VAR_1)
   {
      FUNC_2(VAR_6,"mmal_vc_use failed: %d\n", VAR_11);
      FUNC_1(1);
   }


   struct sigaction VAR_12;
   FUNC_3(&VAR_12, 0, sizeof(struct sigaction));
   VAR_12.sa_sigaction = VAR_5;
   FUNC_10(&VAR_12.sa_mask);
   VAR_12.sa_flags = VAR_2;
   if (FUNC_9(VAR_3, &VAR_12, 0))
   {
      FUNC_6("sigaction");
      FUNC_1(1);
   }


   VAR_10.tv_sec = VAR_9 / 1000000;
   VAR_10.tv_usec = VAR_9 % 1000000;

   struct itimerval VAR_13 = {
     .it_interval = {0,0},
     .it_value = VAR_10
   };

   int VAR_14 = FUNC_8(VAR_0, &VAR_13, ((void*)0));
   if (VAR_14 < 0)
   {
      FUNC_6("setitimer failed");
      FUNC_1(1);
   }

   FUNC_11(VAR_9 + 1000000);
   FUNC_7("%s: not killed by timer\n", VAR_8[0]);
   FUNC_4();

   return 0;
}
