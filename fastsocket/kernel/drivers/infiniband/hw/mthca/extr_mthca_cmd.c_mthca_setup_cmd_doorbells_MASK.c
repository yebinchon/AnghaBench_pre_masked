
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int flags; int dbell_map; int * dbell_offsets; } ;
struct mthca_dev {TYPE_1__ cmd; int pdev; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct mthca_dev*,char*) ;
 int FUNC_3 (struct mthca_dev*,char*,unsigned long long,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct mthca_dev *VAR_2, u64 VAR_3)
{
 phys_addr_t VAR_4;
 u16 VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 8; ++VAR_6)
  VAR_5 = FUNC_1(VAR_5, VAR_2->cmd.dbell_offsets[VAR_6]);

 if ((VAR_3 & VAR_1) != ((VAR_3 + VAR_5) & VAR_1)) {
  FUNC_3(VAR_2, "Firmware doorbell region at 0x%016llx, "
      "length 0x%x crosses a page boundary\n",
      (unsigned long long) VAR_3, VAR_5);
  return;
 }

 VAR_4 = FUNC_5(VAR_2->pdev, 2) +
  ((FUNC_4(VAR_2->pdev, 2) - 1) & VAR_3);
 VAR_2->cmd.dbell_map = FUNC_0(VAR_4, VAR_5 + sizeof(u32));
 if (!VAR_2->cmd.dbell_map)
  return;

 VAR_2->cmd.flags |= VAR_0;
 FUNC_2(VAR_2, "Mapped doorbell page for posting FW commands\n");
}
