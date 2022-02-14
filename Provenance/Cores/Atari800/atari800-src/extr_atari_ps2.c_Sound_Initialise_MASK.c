
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audsrv_fmt_t {int bits; int freq; int channels; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct audsrv_fmt_t*) ;
 int FUNC_5 (int ) ;

int FUNC_6(int *VAR_3, char *VAR_4[])
{
 if (FUNC_3() != 0)
  FUNC_0("failed to initialize audsrv: %s", FUNC_2());
 else {
  struct audsrv_fmt_t VAR_5;
  VAR_5.bits = 8;
  VAR_5.freq = 44100;
  VAR_5.channels = 1;
  FUNC_4(&VAR_5);
  FUNC_5(VAR_0);
  FUNC_1(VAR_1, 44100, 1, 0);
 }
 return VAR_2;
}
