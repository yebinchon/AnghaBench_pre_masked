
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; int member_0; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int clockid_t ;
typedef int OSTime ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct timeval*,int *) ;
 int VAR_2 ;

int FUNC_1(clockid_t VAR_3, struct timespec* VAR_4)
{
   struct timeval VAR_5 = { 0 };
   int VAR_6 = 0;
   OSTime VAR_7;

   if (VAR_4 == ((void*)0)) {
      VAR_2 = VAR_0;
      return -1;
   }

   switch (VAR_3) {
      case 128:

         VAR_6 = FUNC_0(((void*)0), &VAR_5, ((void*)0));
         if (VAR_6) return -1;

         VAR_4->tv_sec = VAR_5.tv_sec;
         VAR_4->tv_nsec = VAR_5.tv_usec * 1000;
      break;
      default:
         VAR_2 = VAR_1;
         return -1;
   }
   return 0;
}
