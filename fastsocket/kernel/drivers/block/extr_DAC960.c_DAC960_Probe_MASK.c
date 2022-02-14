
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_7__ {int * disks; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_2 (char*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
  int VAR_6;
  DAC960_Controller_T *VAR_7;

  if (VAR_0 == VAR_1)
  {
 FUNC_2("More than %d DAC960 Controllers detected - "
                       "ignoring from Controller at\n",
                       ((void*)0), VAR_1);
 return -VAR_3;
  }

  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (!VAR_7)
 return -VAR_3;

  if (!FUNC_4(VAR_7)) {
   FUNC_3(VAR_7);
 return -VAR_3;
  }

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        FUNC_7(VAR_7->disks[VAR_6], FUNC_6(VAR_7, VAR_6));
        FUNC_5(VAR_7->disks[VAR_6]);
  }
  FUNC_0(VAR_7);
  return 0;
}
