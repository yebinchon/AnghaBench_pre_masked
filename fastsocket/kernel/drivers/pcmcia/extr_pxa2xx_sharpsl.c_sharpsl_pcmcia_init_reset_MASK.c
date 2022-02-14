
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {size_t nr; } ;
struct scoop_pcmcia_dev {scalar_t__ keep_rd; int keep_vs; int dev; } ;
struct TYPE_2__ {int (* power_ctrl ) (int ,int,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct scoop_pcmcia_dev* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,size_t) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct soc_pcmcia_socket *VAR_4)
{
 struct scoop_pcmcia_dev *VAR_5 = &VAR_2[VAR_4->nr];

 FUNC_0(VAR_5->dev);


 if (VAR_3->power_ctrl)
  VAR_3->power_ctrl(VAR_5->dev, 0x0000, VAR_4->nr);
 else
  FUNC_2(VAR_5->dev, VAR_1, 0x0000);

 VAR_5->keep_vs = VAR_0;
 VAR_5->keep_rd = 0;
}
