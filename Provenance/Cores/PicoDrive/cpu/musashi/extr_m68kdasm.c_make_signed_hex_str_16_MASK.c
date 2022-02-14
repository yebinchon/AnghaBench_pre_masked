
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char* FUNC_1(uint VAR_0)
{
 static char VAR_1[20];

 VAR_0 &= 0xffff;

 if(VAR_0 == 0x8000)
  FUNC_0(VAR_1, "-$8000");
 else if(VAR_0 & 0x8000)
  FUNC_0(VAR_1, "-$%x", (0-VAR_0) & 0x7fff);
 else
  FUNC_0(VAR_1, "$%x", VAR_0 & 0x7fff);

 return VAR_1;
}
