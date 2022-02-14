
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_size; scalar_t__ b_data; } ;
typedef int block_t ;



__attribute__((used)) static inline block_t *FUNC_0(struct buffer_head *VAR_0)
{
 return (block_t *)((char*)VAR_0->b_data + VAR_0->b_size);
}
