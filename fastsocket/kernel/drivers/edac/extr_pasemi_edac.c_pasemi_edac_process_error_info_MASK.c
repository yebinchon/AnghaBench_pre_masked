
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int ctl_name; TYPE_1__* csrows; int dev; } ;
struct TYPE_2__ {int first_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mem_ctl_info*,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (struct mem_ctl_info*,int ,int ,int,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_6, u32 VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_3(VAR_6->dev);
 u32 VAR_9;
 u32 VAR_10;

 if (!VAR_7)
  return;

 FUNC_2(VAR_8, VAR_0, &VAR_9);

 VAR_10 = (VAR_9 & VAR_1) >>
  VAR_2;


 if (VAR_7 & (VAR_3 |
        VAR_4)) {
  FUNC_1(VAR_6, VAR_6->csrows[VAR_10].first_page, 0,
      VAR_10, VAR_6->ctl_name);
 }


 if (VAR_7 & VAR_5) {
  FUNC_0(VAR_6, VAR_6->csrows[VAR_10].first_page, 0,
      0, VAR_10, 0, VAR_6->ctl_name);
 }
}
