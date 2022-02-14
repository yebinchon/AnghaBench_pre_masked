
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int** VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ VAR_7 ;

int FUNC_6(void *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = -1, VAR_12, VAR_13;

 char *VAR_14 = VAR_8;


 if (VAR_7 >= 0)
  FUNC_1(VAR_7);

 if (VAR_3 >= 0) FUNC_4(VAR_3);
 VAR_3 = FUNC_5(VAR_14, VAR_0, 0777);
 if (VAR_3 < 0) {
  FUNC_0("sceIoOpen(%s) failed\n", VAR_14);
  goto end;
 }

 VAR_6 = 0;
 VAR_10 = FUNC_3(0);
 if (VAR_10 <= 0) {
  FUNC_0("read_next_frame() failed (%s)\n", VAR_14);
  goto end;
 }
 VAR_12 = (VAR_5[0][2] & 0x0c) >> 2;
 VAR_13 = VAR_5[0][2] >> 4;

 if (VAR_12 != 0) {
  FUNC_0("unsupported samplerate (%s)\n", VAR_14);
  goto end;
 }
 VAR_13 = VAR_1[VAR_13];
 if (VAR_13 == 0) {
  FUNC_0("unsupported bitrate (%s)\n", VAR_14);
  goto end;
 }


 VAR_11 = VAR_13;
end:
 if (VAR_3 >= 0) FUNC_4(VAR_3);
 VAR_3 = -1;
 VAR_2 = ((void*)0);
 if (VAR_7 >= 0)
  FUNC_2(VAR_7);
 if (VAR_11 < 0) VAR_4 = -1;
 return VAR_11;
}
