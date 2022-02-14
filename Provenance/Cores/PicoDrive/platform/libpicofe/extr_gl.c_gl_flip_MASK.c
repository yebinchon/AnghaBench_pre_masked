
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
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int ,int ,float*) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,int ,int ,void const*) ;
 int FUNC_4 (int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 float* VAR_7 ;
 int VAR_8 ;

int FUNC_7(const void *VAR_9, int VAR_10, int VAR_11)
{
 static int VAR_12, VAR_13;

 if (VAR_9 != ((void*)0)) {
  if (VAR_10 != VAR_12 || VAR_11 != VAR_13) {
   float VAR_14 = (float)VAR_10 / 1024.0f;
   float VAR_15 = (float)VAR_11 / 512.0f;
   VAR_7[1*2 + 0] = VAR_14;
   VAR_7[2*2 + 1] = VAR_15;
   VAR_7[3*2 + 0] = VAR_14;
   VAR_7[3*2 + 1] = VAR_15;
   VAR_12 = VAR_10;
   VAR_13 = VAR_11;
  }

  FUNC_3(VAR_2, 0, 0, 0, VAR_10, VAR_11,
   VAR_1, VAR_4, VAR_9);
  if (FUNC_5("glTexSubImage2D"))
   return -1;
 }

 FUNC_4(3, VAR_0, 0, VAR_8);
 FUNC_2(2, VAR_0, 0, VAR_7);
 FUNC_1(VAR_3, 0, 4);

 if (FUNC_5("glDrawArrays"))
  return -1;

 FUNC_0(VAR_5, VAR_6);
 if (FUNC_6("eglSwapBuffers"))
  return -1;

 return 0;
}
