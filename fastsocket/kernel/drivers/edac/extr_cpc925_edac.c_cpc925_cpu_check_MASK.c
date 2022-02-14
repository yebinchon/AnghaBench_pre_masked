
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edac_device_ctl_info {int ctl_name; struct cpc925_dev_info* pvt_info; } ;
struct cpc925_dev_info {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct edac_device_ctl_info *VAR_4)
{
 struct cpc925_dev_info *VAR_5 = VAR_4->pvt_info;
 u32 VAR_6;
 u32 VAR_7;


 VAR_6 = FUNC_0(VAR_5->vbase + VAR_2);
 if ((VAR_6 & VAR_0) == 0)
  return;

 VAR_7 = FUNC_0(VAR_5->vbase + VAR_3);
 FUNC_1(VAR_1, "Processor Interface Fault\n"
     "Processor Interface register dump:\n");
 FUNC_1(VAR_1, "APIMASK		0x%08x\n", VAR_7);
 FUNC_1(VAR_1, "APIEXCP		0x%08x\n", VAR_6);

 FUNC_2(VAR_4, 0, 0, VAR_4->ctl_name);
}
