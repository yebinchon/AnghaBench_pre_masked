
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(void)
{
 FUNC_0(VAR_0, "ihex2fw: Convert ihex files into binary "
  "representation for use by Linux kernel\n");
 FUNC_0(VAR_0, "usage: ihex2fw [<options>] <src.HEX> <dst.fw>\n");
 FUNC_0(VAR_0, "       -w: wide records (16-bit length)\n");
 FUNC_0(VAR_0, "       -s: sort records by address\n");
 FUNC_0(VAR_0, "       -j: include records for CS:IP/EIP address\n");
 return 1;
}
