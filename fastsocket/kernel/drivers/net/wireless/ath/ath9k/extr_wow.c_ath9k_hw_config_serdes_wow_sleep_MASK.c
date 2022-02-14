
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ia_rows; } ;
struct ath_hw {TYPE_1__ iniPcieSerdesWow; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->iniPcieSerdesWow.ia_rows; VAR_1++)
  FUNC_1(VAR_0, FUNC_0(&VAR_0->iniPcieSerdesWow, VAR_1, 0),
     FUNC_0(&VAR_0->iniPcieSerdesWow, VAR_1, 1));

 FUNC_2(1000, 1500);
}
