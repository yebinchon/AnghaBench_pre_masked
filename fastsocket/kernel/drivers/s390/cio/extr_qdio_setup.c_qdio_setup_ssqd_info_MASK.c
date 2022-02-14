
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char qdioac1; int sch_token; } ;
struct TYPE_4__ {int sch_no; } ;
struct qdio_irq {TYPE_1__ ssqd_desc; TYPE_2__ schid; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (struct qdio_irq*,unsigned char,int ) ;
 int FUNC_3 (struct qdio_irq*,unsigned char) ;
 int FUNC_4 (struct qdio_irq*,TYPE_2__*,int *) ;

void FUNC_5(struct qdio_irq *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, &VAR_3->schid, ((void*)0));
 if (VAR_5) {
  FUNC_0("%4x ssqd ERR", VAR_3->schid.sch_no);
  FUNC_0("rc:%x", VAR_5);

  VAR_4 = VAR_0 | VAR_1 |
    VAR_2;
 } else
  VAR_4 = VAR_3->ssqd_desc.qdioac1;

 FUNC_2(VAR_3, VAR_4, VAR_3->ssqd_desc.sch_token);
 FUNC_3(VAR_3, VAR_4);
 FUNC_1("qdioac:%4x", VAR_4);
}
