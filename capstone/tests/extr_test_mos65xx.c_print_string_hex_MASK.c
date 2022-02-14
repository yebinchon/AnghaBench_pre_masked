
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;

 FUNC_0("%s", VAR_0);
 for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_2; VAR_3++) {
  FUNC_0(" 0x%02x", *VAR_3 & 0xff);
 }

 FUNC_0("\n");
}
