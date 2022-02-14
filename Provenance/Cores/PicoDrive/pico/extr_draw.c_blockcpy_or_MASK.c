
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void *VAR_0, void *VAR_1, size_t VAR_2, int VAR_3)
{
  unsigned char *VAR_4 = VAR_0, *VAR_5 = VAR_1;
  for (; VAR_2; VAR_2--)
    *VAR_4++ = (unsigned char) (*VAR_5++ | VAR_3);
}
