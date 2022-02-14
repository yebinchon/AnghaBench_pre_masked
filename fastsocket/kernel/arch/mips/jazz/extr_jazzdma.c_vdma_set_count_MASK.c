
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,unsigned int) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;

void FUNC_2(int VAR_2, int VAR_3)
{
 if (VAR_1)
  FUNC_0("vdma_set_count: channel %d, count %08x\n", VAR_2,
         (unsigned) VAR_3);

 FUNC_1(VAR_0 + (VAR_2 << 5), VAR_3);
}
