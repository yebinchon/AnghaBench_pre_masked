
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int videosize_t ;
typedef int tmp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_6(char *VAR_0, int VAR_1, videosize_t VAR_2)
{
 char VAR_3[40];
 int VAR_4;

 VAR_4 = 1 + FUNC_5(VAR_3, "%ldx%ld", FUNC_0(VAR_2), FUNC_1(VAR_2));
 FUNC_2(VAR_4 < sizeof(VAR_3));
 if ((VAR_0 == ((void*)0)) || (VAR_1 < VAR_4))
  FUNC_3("usbvideo_VideosizeToString: buffer is too small.");
 else
  FUNC_4(VAR_0, VAR_3, VAR_4);
}
