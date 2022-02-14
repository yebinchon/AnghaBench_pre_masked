
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_4__ {unsigned short host_no; } ;
struct TYPE_3__ {unsigned short csr; int dma_count_lo; int dma_count_hi; int dma_addr_lo; int dma_addr_hi; int fifo_count; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,void*) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (char*,unsigned short,...) ;
 int VAR_8 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 unsigned short VAR_11 = VAR_7->csr;
 int VAR_12 = 0;

 VAR_7->csr &= ~VAR_2;






 if(VAR_11 & ~VAR_4) {
  if(VAR_11 & VAR_0) {
   FUNC_2("scsi%d: bus error in dma\n", VAR_6->host_no);







  }

  if(VAR_11 & VAR_1) {
   FUNC_2("scsi%d: dma conflict\n", VAR_6->host_no);
  }
  VAR_12 = 1;
 }

 if(VAR_11 & (VAR_5 | VAR_3)) {
  FUNC_1(VAR_9, VAR_10);
  VAR_12 = 1;
 }

 return FUNC_0(VAR_12);
}
