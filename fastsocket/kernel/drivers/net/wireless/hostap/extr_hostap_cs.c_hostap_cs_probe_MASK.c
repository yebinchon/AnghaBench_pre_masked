
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IntType; } ;
struct pcmcia_device {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1, "%s: setting Vcc=33 (constant)\n", VAR_3);
 VAR_4->conf.IntType = VAR_2;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_0, "prism2_config() failed\n");
 }

 return VAR_5;
}
