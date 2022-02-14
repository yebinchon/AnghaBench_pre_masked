
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {TYPE_2__* resource; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct apertures_struct {int count; TYPE_1__* ranges; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {void* size; void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct apertures_struct* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct pci_dev*,struct pci_device_id const*,int *) ;
 int FUNC_2 (struct apertures_struct*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ,int ,struct nouveau_device**) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *,struct nouveau_object**) ;
 int FUNC_6 (struct pci_dev*) ;
 void* FUNC_7 (struct pci_dev*,int) ;
 void* FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct apertures_struct*,char*,int) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_6,
        const struct pci_device_id *VAR_7)
{
 struct nouveau_device *VAR_8;
 struct apertures_struct *VAR_9;
 bool VAR_10 = 0;
 int VAR_11;


 VAR_9 = FUNC_0(3);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->ranges[0].base = FUNC_8(VAR_6, 1);
 VAR_9->ranges[0].size = FUNC_7(VAR_6, 1);
 VAR_9->count = 1;

 if (FUNC_7(VAR_6, 2)) {
  VAR_9->ranges[VAR_9->count].base = FUNC_8(VAR_6, 2);
  VAR_9->ranges[VAR_9->count].size = FUNC_7(VAR_6, 2);
  VAR_9->count++;
 }

 if (FUNC_7(VAR_6, 3)) {
  VAR_9->ranges[VAR_9->count].base = FUNC_8(VAR_6, 3);
  VAR_9->ranges[VAR_9->count].size = FUNC_7(VAR_6, 3);
  VAR_9->count++;
 }




 FUNC_10(VAR_9, "nouveaufb", VAR_10);
 FUNC_2(VAR_9);

 VAR_11 = FUNC_3(VAR_6, FUNC_4(VAR_6), FUNC_6(VAR_6),
        VAR_4, VAR_5, &VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_9(VAR_6);

 VAR_11 = FUNC_1(VAR_6, VAR_7, &VAR_3);
 if (VAR_11) {
  FUNC_5(((void*)0), (struct nouveau_object **)&VAR_8);
  return VAR_11;
 }

 return 0;
}
