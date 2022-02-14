
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_handle_int {unsigned int irq; } ;



__attribute__((used)) static struct intc_handle_int *FUNC_0(struct intc_handle_int *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if ((VAR_0 + VAR_3)->irq != VAR_2)
   continue;

  return VAR_0 + VAR_3;
 }

 return ((void*)0);
}
