
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int,char*,int,int) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_9, int VAR_10)
{
 static int VAR_11 = 0, VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15, VAR_16;



 if (VAR_8 >= 0 && VAR_9 == VAR_11 && VAR_12 == VAR_10)
  return 0;

 FUNC_4();
 VAR_8 = FUNC_1("/dev/dsp", VAR_1);
 if (VAR_8 == -1)
 {
  FUNC_2("open(\"/dev/dsp\")");
  VAR_8 = FUNC_1("/dev/dsp1", VAR_1);
  if (VAR_8 == -1) {
   FUNC_2("open(\"/dev/dsp1\")");
   return -1;
  }
 }





 VAR_14 = (VAR_7 * VAR_9 / 50) * 4;

 for (VAR_13 = 0; VAR_14; VAR_14 >>= 1, VAR_13++)
  ;

 VAR_13 |= VAR_0 << 16;
 VAR_16 = FUNC_0(VAR_8, VAR_3, &VAR_13);
 if (VAR_16 < 0)
  FUNC_2("SNDCTL_DSP_SETFRAGMENT failed");

 VAR_15 = 16;
 VAR_16 = FUNC_0(VAR_8, VAR_5, &VAR_10);
 if (VAR_16 == 0)
  VAR_16 = FUNC_0(VAR_8, VAR_2, &VAR_15);
 if (VAR_16 == 0)
  VAR_16 = FUNC_0(VAR_8, VAR_4, &VAR_9);
 if (VAR_16 < 0)
  FUNC_2("failed to set audio format");






 FUNC_3("sndout_oss_start: %d/%dbit/%s, %d buffers of %i bytes\n",
  VAR_9, VAR_15, VAR_10 ? "stereo" : "mono", VAR_13 >> 16, 1 << (VAR_13 & 0xffff));

 VAR_11 = VAR_9; VAR_12 = VAR_10;
 VAR_6 = 0;
 return 0;
}
