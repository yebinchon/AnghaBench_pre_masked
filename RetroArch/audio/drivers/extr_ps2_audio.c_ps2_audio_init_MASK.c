
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void ps2_audio_t ;


 int FUNC_0 (void*,unsigned int) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static void *FUNC_2(const char *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3,
      unsigned *VAR_4)
{
   ps2_audio_t *VAR_5 = (ps2_audio_t*)FUNC_1(1, sizeof(ps2_audio_t));

   if (!VAR_5)
      return ((void*)0);

   FUNC_0(VAR_5, VAR_1);

   return VAR_5;
}
