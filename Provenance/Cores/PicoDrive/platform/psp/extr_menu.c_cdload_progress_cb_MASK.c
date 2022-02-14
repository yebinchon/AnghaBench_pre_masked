
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned short*,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,char*,int) ;
 int FUNC_2 (int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 int VAR_4, VAR_5 = VAR_3 * 480 / 100;
 unsigned short *VAR_6;

 if (VAR_0 <= 2) {
  VAR_0++;
  FUNC_1(1, VAR_0++ * 10, "Processing CD image / MP3s", 0xffff);
  FUNC_2(1, VAR_0++ * 10, VAR_2, 0xffff, 80);
 }

 VAR_6 = (unsigned short *)VAR_1 + 512*10*VAR_0;

 if (VAR_5 > 480) VAR_5 = 480;
 for (VAR_4 = 8; VAR_4 > 0; VAR_4--, VAR_6 += 512)
  FUNC_0(VAR_6, 0xff, VAR_5*2);
}
