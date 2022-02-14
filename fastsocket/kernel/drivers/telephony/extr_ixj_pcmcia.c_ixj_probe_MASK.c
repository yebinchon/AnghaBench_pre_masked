
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int IntType; } ;
struct TYPE_3__ {int IOAddrLines; void* Attributes2; void* Attributes1; } ;
struct pcmcia_device {int priv; TYPE_2__ conf; TYPE_1__ io; } ;
struct ixj_info_t {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_4)
{
 FUNC_0(0, "ixj_attach()\n");

 VAR_4->io.Attributes1 = VAR_3;
 VAR_4->io.Attributes2 = VAR_3;
 VAR_4->io.IOAddrLines = 3;
 VAR_4->conf.IntType = VAR_2;
 VAR_4->priv = FUNC_2(sizeof(struct ixj_info_t), VAR_1);
 if (!VAR_4->priv) {
  return -VAR_0;
 }

 return FUNC_1(VAR_4);
}
