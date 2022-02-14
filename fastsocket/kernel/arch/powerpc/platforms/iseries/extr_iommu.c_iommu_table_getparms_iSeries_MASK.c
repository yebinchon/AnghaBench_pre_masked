
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table_cb {unsigned long itc_busno; unsigned char itc_slotno; unsigned char itc_virtbus; int itc_size; int itc_index; int itc_offset; } ;
struct iommu_table {int it_size; unsigned long it_busno; int it_blocksize; int it_type; int it_index; int it_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iommu_table_cb*) ;
 int FUNC_2 (struct iommu_table_cb*) ;
 struct iommu_table_cb* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;

void FUNC_5(unsigned long VAR_5,
      unsigned char VAR_6,
      unsigned char VAR_7,
      struct iommu_table* VAR_8)
{
 struct iommu_table_cb *VAR_9;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);
 if (VAR_9 == ((void*)0))
  FUNC_4("PCI_DMA: TCE Table Allocation failed.");

 VAR_9->itc_busno = VAR_5;
 VAR_9->itc_slotno = VAR_6;
 VAR_9->itc_virtbus = VAR_7;

 FUNC_0(FUNC_1(VAR_9));

 if (VAR_9->itc_size == 0)
  FUNC_4("PCI_DMA: parms->size is zero, parms is 0x%p", VAR_9);


 VAR_8->it_size = (VAR_9->itc_size * VAR_2) / VAR_1;
 VAR_8->it_busno = VAR_9->itc_busno;
 VAR_8->it_offset = VAR_9->itc_offset;
 VAR_8->it_index = VAR_9->itc_index;
 VAR_8->it_blocksize = 1;
 VAR_8->it_type = VAR_7 ? VAR_4 : VAR_3;

 FUNC_2(VAR_9);
}
