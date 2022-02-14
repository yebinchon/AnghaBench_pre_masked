
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_csr_iterator {int* p; int end; } ;



int FUNC_0(struct fw_csr_iterator *VAR_0, int *VAR_1, int *VAR_2)
{
 *VAR_1 = *VAR_0->p >> 24;
 *VAR_2 = *VAR_0->p & 0xffffff;

 return VAR_0->p++ < VAR_0->end;
}
