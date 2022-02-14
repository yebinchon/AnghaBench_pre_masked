
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int tasklet; } ;
struct TYPE_11__ {int tasklet; } ;
struct TYPE_10__ {int tasklet; } ;
struct TYPE_9__ {int tasklet; } ;
struct fw_ohci {int bus_seconds; TYPE_8__* it_context_list; TYPE_6__* ir_context_list; TYPE_4__ at_response_ctx; TYPE_3__ at_request_ctx; TYPE_2__ ar_response_ctx; TYPE_1__ ar_request_ctx; int bus_reset_tasklet; } ;
typedef int irqreturn_t ;
struct TYPE_15__ {int tasklet; } ;
struct TYPE_16__ {TYPE_7__ context; } ;
struct TYPE_13__ {int tasklet; } ;
struct TYPE_14__ {TYPE_5__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct fw_ohci*,int ) ;
 int FUNC_7 (struct fw_ohci*,int ,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_19, void *VAR_20)
{
 struct fw_ohci *VAR_21 = VAR_20;
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25;

 VAR_22 = FUNC_6(VAR_21, VAR_2);

 if (!VAR_22 || !~VAR_22)
  return VAR_1;


 FUNC_7(VAR_21, VAR_2, VAR_22 & ~VAR_10);
 FUNC_4(VAR_22);

 if (VAR_22 & VAR_18)
  FUNC_8(&VAR_21->bus_reset_tasklet);

 if (VAR_22 & VAR_8)
  FUNC_8(&VAR_21->ar_request_ctx.tasklet);

 if (VAR_22 & VAR_9)
  FUNC_8(&VAR_21->ar_response_ctx.tasklet);

 if (VAR_22 & VAR_16)
  FUNC_8(&VAR_21->at_request_ctx.tasklet);

 if (VAR_22 & VAR_17)
  FUNC_8(&VAR_21->at_response_ctx.tasklet);

 VAR_23 = FUNC_6(VAR_21, VAR_3);
 FUNC_7(VAR_21, VAR_3, VAR_23);

 while (VAR_23) {
  VAR_25 = FUNC_1(VAR_23) - 1;
  FUNC_8(&VAR_21->ir_context_list[VAR_25].context.tasklet);
  VAR_23 &= ~(1 << VAR_25);
 }

 VAR_23 = FUNC_6(VAR_21, VAR_4);
 FUNC_7(VAR_21, VAR_4, VAR_23);

 while (VAR_23) {
  VAR_25 = FUNC_1(VAR_23) - 1;
  FUNC_8(&VAR_21->it_context_list[VAR_25].context.tasklet);
  VAR_23 &= ~(1 << VAR_25);
 }

 if (FUNC_9(VAR_22 & VAR_15))
  FUNC_2("Register access failure - "
    "please notify linux1394-devel@lists.sf.net\n");

 if (FUNC_9(VAR_22 & VAR_14))
  FUNC_2("PCI posted write error\n");

 if (FUNC_9(VAR_22 & VAR_13)) {
  if (FUNC_5())
   FUNC_3("isochronous cycle too long\n");
  FUNC_7(VAR_21, VAR_6,
     VAR_7);
 }

 if (FUNC_9(VAR_22 & VAR_12)) {






  if (FUNC_5())
   FUNC_3("isochronous cycle inconsistent\n");
 }

 if (VAR_22 & VAR_11) {
  VAR_24 = FUNC_6(VAR_21, VAR_5);
  if ((VAR_24 & 0x80000000) == 0)
   FUNC_0(&VAR_21->bus_seconds);
 }

 return VAR_0;
}
