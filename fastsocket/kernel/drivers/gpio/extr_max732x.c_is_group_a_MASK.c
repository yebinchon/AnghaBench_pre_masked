
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max732x_chip {unsigned int mask_group_a; } ;



__attribute__((used)) static inline int FUNC_0(struct max732x_chip *VAR_0, unsigned VAR_1)
{
 return (1u << VAR_1) & VAR_0->mask_group_a;
}
