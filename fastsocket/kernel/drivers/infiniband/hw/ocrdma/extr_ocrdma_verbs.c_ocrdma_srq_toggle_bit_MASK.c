
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_srq {unsigned int* idx_bit_fields; } ;



__attribute__((used)) static void FUNC_0(struct ocrdma_srq *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 / 32;
 unsigned int VAR_3 = (1 << (VAR_1 % 32));

 if (VAR_0->idx_bit_fields[VAR_2] & VAR_3)
  VAR_0->idx_bit_fields[VAR_2] &= ~VAR_3;
 else
  VAR_0->idx_bit_fields[VAR_2] |= VAR_3;
}
