
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct _reent {int dummy; } ;
typedef int OSTime ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct _reent *VAR_2,
   struct timeval* VAR_3,
   void* VAR_4)
{
   OSTime VAR_5;
   uint64_t VAR_6;
   uint32_t VAR_7;
   time_t VAR_8;


   if (VAR_3 == ((void*)0))
   {
      VAR_1 = VAR_0;
      return -1;
   }


   VAR_5 = FUNC_0();
   VAR_6 = FUNC_1(VAR_5);


   VAR_7 = FUNC_2(VAR_5) - (VAR_6 * 1000000);




   VAR_8 = VAR_6 + 946684800;

   VAR_3->tv_sec = VAR_8;
   VAR_3->tv_usec = VAR_7;
   return 0;
}
