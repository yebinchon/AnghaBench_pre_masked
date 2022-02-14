
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_header {int size; } ;


 int VAR_0 ;

__attribute__((used)) static struct block_header *FUNC_0(struct block_header *VAR_1)
{
 return (struct block_header *)
  ((char *)VAR_1 + VAR_1->size + VAR_0);
}
