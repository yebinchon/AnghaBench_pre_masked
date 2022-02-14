
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_0, int *VAR_1, int VAR_2, int VAR_3)
{
 if (*VAR_1 == 0)
  *VAR_1 = VAR_0 * VAR_2 / (128 * VAR_3) * 1000;
 FUNC_0("Using ACR timing N=%d CTS=%d for frequency %d\n",
    VAR_2, *VAR_1, VAR_3);
}
