
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;
 unsigned long* VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_2, unsigned long VAR_3[])
{
 if (VAR_2 <= 1)
  VAR_3[0] &= ~(VAR_0[VAR_2] << VAR_1[VAR_2]);
 else
  VAR_3[1] &= ~(VAR_0[VAR_2] << VAR_1[VAR_2]);
}
