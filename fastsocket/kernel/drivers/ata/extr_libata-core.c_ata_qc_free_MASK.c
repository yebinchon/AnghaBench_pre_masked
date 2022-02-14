
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {unsigned int tag; scalar_t__ flags; struct ata_port* ap; } ;
struct ata_port {int qc_allocated; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int *) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2;
 unsigned int VAR_3;

 FUNC_0(VAR_1 == ((void*)0));
 VAR_2 = VAR_1->ap;

 VAR_1->flags = 0;
 VAR_3 = VAR_1->tag;
 if (FUNC_3(FUNC_1(VAR_3))) {
  VAR_1->tag = VAR_0;
  FUNC_2(VAR_3, &VAR_2->qc_allocated);
 }
}
