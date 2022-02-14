
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bit; int btype; int code; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(int *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2[FUNC_0(VAR_1[VAR_3].code, VAR_1[VAR_3].btype)] =
   1 << VAR_1[VAR_3].bit;
}
