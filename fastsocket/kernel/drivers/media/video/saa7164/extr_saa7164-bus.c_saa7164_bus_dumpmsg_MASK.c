
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmComResInfo {int seqno; int controlselector; int command; int size; int flags; int id; } ;
struct saa7164_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

void FUNC_1(struct saa7164_dev *VAR_1, struct tmComResInfo* VAR_2,
 void *VAR_3)
{
 FUNC_0(VAR_0, "Dumping msg structure:\n");
 FUNC_0(VAR_0, " .id               = %d\n", VAR_2->id);
 FUNC_0(VAR_0, " .flags            = 0x%x\n", VAR_2->flags);
 FUNC_0(VAR_0, " .size             = 0x%x\n", VAR_2->size);
 FUNC_0(VAR_0, " .command          = 0x%x\n", VAR_2->command);
 FUNC_0(VAR_0, " .controlselector  = 0x%x\n", VAR_2->controlselector);
 FUNC_0(VAR_0, " .seqno            = %d\n", VAR_2->seqno);
 if (VAR_3)
  FUNC_0(VAR_0, " .buffer (ignored)\n");
}
