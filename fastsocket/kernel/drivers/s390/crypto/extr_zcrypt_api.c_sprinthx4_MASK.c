
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,char*,...) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1,
       unsigned int *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1, "\n%s\n", VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((VAR_5 % 8) == 0)
   VAR_4 += FUNC_0(VAR_1+VAR_4, "    ");
  VAR_4 += FUNC_0(VAR_1+VAR_4, "%08X ", VAR_2[VAR_5]);
  if ((VAR_5 % 8) == 7)
   VAR_4 += FUNC_0(VAR_1+VAR_4, "\n");
 }
 VAR_4 += FUNC_0(VAR_1+VAR_4, "\n");
 return VAR_4;
}
