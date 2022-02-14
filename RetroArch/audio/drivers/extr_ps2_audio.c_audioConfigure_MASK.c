
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audsrv_fmt_t {unsigned int freq; int channels; int bits; } ;
typedef int ps2_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 int FUNC_1 (struct audsrv_fmt_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(ps2_audio_t *VAR_3, unsigned VAR_4)
{
   int VAR_5;
   struct audsrv_fmt_t VAR_6;

   VAR_6.bits = VAR_0;
   VAR_6.freq = VAR_4;
   VAR_6.channels = VAR_1;

   VAR_5 = FUNC_1(&VAR_6);

   if (VAR_5)
   {
      FUNC_3("set format returned %d\n", VAR_5);
      FUNC_3("audsrv returned error string: %s\n", FUNC_0());
   }

   FUNC_2(VAR_2);
}
