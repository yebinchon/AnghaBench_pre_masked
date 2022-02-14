
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned char *VAR_6 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 16) {
  FUNC_0(VAR_0, "%08lx ", (unsigned long) VAR_6 + VAR_3);
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
   FUNC_0(VAR_0, "%02x %s", VAR_6[VAR_4 + VAR_3], (VAR_4 == 7) ? " " : "");
  }
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
   VAR_5 = VAR_6[VAR_4 + VAR_3];
   FUNC_0(VAR_0, "%c", (VAR_5 < 0x20) ? '.' : ((VAR_5 > 0x7f) ? '.' : VAR_5));
  }
  FUNC_0(VAR_0, "\n");
 }
}
