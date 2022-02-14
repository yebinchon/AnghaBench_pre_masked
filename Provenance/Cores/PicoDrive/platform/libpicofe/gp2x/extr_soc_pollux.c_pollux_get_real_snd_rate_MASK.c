
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int* VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = (VAR_0[0xdbc4>>2] >> 1) & 7;
 VAR_5 = (VAR_0[0xdbc8>>2] >> 1) & 7;
 if (VAR_4 > 1 || VAR_5 != 7) {
  FUNC_1(VAR_1, "get_real_snd_rate: bad clk sources: %d %d\n", VAR_4, VAR_5);
  return VAR_3;
 }

 VAR_6 = FUNC_0(VAR_4 ? VAR_0[0xf008>>2] : VAR_0[0xf004>>2]);


 VAR_7 = ((VAR_0[0xdbc4>>2] >> 4) & 0x3f) + 1;
 VAR_6 /= VAR_7;
 VAR_7 = ((VAR_0[0xdbc8>>2] >> 4) & 0x3f) + 1;
 VAR_6 /= VAR_7;
 VAR_6 /= 64;


 VAR_6 -= VAR_6 * VAR_2 / 1000000;
 FUNC_2("adjusted rate: %d\n", VAR_6);

 if (VAR_6 < 8000-1000 || VAR_6 > 44100+1000) {
  FUNC_1(VAR_1, "get_real_snd_rate: got bad rate: %d\n", VAR_6);
  return VAR_3;
 }

 return VAR_6;
}
