
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_0;

 FUNC_3(1, 0x226);
 FUNC_5(3);
 FUNC_3(0, 0x226);

 for (VAR_0 = 0; VAR_0 < 5; VAR_0++) {
  if (FUNC_1(0x22e) & 0x80)
   break;
  FUNC_2(1);
 }
 if (VAR_0 == 5)
  FUNC_4("SoundBlaster: DSP reset failed\n");

 FUNC_0("SoundBlaster DSP reset: %02X (AA)\n", FUNC_1(0x22a));

 for (VAR_0 = 0; VAR_0 < 5; VAR_0++) {
  if ((FUNC_1(0x22c) & 0x80) == 0)
   break;
  FUNC_2(1);
 }

 if (VAR_0 == 5)
  FUNC_4("SoundBlaster: DSP not ready\n");
 else {
  FUNC_3(0xe1, 0x22c);

  FUNC_0("SoundBlaster DSP id: ");
  VAR_0 = FUNC_1(0x22a);
  FUNC_5(1);
  VAR_0 |= FUNC_1(0x22a) << 8;
  FUNC_0("%04X\n", VAR_0);

  for (VAR_0 = 0; VAR_0 < 5; VAR_0++) {
   if ((FUNC_1(0x22c) & 0x80) == 0)
    break;
   FUNC_2(1);
  }

  if (VAR_0 == 5)
   FUNC_4("SoundBlaster: could not turn speaker off\n");

  FUNC_3(0xd3, 0x22c);
 }


 FUNC_3(5, 0x38a);
 FUNC_3(1, 0x38b);
}
