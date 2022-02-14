
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct block_header {int size; } ;
typedef scalar_t__ obj ;


 scalar_t__ VAR_0 ;

u32 FUNC_0(void *VAR_1)
{
 struct block_header *VAR_2;

 VAR_2 = (struct block_header *)((char *)(VAR_1) - VAR_0);
 return VAR_2->size;
}
