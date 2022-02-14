
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0)
{
 int VAR_1 = 0, VAR_2;

 VAR_2 = 16; if (VAR_0 >> 16 == 0) VAR_2 = 0; VAR_1 += VAR_2; VAR_0 >>= VAR_2;
 VAR_2 = 8; if (VAR_0 >> 8 == 0) VAR_2 = 0; VAR_1 += VAR_2; VAR_0 >>= VAR_2;
 VAR_2 = 4; if (VAR_0 >> 4 == 0) VAR_2 = 0; VAR_1 += VAR_2; VAR_0 >>= VAR_2;
 VAR_2 = 2; if (VAR_0 >> 2 == 0) VAR_2 = 0; VAR_1 += VAR_2; VAR_0 >>= VAR_2;
 VAR_2 = 1; if (VAR_0 >> 1 == 0) VAR_2 = 0; VAR_1 += VAR_2;

 return VAR_1;
}
