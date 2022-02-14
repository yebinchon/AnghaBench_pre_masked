
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audsrv_fmt_t {int bits; int freq; int channels; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct audsrv_fmt_t*) ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 if (FUNC_2() != 0)
  FUNC_0("failed to initialize audsrv: %s", FUNC_1());
 else {
  struct audsrv_fmt_t VAR_1;
  VAR_1.bits = 8;
  VAR_1.freq = 44100;
  VAR_1.channels = 1;
  FUNC_3(&VAR_1);
  FUNC_4(VAR_0);
 }
}
