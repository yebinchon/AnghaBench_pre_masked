
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_window {unsigned long* ins; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct reg_window *FUNC_0(struct reg_window *VAR_1)
{
 unsigned long VAR_2 = VAR_1->ins[6];

 if (!VAR_2)
  return ((void*)0);

 return (struct reg_window *) (VAR_2 + VAR_0);
}
