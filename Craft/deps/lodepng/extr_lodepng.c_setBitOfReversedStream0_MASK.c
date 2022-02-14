
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(size_t* VAR_0, unsigned char* VAR_1, unsigned char VAR_2)
{

  if(VAR_2)
  {

    VAR_1[(*VAR_0) >> 3] |= (VAR_2 << (7 - ((*VAR_0) & 0x7)));
  }
  (*VAR_0)++;
}
