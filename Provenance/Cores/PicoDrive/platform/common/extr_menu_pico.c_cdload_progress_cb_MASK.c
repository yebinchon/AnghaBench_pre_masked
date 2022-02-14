
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned short*,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = VAR_5 * VAR_2 / 100;
 unsigned short *VAR_8;

 FUNC_1(0, 1);
 VAR_8 = (unsigned short *)VAR_1 + VAR_2 * VAR_3 * 2;
 FUNC_0(VAR_8, 0xff, VAR_2 * (VAR_3 - 2) * 2);

 FUNC_3(1, 3 * VAR_3, "Processing CD image / MP3s", 0xffff);
 FUNC_3(1, 4 * VAR_3, VAR_4, 0xffff);
 VAR_8 += VAR_2 * VAR_3 * 3;

 if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;

 for (VAR_6 = (VAR_3 - 2); VAR_6 > 0; VAR_6--, VAR_8 += VAR_2)
  FUNC_0(VAR_8, 0xff, VAR_7 * 2);
 FUNC_2();

 VAR_0 = 1;
}
