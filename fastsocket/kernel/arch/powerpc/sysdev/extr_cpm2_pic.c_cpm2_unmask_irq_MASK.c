
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_simrh; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int *,int) ;
 int* VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7 = FUNC_1(VAR_4);

 VAR_5 = VAR_1[VAR_7];
 VAR_6 = VAR_2[VAR_7];

 VAR_3[VAR_6] |= 1 << VAR_5;
 FUNC_0(&VAR_0->ic_simrh + VAR_6, VAR_3[VAR_6]);
}
