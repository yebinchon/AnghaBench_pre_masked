
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct eadm_scsw {int stctl; int eswf; int fctl; scalar_t__ aob; } ;
struct TYPE_7__ {struct eadm_scsw eadm; } ;
struct TYPE_8__ {TYPE_1__ scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct TYPE_9__ {scalar_t__ r; } ;
struct TYPE_10__ {TYPE_3__ erw; } ;
struct TYPE_11__ {TYPE_4__ eadm; } ;
struct irb {TYPE_5__ esw; } ;
struct eadm_private {scalar_t__ state; } ;
struct aob {int dummy; } ;
struct TYPE_12__ {int irb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct irb*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct subchannel*,int ) ;
 int FUNC_3 (struct subchannel*,int ) ;
 struct eadm_private* FUNC_4 (struct subchannel*) ;
 int FUNC_5 (struct aob*,int) ;

__attribute__((used)) static void FUNC_6(struct subchannel *VAR_10)
{
 struct eadm_private *VAR_11 = FUNC_4(VAR_10);
 struct eadm_scsw *VAR_12 = &VAR_10->schib.scsw.eadm;
 struct irb *VAR_13 = (struct irb *)&VAR_5.irb;
 int VAR_14 = 0;

 FUNC_0(6, "irq");
 FUNC_1(6, VAR_13, sizeof(*VAR_13));

 if ((VAR_12->stctl & (VAR_8 | VAR_9))
     && VAR_12->eswf == 1 && VAR_13->esw.eadm.erw.r)
  VAR_14 = -VAR_3;

 if (VAR_12->fctl & VAR_7)
  VAR_14 = -VAR_4;

 FUNC_3(VAR_10, 0);

 if (VAR_11->state != VAR_0) {
  FUNC_0(1, "irq unsol");
  FUNC_1(1, VAR_13, sizeof(*VAR_13));
  VAR_11->state = VAR_2;
  FUNC_2(VAR_10, VAR_6);
  return;
 }
 FUNC_5((struct aob *)(unsigned long)VAR_12->aob, VAR_14);
 VAR_11->state = VAR_1;
}
