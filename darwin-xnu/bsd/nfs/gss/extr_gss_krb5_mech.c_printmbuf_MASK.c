
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ mbuf_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(const char *VAR_0, mbuf_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 size_t VAR_4;
 int VAR_5 = 1;

 VAR_3 = VAR_3 ? VAR_3 : ~0;
 FUNC_3("%s mbuf = %p offset = %d len = %d:\n", VAR_0 ? VAR_0 : "mbuf", VAR_1, VAR_2, VAR_3);
 for (; VAR_1 && VAR_3; VAR_1 = FUNC_2(VAR_1)) {
  if (VAR_2 >= FUNC_1(VAR_1)) {
   VAR_2 -= FUNC_1(VAR_1);
   continue;
  }
  for(VAR_4 = VAR_2; VAR_3 && VAR_4 < FUNC_1(VAR_1); VAR_4++) {
   const char *VAR_6 = (VAR_5 % 8) ? " " : (VAR_5 % 16) ? "    " : "\n";
   FUNC_3("%02x%s", ((uint8_t *)FUNC_0(VAR_1))[VAR_4], VAR_6);
   VAR_3--;
   VAR_5++;
  }
  VAR_2 = 0;
 }
 if ((VAR_5-1) % 16)
  FUNC_3("\n");
 FUNC_3("Count chars %d\n", VAR_5 - 1);
}
