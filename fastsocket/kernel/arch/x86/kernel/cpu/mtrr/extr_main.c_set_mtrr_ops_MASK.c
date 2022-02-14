
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrr_ops {size_t vendor; } ;


 size_t VAR_0 ;
 struct mtrr_ops** VAR_1 ;

void FUNC_0(struct mtrr_ops *VAR_2)
{
 if (VAR_2->vendor && VAR_2->vendor < VAR_0)
  VAR_1[VAR_2->vendor] = VAR_2;
}
