
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_info_t {int manf_id; } ;
struct TYPE_2__ {scalar_t__ BasePort1; } ;
struct pcmcia_device {TYPE_1__ io; struct scsi_info_t* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_2)
{
 struct scsi_info_t *VAR_3 = VAR_2->priv;


 if ((VAR_3->manf_id == VAR_0) ||
     (VAR_3->manf_id == VAR_1) ||
     (VAR_3->manf_id == 0x0098)) {
  FUNC_1(0x80, VAR_2->io.BasePort1 + 0xd);
  FUNC_1(0x24, VAR_2->io.BasePort1 + 0x9);
  FUNC_1(0x04, VAR_2->io.BasePort1 + 0xd);
 }




 FUNC_0(VAR_2->io.BasePort1);

 return 0;
}
