
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct intel_iommu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct intel_iommu *VAR_1, int VAR_2,
  u8 VAR_3, u16 VAR_4, unsigned long long VAR_5)
{
 const char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3, &VAR_7);

 if (VAR_7 == VAR_0)
  FUNC_3("INTR-REMAP: Request device [[%02x:%02x.%d] "
         "fault index %llx\n"
   "INTR-REMAP:[fault reason %02d] %s\n",
   (VAR_4 >> 8), FUNC_1(VAR_4 & 0xFF),
   FUNC_0(VAR_4 & 0xFF), VAR_5 >> 48,
   VAR_3, VAR_6);
 else
  FUNC_3("DMAR:[%s] Request device [%02x:%02x.%d] "
         "fault addr %llx \n"
         "DMAR:[fault reason %02d] %s\n",
         (VAR_2 ? "DMA Read" : "DMA Write"),
         (VAR_4 >> 8), FUNC_1(VAR_4 & 0xFF),
         FUNC_0(VAR_4 & 0xFF), VAR_5, VAR_3, VAR_6);
 return 0;
}
