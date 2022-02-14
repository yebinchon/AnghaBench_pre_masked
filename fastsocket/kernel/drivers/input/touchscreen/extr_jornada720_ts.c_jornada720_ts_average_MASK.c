
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0[4])
{
 int VAR_1, VAR_2 = VAR_0[3];

 VAR_1 = VAR_0[0] | ((VAR_2 & 0x03) << 8);
 VAR_1 += VAR_0[1] | ((VAR_2 & 0x0c) << 6);
 VAR_1 += VAR_0[2] | ((VAR_2 & 0x30) << 4);

 return VAR_1 / 3;
}
