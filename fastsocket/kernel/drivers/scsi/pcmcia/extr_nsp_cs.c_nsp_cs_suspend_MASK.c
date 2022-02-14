
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {TYPE_2__* priv; } ;
struct TYPE_4__ {int stop; TYPE_1__* host; } ;
typedef TYPE_2__ scsi_info_t ;
typedef int nsp_hw_data ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 scsi_info_t *VAR_3 = VAR_2->priv;
 nsp_hw_data *VAR_4;

 FUNC_0(VAR_1, "event: suspend");

 if (VAR_3->host != ((void*)0)) {
  FUNC_1(VAR_0, "clear SDTR status");

  VAR_4 = (nsp_hw_data *)VAR_3->host->hostdata;

  FUNC_2(VAR_4);
 }

 VAR_3->stop = 1;

 return 0;
}
