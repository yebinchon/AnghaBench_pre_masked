
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned char *VAR_5 = VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 16) {
  FUNC_0("%p ", VAR_5 + VAR_2);
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   FUNC_0("%02x %s", VAR_5[VAR_3 + VAR_2], (VAR_3 == 7) ? " " : "");
  }
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   VAR_4 = VAR_5[VAR_3 + VAR_2];
   FUNC_0("%c", (VAR_4 < 0x20) ? '.' :
     ((VAR_4 > 0x7f) ? '.' : VAR_4));
  }
  FUNC_0("\n");
 }
}
