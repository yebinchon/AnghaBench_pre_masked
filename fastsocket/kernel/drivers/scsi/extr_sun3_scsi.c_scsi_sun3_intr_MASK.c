
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {unsigned short csr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,void*) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 unsigned short VAR_9 = VAR_6->csr;
 int VAR_10 = 0;

 if(VAR_9 & ~VAR_3) {
  if(VAR_9 & VAR_0) {
   FUNC_2("scsi%d: bus error in dma\n", VAR_5->host_no);
  }

  if(VAR_9 & VAR_1) {
   FUNC_2("scsi%d: dma conflict\n", VAR_5->host_no);
  }
  VAR_10 = 1;
 }

 if(VAR_9 & (VAR_4 | VAR_2)) {
  FUNC_1(VAR_7, VAR_8);
  VAR_10 = 1;
 }

 return FUNC_0(VAR_10);
}
