
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, unsigned char *VAR_1,
       unsigned int VAR_2)
{
 if ((VAR_2 == 1) && (VAR_1[0] != (unsigned char)0xff) && (VAR_1[0] != 0x00))
  FUNC_0(VAR_0, "Weird byte 0x%02x\n", VAR_1[0]);
 else if (VAR_2 == 4)
  FUNC_0(VAR_0, "Weird key %02x %02x %02x %02x\n",
       VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3]);
 else
  FUNC_0(VAR_0, "Weird data, len=%d %02x %02x %02x %02x %02x %02x ...\n",
       VAR_2, VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5]);
}
