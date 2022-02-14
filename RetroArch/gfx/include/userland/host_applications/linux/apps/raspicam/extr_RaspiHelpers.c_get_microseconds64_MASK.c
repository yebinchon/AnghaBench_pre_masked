
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;

uint64_t FUNC_1()
{
   struct timespec VAR_1;
   uint64_t VAR_2;

   FUNC_0(VAR_0, &VAR_1);

   VAR_2 = VAR_1.tv_sec * 1000000;
   VAR_2 += VAR_1.tv_nsec / 1000;

   return VAR_2;
}
