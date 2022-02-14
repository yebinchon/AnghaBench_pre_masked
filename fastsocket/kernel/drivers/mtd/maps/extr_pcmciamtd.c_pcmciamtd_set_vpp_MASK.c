
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmciamtd_dev {int vpp; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int dummy; } ;
struct map_info {scalar_t__ map_priv_1; } ;
struct TYPE_3__ {int Attributes; int Vpp2; int Vpp1; scalar_t__ Vcc; } ;
typedef TYPE_1__ modconf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct pcmciamtd_dev*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pcmcia_device*,int ,int) ;
 int FUNC_2 (struct pcmcia_device*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_3, int VAR_4)
{
 struct pcmciamtd_dev *VAR_5 = (struct pcmciamtd_dev *)VAR_3->map_priv_1;
 struct pcmcia_device *VAR_6 = VAR_5->p_dev;
 modconf_t VAR_7;
 int VAR_8;

 VAR_7.Attributes = VAR_0 | VAR_1;
 VAR_7.Vcc = 0;
 VAR_7.Vpp1 = VAR_7.Vpp2 = VAR_4 ? VAR_5->vpp : 0;

 FUNC_0(2, "dev = %p on = %d vpp = %d\n", VAR_5, VAR_4, VAR_5->vpp);
 VAR_8 = FUNC_2(VAR_6, &VAR_7);
 if (VAR_8 != 0)
  FUNC_1(VAR_6, VAR_2, VAR_8);
}
