
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_1 = 0;
 VAR_1 = *VAR_0;
 VAR_1 = VAR_1 + (*(VAR_0+1)<<8);
 VAR_1 = VAR_1 + (*(VAR_0+2)<<16);
 VAR_1 = VAR_1 + (*(VAR_0+3)<<24);
 VAR_0 += 4;
 return VAR_1;
}
