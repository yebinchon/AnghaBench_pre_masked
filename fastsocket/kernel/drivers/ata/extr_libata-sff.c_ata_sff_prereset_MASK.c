
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int action; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {struct ata_eh_context eh_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_link*,int ,char*,int) ;
 int FUNC_2 (struct ata_link*,unsigned long) ;
 int FUNC_3 (struct ata_link*,unsigned long) ;

int FUNC_4(struct ata_link *VAR_3, unsigned long VAR_4)
{
 struct ata_eh_context *VAR_5 = &VAR_3->eh_context;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;


 if (VAR_5->i.action & VAR_0)
  return 0;


 if (!FUNC_0(VAR_3)) {
  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if (VAR_6 && VAR_6 != -VAR_1) {
   FUNC_1(VAR_3, VAR_2, "device not ready "
     "(errno=%d), forcing hardreset\n", VAR_6);
   VAR_5->i.action |= VAR_0;
  }
 }

 return 0;
}
