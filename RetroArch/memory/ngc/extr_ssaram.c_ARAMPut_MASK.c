
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (scalar_t__,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__,char*,int) ;

void FUNC_5(char *VAR_2, char *VAR_3, int VAR_4)
{
  u32 VAR_5;
  u32 VAR_6;
  u32 VAR_7;

  int VAR_8, VAR_9;
  int VAR_10 = 0;


  if ((u32) VAR_3 & 0x1f)
  {

    VAR_5 = ((u32) VAR_3 & ~0x1f);
    VAR_7 = 32 - ((u32) VAR_3 & 0x1f);
    VAR_6 = ((u32) VAR_3 & 0x1f);
    FUNC_0(VAR_1, (char *) VAR_5, 32);


    FUNC_4(VAR_1 + VAR_6, VAR_2, VAR_7);


    FUNC_3(VAR_1, 32);
    FUNC_2(VAR_0, (u32) VAR_1, (u32) VAR_3 & ~0x1f, 32);
    while (FUNC_1());


    VAR_2 += VAR_7;
    VAR_4 -= VAR_7;
    VAR_3 = (char *) (((u32) VAR_3 & ~0x1f) + 32);
  }


  VAR_9 = (VAR_4 >> 11);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  {
    FUNC_4(VAR_1, VAR_2 + VAR_10, 2048);
    FUNC_3(VAR_1, 2048);
    FUNC_2(VAR_0, (u32) VAR_1, (u32) VAR_3 + VAR_10, 2048);
    while (FUNC_1());
    VAR_10 += 2048;
  }


  VAR_4 &= 0x7ff;
  if (VAR_4)
  {
    VAR_9 = VAR_4 & 0x1f;
    FUNC_4(VAR_1, VAR_2 + VAR_10, VAR_4 & ~0x1f);
    FUNC_3(VAR_1, VAR_4 & ~0x1f);
    FUNC_2(VAR_0, (u32) VAR_1, (u32) VAR_3 + VAR_10, VAR_4 & ~0x1f);
    while (FUNC_1());

    if (VAR_9)
    {
      VAR_10 += VAR_4 & ~0x1f;
      VAR_6 = VAR_4 & 0x1f;


      FUNC_0(VAR_1, VAR_3 + VAR_10, 32);
      FUNC_4(VAR_1, VAR_2 + VAR_10, VAR_6);
      FUNC_3(VAR_1, 32);
      FUNC_2(VAR_0, (u32) VAR_1, (u32) VAR_3 + VAR_10, 32);
      while (FUNC_1());
    }
  }
}
