
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_sriov {int initial; int ctrl; scalar_t__ pos; int mtask; int mstate; } ;
struct pci_dev {struct pci_sriov* sriov; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_8, int VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 resource_size_t VAR_12;
 struct pci_sriov *VAR_13 = VAR_8->sriov;

 if (VAR_9 <= VAR_13->initial)
  return 0;

 FUNC_4(VAR_8, VAR_13->pos + VAR_5, &VAR_11);
 VAR_10 = FUNC_1(VAR_11);
 if (VAR_10 > VAR_6)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_11);
 if (VAR_11 + VAR_9 > FUNC_5(VAR_8, VAR_10))
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_8, VAR_10) + VAR_11;
 VAR_13->mstate = FUNC_3(VAR_12, VAR_9);
 if (!VAR_13->mstate)
  return -VAR_1;

 FUNC_0(&VAR_13->mtask, VAR_7);

 VAR_13->ctrl |= VAR_4 | VAR_3;
 FUNC_7(VAR_8, VAR_13->pos + VAR_2, VAR_13->ctrl);

 return 0;
}
