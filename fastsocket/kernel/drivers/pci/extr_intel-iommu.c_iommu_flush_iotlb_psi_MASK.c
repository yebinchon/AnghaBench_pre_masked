
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t u16 ;
struct TYPE_2__ {int (* flush_iotlb ) (struct intel_iommu*,size_t,int,unsigned int,int ) ;} ;
struct intel_iommu {int * domains; int cap; TYPE_1__ flush; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,unsigned int) ;
 int FUNC_7 (struct intel_iommu*,size_t,int,unsigned int,int ) ;
 int FUNC_8 (struct intel_iommu*,size_t,int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_9(struct intel_iommu *VAR_3, u16 VAR_4,
      unsigned long VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = FUNC_5(FUNC_1(VAR_6));
 uint64_t VAR_8 = (uint64_t)VAR_5 << VAR_2;

 FUNC_0(VAR_6 == 0);







 if (!FUNC_4(VAR_3->cap) || VAR_7 > FUNC_3(VAR_3->cap))
  VAR_3->flush.flush_iotlb(VAR_3, VAR_4, 0, 0,
      VAR_0);
 else
  VAR_3->flush.flush_iotlb(VAR_3, VAR_4, VAR_8, VAR_7,
      VAR_1);





 if (!FUNC_2(VAR_3->cap) || VAR_4)
  FUNC_6(VAR_3->domains[VAR_4], VAR_8, VAR_7);
}
