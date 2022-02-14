
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_perf_counter {int dummy; } ;
typedef int file_list_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct retro_perf_counter**,unsigned int,char*,size_t,char*,size_t,char const*,unsigned int*) ;
 struct retro_perf_counter** FUNC_1 () ;

__attribute__((used)) static void FUNC_2(
      file_list_t* VAR_1,
      unsigned *VAR_2, unsigned VAR_3, unsigned VAR_4,
      const char *VAR_5,
      char *VAR_6, size_t VAR_7,
      const char *VAR_8,
      char *VAR_9, size_t VAR_10)
{
   struct retro_perf_counter **VAR_11 = FUNC_1();
   unsigned VAR_12 = VAR_3 - VAR_0;
   FUNC_0(VAR_11, VAR_12, VAR_6, VAR_7,
         VAR_9, VAR_7, VAR_8, VAR_2);
}
