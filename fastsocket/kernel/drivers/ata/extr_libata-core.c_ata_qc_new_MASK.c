
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {unsigned int tag; } ;
struct ata_port {int pflags; int qc_allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,unsigned int) ;
 int FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct ata_queued_cmd *FUNC_3(struct ata_port *VAR_2)
{
 struct ata_queued_cmd *VAR_3 = ((void*)0);
 unsigned int VAR_4;


 if (FUNC_2(VAR_2->pflags & VAR_1))
  return ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_0 - 1; VAR_4++)
  if (!FUNC_1(VAR_4, &VAR_2->qc_allocated)) {
   VAR_3 = FUNC_0(VAR_2, VAR_4);
   break;
  }

 if (VAR_3)
  VAR_3->tag = VAR_4;

 return VAR_3;
}
