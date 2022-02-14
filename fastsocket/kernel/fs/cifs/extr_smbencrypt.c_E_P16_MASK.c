
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;
 unsigned char VAR_3[8] =
     { 0x4b, 0x47, 0x53, 0x21, 0x40, 0x23, 0x24, 0x25 };

 VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_0);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_1 + 8, VAR_3, VAR_0 + 7);
 return VAR_2;
}
