
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct k8temp_data {int valid; int sensorsp; int update_lock; scalar_t__ last_updated; int ** temp; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct k8temp_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct pci_dev* FUNC_7 (struct device*) ;

__attribute__((used)) static struct k8temp_data *FUNC_8(struct device *VAR_5)
{
 struct k8temp_data *VAR_6 = FUNC_0(VAR_5);
 struct pci_dev *VAR_7 = FUNC_7(VAR_5);
 u8 VAR_8;

 FUNC_1(&VAR_6->update_lock);

 if (!VAR_6->valid
     || FUNC_6(VAR_4, VAR_6->last_updated + VAR_0)) {
  FUNC_3(VAR_7, VAR_1, &VAR_8);
  VAR_8 &= ~(VAR_3 | VAR_2);
  FUNC_5(VAR_7, VAR_1, VAR_8);
  FUNC_4(VAR_7, VAR_1, &VAR_6->temp[0][0]);

  if (VAR_6->sensorsp & VAR_3) {
   VAR_8 |= VAR_3;
   FUNC_5(VAR_7, VAR_1, VAR_8);
   FUNC_4(VAR_7, VAR_1,
           &VAR_6->temp[0][1]);
  }

  if (VAR_6->sensorsp & VAR_2) {
   VAR_8 &= ~VAR_3;
   VAR_8 |= VAR_2;
   FUNC_5(VAR_7, VAR_1, VAR_8);
   FUNC_4(VAR_7, VAR_1,
           &VAR_6->temp[1][0]);

   if (VAR_6->sensorsp & VAR_3) {
    VAR_8 |= VAR_3;
    FUNC_5(VAR_7, VAR_1, VAR_8);
    FUNC_4(VAR_7, VAR_1,
            &VAR_6->temp[1][1]);
   }
  }

  VAR_6->last_updated = VAR_4;
  VAR_6->valid = 1;
 }

 FUNC_2(&VAR_6->update_lock);
 return VAR_6;
}
