
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ticcmd_t ;



int FUNC_0 (ticcmd_t* VAR_0)
{
    int VAR_1;
    int VAR_2 = 0;

    for (VAR_1=0 ; VAR_1< sizeof(*VAR_0)/4 - 1 ; VAR_1++)
 VAR_2 += ((int *)VAR_0)[VAR_1];

    return VAR_2;
}
