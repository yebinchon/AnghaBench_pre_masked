
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int BaseAddress; } ;
typedef TYPE_1__ nsp32_hw_data ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(nsp32_hw_data *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->BaseAddress;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0);

 if (VAR_3 == 0) {
  VAR_5 &= ~VAR_2;
 } else {
  VAR_5 |= VAR_2;
 }

 FUNC_1(VAR_4, VAR_0, VAR_5);

 FUNC_2(10);
}
