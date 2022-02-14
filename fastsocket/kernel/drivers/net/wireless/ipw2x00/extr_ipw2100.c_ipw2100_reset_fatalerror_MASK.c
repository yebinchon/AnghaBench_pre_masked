
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {scalar_t__ fatal_error; int fatal_index; scalar_t__* fatal_errors; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ipw2100_priv *VAR_1)
{
 if (!VAR_1->fatal_error)
  return;

 VAR_1->fatal_errors[VAR_1->fatal_index++] = VAR_1->fatal_error;
 VAR_1->fatal_index %= VAR_0;
 VAR_1->fatal_error = 0;
}
