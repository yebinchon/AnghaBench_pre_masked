
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;



void
FUNC_0(void *VAR_0)
{
 volatile uint64_t *VAR_1 = (volatile uint64_t*)VAR_0;
 volatile uint32_t *VAR_2 = (volatile uint32_t*)VAR_0;

 VAR_1[5] = *(volatile uint64_t*)&VAR_2[6];
 VAR_1[4] = VAR_2[5];
 VAR_1[3] = VAR_2[4];
 VAR_1[2] = VAR_2[3];
 VAR_1[1] = *(volatile uint64_t*)&VAR_2[1];
 VAR_1[0] = VAR_2[0];
}
