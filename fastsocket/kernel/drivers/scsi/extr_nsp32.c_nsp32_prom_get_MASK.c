
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int BaseAddress; } ;
typedef TYPE_1__ nsp32_hw_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(nsp32_hw_data *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3->BaseAddress;
 int VAR_6, VAR_7;

 if (VAR_4 != VAR_1) {
  FUNC_1(VAR_0, "return value is not appropriate");
  return 0;
 }


 VAR_6 = FUNC_0(VAR_5, VAR_2) & VAR_4;

 if (VAR_6 == 0) {
  VAR_7 = 0;
 } else {
  VAR_7 = 1;
 }

 FUNC_2(10);

 return VAR_7;
}
