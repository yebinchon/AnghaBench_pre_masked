
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_queued_cmd {int dummy; } ;
struct ata_port {int qc_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*,int ,char*,int,int) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_3 (struct ata_port*,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ata_port *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = VAR_2->qc_active ^ VAR_3;

 if (FUNC_4(VAR_5 & VAR_3)) {
  FUNC_1(VAR_2, VAR_1, "illegal qc_active transition "
    "(%08x->%08x)\n", VAR_2->qc_active, VAR_3);
  return -VAR_0;
 }

 while (VAR_5) {
  struct ata_queued_cmd *VAR_6;
  unsigned int VAR_7 = FUNC_0(VAR_5);

  VAR_6 = FUNC_3(VAR_2, VAR_7);
  if (VAR_6) {
   FUNC_2(VAR_6);
   VAR_4++;
  }
  VAR_5 &= ~(1 << VAR_7);
 }

 return VAR_4;
}
