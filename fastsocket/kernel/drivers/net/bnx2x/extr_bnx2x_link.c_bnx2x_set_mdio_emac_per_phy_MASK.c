
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct link_params {size_t num_phys; TYPE_1__* phy; int chip_id; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int mdio_ctrl; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_1,
     struct link_params *VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_2->num_phys;
       VAR_3++)
  FUNC_0(VAR_1, VAR_2->chip_id,
       VAR_2->phy[VAR_3].mdio_ctrl);
}
