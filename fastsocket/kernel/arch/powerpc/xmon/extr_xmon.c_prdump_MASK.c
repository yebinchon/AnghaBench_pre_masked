
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char** VAR_1 ;
 size_t VAR_2 ;
 long FUNC_0 (unsigned long,unsigned char*,long) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(unsigned long VAR_3, long VAR_4)
{
 long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10[16];

 for (VAR_5 = VAR_4; VAR_5 > 0;) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_2(' ');
  VAR_8 = VAR_5 < 16? VAR_5: 16;
  VAR_9 = FUNC_0(VAR_3, VAR_10, VAR_8);
  VAR_3 += VAR_9;
  for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
          if ((VAR_6 & (sizeof(long) - 1)) == 0 && VAR_6 > 0)
    FUNC_2(' ');
   if (VAR_6 < VAR_9)
    FUNC_1("%.2x", VAR_10[VAR_6]);
   else
    FUNC_1("%s", VAR_1[VAR_2]);
  }
  for (; VAR_6 < 16; ++VAR_6) {
          if ((VAR_6 & (sizeof(long) - 1)) == 0)
    FUNC_2(' ');
   FUNC_1("  ");
  }
  FUNC_1("  |");
  for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
   if (VAR_6 < VAR_9) {
    VAR_7 = VAR_10[VAR_6];
    FUNC_2(' ' <= VAR_7 && VAR_7 <= '~'? VAR_7: '.');
   } else
    FUNC_2(' ');
  }
  VAR_5 -= VAR_8;
  for (; VAR_6 < 16; ++VAR_6)
   FUNC_2(' ');
  FUNC_1("|\n");
  if (VAR_9 < VAR_8)
   break;
 }
}
