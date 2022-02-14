
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int USHORT ;
typedef int UINT ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*,int,char*,char*,int,int) ;

void FUNC_4(char *VAR_1, UINT VAR_2, char *VAR_3, void *VAR_4, UINT VAR_5)
{
 char VAR_6[VAR_0];
 USHORT VAR_7;

 if (FUNC_1() == 0)
 {
  return;
 }


 if (VAR_5 != 0)
 {
  VAR_7 = FUNC_0(VAR_4, VAR_5);
 }
 else
 {
  VAR_7 = 0;
 }


 FUNC_3(VAR_6, sizeof(VAR_6), "\"%s\" (Size=%5u, Crc=0x%04X)", VAR_3, VAR_5, VAR_7);

 FUNC_2(VAR_1, VAR_2, VAR_6);
}
