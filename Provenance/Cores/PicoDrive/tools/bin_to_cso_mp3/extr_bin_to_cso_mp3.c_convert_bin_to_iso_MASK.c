
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int VAR_0 ;

s32 FUNC_8(FILE *VAR_1, char *VAR_2, char *VAR_3,
 u32 VAR_4)
{
  FILE *VAR_5;
  u8 VAR_6[2352];
  u32 VAR_7;

  FUNC_0(VAR_2);
  VAR_5 = FUNC_3(VAR_3, "wb");
  if (VAR_5 == ((void*)0))
  {
    FUNC_7("failed to open: %s\n", VAR_3);
    FUNC_6(1);
  }
  FUNC_7("writing iso %s, %x sectors\n", VAR_3, VAR_4);

  for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  {
    FUNC_7("\b\b\b%3i", VAR_7*100 / VAR_4);
    FUNC_2(VAR_0);
    FUNC_4(VAR_6, 2352, 1, VAR_1);
    FUNC_5(VAR_6 + 16, 2048, 1, VAR_5);
  }
  FUNC_7("\b\b\b100\n");

  FUNC_1(VAR_5);
  FUNC_0("..");
  return 0;
}
