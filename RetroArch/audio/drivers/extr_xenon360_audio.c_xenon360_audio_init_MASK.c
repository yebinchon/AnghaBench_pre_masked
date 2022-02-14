
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xenon_audio_t ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void *FUNC_2(const char *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4,
      unsigned *VAR_5)
{
   static bool VAR_6 = 0;

   if (!VAR_6)
   {
      FUNC_1();
      VAR_6 = 1;
   }

   *VAR_5 = VAR_0;

   return FUNC_0(1, sizeof(xenon_audio_t));
}
