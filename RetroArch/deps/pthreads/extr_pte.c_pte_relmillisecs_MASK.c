
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct timeb {scalar_t__ millitm; scalar_t__ time; } ;
typedef long long const int64_t ;


 int FUNC_0 (struct timeb*) ;

unsigned int FUNC_1 (const struct timespec * VAR_0)
{
   const long long VAR_1 = 1000000;
   const long long VAR_2 = 1000;
   unsigned int VAR_3;
   long VAR_4;
   struct timeb VAR_5;
   long long VAR_6 = (int64_t)VAR_0->tv_sec * VAR_2;
   VAR_6 += ((int64_t)VAR_0->tv_nsec + (VAR_1/2)) / VAR_1;



   FUNC_0(&VAR_5);

   VAR_4 = (int64_t) VAR_5.time * VAR_2;
   VAR_4 += (int64_t) VAR_5.millitm;

   if (VAR_6 > VAR_4)
   {
      VAR_3 = (unsigned int) (VAR_6 - VAR_4);

      if (VAR_3 == 0xFFFFFFFF)
         VAR_3--;
   }

   else
      VAR_3 = 0;

   return VAR_3;
}
