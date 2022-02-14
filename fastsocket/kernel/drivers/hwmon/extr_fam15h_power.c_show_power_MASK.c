
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int devfn; int bus; } ;
struct fam15h_power_data {int base_tdp; int tdp_to_watts; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fam15h_power_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 struct pci_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 s32 VAR_8;
 u64 VAR_9;
 struct pci_dev *VAR_10 = FUNC_6(VAR_2);
 struct fam15h_power_data *VAR_11 = FUNC_2(VAR_2);

 FUNC_3(VAR_10->bus, FUNC_0(FUNC_1(VAR_10->devfn), 5),
      VAR_1, &VAR_5);
 VAR_8 = (VAR_5 >> 4) & 0x3fffff;
 VAR_8 = FUNC_4(VAR_8, 21);
 VAR_7 = (VAR_5 & 0xf) + 1;

 FUNC_3(VAR_10->bus, FUNC_0(FUNC_1(VAR_10->devfn), 5),
      VAR_0, &VAR_5);

 VAR_6 = VAR_5 >> 16;
 VAR_9 = (VAR_6 + VAR_11->base_tdp) << VAR_7;
 VAR_9 -= VAR_8;
 VAR_9 *= VAR_11->tdp_to_watts;
 VAR_9 = (VAR_9 * 15625) >> (10 + VAR_7);
 return FUNC_5(VAR_4, "%u\n", (unsigned int) VAR_9);
}
