
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dot_command_header {size_t command_size; size_t data_size; } ;



__attribute__((used)) static inline size_t FUNC_0(void *VAR_0)
{
 struct dot_command_header *VAR_1 = (struct dot_command_header *)VAR_0;
 return sizeof(struct dot_command_header) + VAR_1->command_size + VAR_1->data_size;
}
