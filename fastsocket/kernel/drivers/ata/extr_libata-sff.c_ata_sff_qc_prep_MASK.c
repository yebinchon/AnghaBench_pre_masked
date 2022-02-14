
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;

void FUNC_1(struct ata_queued_cmd *VAR_1)
{
 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_0(VAR_1);
}
