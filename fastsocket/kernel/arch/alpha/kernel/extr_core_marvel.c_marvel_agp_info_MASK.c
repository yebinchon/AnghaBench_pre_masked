
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vuip ;
struct pci_controller {scalar_t__ sysdata; int index; int sg_pci; } ;
struct io7_port {TYPE_8__* csrs; } ;
struct io7 {TYPE_1__* ports; } ;
struct TYPE_18__ {int csr; } ;
struct TYPE_14__ {int csr; } ;
struct TYPE_19__ {TYPE_7__ AGP_CMD; TYPE_3__ AGP_STAT; } ;
typedef TYPE_8__ io7_ioport_csrs ;
struct TYPE_17__ {int lw; } ;
struct TYPE_15__ {int rq; } ;
struct TYPE_16__ {TYPE_4__ bits; int lw; } ;
struct TYPE_13__ {int * sysdata; scalar_t__ size; scalar_t__ bus_base; } ;
struct TYPE_20__ {TYPE_6__ mode; TYPE_5__ capability; TYPE_2__ aperture; int * ops; int * private; struct pci_controller* hose; } ;
typedef TYPE_9__ alpha_agp_info ;
struct TYPE_12__ {struct pci_controller* hose; int enabled; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct pci_controller*,int ,int ,int ) ;
 TYPE_9__* FUNC_2 (int,int ) ;
 int VAR_2 ;
 struct io7* FUNC_3 (struct io7*) ;
 int FUNC_4 (char*,int ) ;

alpha_agp_info *
FUNC_5(void)
{
 struct pci_controller *VAR_3;
 io7_ioport_csrs *VAR_4;
 alpha_agp_info *VAR_5;
 struct io7 *VAR_6;







 VAR_3 = ((void*)0);
 for (VAR_6 = ((void*)0); (VAR_6 = FUNC_3(VAR_6)) != ((void*)0); ) {
  struct pci_controller *VAR_7;
  vuip VAR_8;

  if (!VAR_6->ports[VAR_1].enabled)
   continue;

  VAR_7 = VAR_6->ports[VAR_1].hose;
  VAR_8 = (vuip)FUNC_1(VAR_7, 0, FUNC_0(5, 0), 0);

  if (*VAR_8 != 0xffffffffu) {
   VAR_3 = VAR_7;
   break;
  }
 }

 if (!VAR_3 || !VAR_3->sg_pci)
  return ((void*)0);

 FUNC_4("MARVEL - using hose %d as AGP\n", VAR_3->index);




 VAR_4 = ((struct io7_port *)VAR_3->sysdata)->csrs;




 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);




 VAR_5->hose = VAR_3;
 VAR_5->private = ((void*)0);
 VAR_5->ops = &VAR_2;




 VAR_5->aperture.bus_base = 0;
 VAR_5->aperture.size = 0;
 VAR_5->aperture.sysdata = ((void*)0);
 VAR_5->capability.lw = VAR_4->AGP_STAT.csr;
 VAR_5->capability.bits.rq = 0xf;




 VAR_5->mode.lw = VAR_4->AGP_CMD.csr;

 return VAR_5;
}
