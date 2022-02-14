
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct orc_scb {int scbidx; struct orc_extended_scb* escb; void* sense_addr; void* sg_addr; } ;
struct orc_host {scalar_t__ escb_phys; struct orc_extended_scb* escb_virt; struct orc_scb* scb_virt; scalar_t__ base; int scb_phys; } ;
struct orc_extended_scb {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct orc_host * VAR_4)
{
 struct orc_scb *VAR_5;
 int VAR_6;
 struct orc_extended_scb *VAR_7;
 dma_addr_t VAR_8;


 FUNC_1(VAR_0, VAR_4->base + VAR_3);

 FUNC_2(VAR_4->scb_phys, VAR_4->base + VAR_1);

 FUNC_2(VAR_4->scb_phys, VAR_4->base + VAR_2);


 VAR_5 = VAR_4->scb_virt;
 VAR_7 = VAR_4->escb_virt;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_8 = (VAR_4->escb_phys + (sizeof(struct orc_extended_scb) * VAR_6));
  VAR_5->sg_addr = FUNC_0((u32) VAR_8);
  VAR_5->sense_addr = FUNC_0((u32) VAR_8);
  VAR_5->escb = VAR_7;
  VAR_5->scbidx = VAR_6;
  VAR_5++;
  VAR_7++;
 }
}
