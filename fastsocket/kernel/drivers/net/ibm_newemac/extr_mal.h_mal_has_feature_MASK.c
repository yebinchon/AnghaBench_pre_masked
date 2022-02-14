
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mal_instance {unsigned long features; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct mal_instance *VAR_2,
  unsigned long VAR_3)
{
 return (VAR_0 & VAR_3) ||
  (VAR_1 & VAR_2->features & VAR_3);
}
