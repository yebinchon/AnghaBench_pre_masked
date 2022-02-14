
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1 (void *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 unsigned char *VAR_4 = VAR_0;

 while (VAR_1 > 0) {
  FUNC_0 ("%p ", VAR_4);
  for (VAR_2=0;VAR_2 < ((VAR_1 < 16)?VAR_1:16);VAR_2++) {
   FUNC_0 ("%02x %s", VAR_4[VAR_2], (VAR_2==7)?" ":"");
  }
  for ( ;VAR_2 < 16;VAR_2++) {
   FUNC_0 ("   %s", (VAR_2==7)?" ":"");
  }
  for (VAR_2=0;VAR_2 < ((VAR_1 < 16)?VAR_1:16);VAR_2++) {
   VAR_3 = VAR_4[VAR_2];
   FUNC_0 ("%c", (VAR_3 < 0x20)?'.':((VAR_3 > 0x7f)?'.':VAR_3));
  }
  FUNC_0 ("\n");
  VAR_4 += 16;
  VAR_1 -= 16;
 }
}
