
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int) ;
 int* FUNC_2 (int ,int) ;
 int VAR_3 ;

void FUNC_3(int VAR_4)
{
 int VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
  FUNC_2(VAR_3, VAR_4)[VAR_6] = -1;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (!FUNC_0(VAR_4, VAR_2[VAR_5].domain))
   continue;
  VAR_6 = FUNC_1(VAR_5);
  FUNC_2(VAR_3, VAR_4)[VAR_6] = VAR_5;
 }
}
