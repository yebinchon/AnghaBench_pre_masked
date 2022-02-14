
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_2__ {size_t channel; int enable; } ;
struct i7core_pvt {TYPE_1__ inject; int ** pci_ch; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct mem_ctl_info *VAR_1,
     char *VAR_2)
{
 struct i7core_pvt *VAR_3 = VAR_1->pvt_info;
 u32 VAR_4;

 if (!VAR_3->pci_ch[VAR_3->inject.channel][0])
  return 0;

 FUNC_1(VAR_3->pci_ch[VAR_3->inject.channel][0],
          VAR_0, &VAR_4);

 FUNC_0("Inject error read: 0x%018x\n", VAR_4);

 if (VAR_4 & 0x0c)
  VAR_3->inject.enable = 1;

 return FUNC_2(VAR_2, "%d\n", VAR_3->inject.enable);
}
