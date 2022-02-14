
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ipr_hostrcb_fabric_desc {scalar_t__ path_state; int cascaded_expander; int phy; int ioa_port; } ;
struct ipr_hostrcb {int dummy; } ;
struct TYPE_4__ {scalar_t__ active; scalar_t__ state; int desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,int ,int,int) ;
 int FUNC_2 (struct ipr_hostrcb*,char*,int ,int ,int ,...) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct ipr_hostrcb *VAR_4,
    struct ipr_hostrcb_fabric_desc *VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8 = VAR_5->path_state;
 u8 VAR_9 = VAR_8 & VAR_0;
 u8 VAR_10 = VAR_8 & VAR_1;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6].active != VAR_9)
   continue;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
   if (VAR_3[VAR_7].state != VAR_10)
    continue;

   if (VAR_5->cascaded_expander == 0xff && VAR_5->phy == 0xff) {
    FUNC_2(VAR_4, "%s %s: IOA Port=%d\n",
          VAR_2[VAR_6].desc, VAR_3[VAR_7].desc,
          VAR_5->ioa_port);
   } else if (VAR_5->cascaded_expander == 0xff) {
    FUNC_2(VAR_4, "%s %s: IOA Port=%d, Phy=%d\n",
          VAR_2[VAR_6].desc, VAR_3[VAR_7].desc,
          VAR_5->ioa_port, VAR_5->phy);
   } else if (VAR_5->phy == 0xff) {
    FUNC_2(VAR_4, "%s %s: IOA Port=%d, Cascade=%d\n",
          VAR_2[VAR_6].desc, VAR_3[VAR_7].desc,
          VAR_5->ioa_port, VAR_5->cascaded_expander);
   } else {
    FUNC_2(VAR_4, "%s %s: IOA Port=%d, Cascade=%d, Phy=%d\n",
          VAR_2[VAR_6].desc, VAR_3[VAR_7].desc,
          VAR_5->ioa_port, VAR_5->cascaded_expander, VAR_5->phy);
   }
   return;
  }
 }

 FUNC_1("Path state=%02X IOA Port=%d Cascade=%d Phy=%d\n", VAR_8,
  VAR_5->ioa_port, VAR_5->cascaded_expander, VAR_5->phy);
}
