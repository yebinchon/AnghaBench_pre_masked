
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


struct TYPE_12__ {scalar_t__ rev; } ;
struct TYPE_11__ {TYPE_4__* qs; } ;
struct adapter {int flags; TYPE_6__ params; int name; TYPE_5__ sge; TYPE_2__* pdev; TYPE_1__* msix_info; } ;
struct TYPE_9__ {int polling; } ;
struct TYPE_10__ {TYPE_3__ rspq; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {int vec; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,char*,int) ;
 int FUNC_1 (struct adapter*,char*,int ,int ,int ,char*) ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (int ,struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 scalar_t__ FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (int ,int ,int ,int ,struct adapter*) ;
 int FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*) ;
 int VAR_23 ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*,int ) ;
 int FUNC_18 (struct adapter*) ;
 int FUNC_19 (struct adapter*) ;
 int FUNC_20 (struct adapter*) ;
 int FUNC_21 (struct adapter*,int ) ;
 int FUNC_22 (struct adapter*,int ,int ,int ) ;
 int FUNC_23 (struct adapter*) ;
 int FUNC_24 (struct adapter*) ;
 int FUNC_25 (struct adapter*,int ,int) ;
 int FUNC_26 (struct adapter*) ;
 int FUNC_27 (struct adapter*) ;

__attribute__((used)) static int FUNC_28(struct adapter *VAR_24)
{
 int VAR_25;

 if (!(VAR_24->flags & VAR_5)) {
  VAR_25 = FUNC_15(VAR_24);
  if (VAR_25 == -VAR_4) {
   VAR_25 = FUNC_27(VAR_24);
   FUNC_1(VAR_24, "FW upgrade to %d.%d.%d %s\n",
    VAR_6, VAR_8,
    VAR_7, VAR_25 ? "failed" : "succeeded");
  }

  VAR_25 = FUNC_16(VAR_24);
  if (VAR_25 == -VAR_4) {
   VAR_25 = FUNC_26(VAR_24);
   FUNC_1(VAR_24, "TP upgrade to %d.%d.%d %s\n",
    VAR_18, VAR_20,
    VAR_19, VAR_25 ? "failed" : "succeeded");
  }






  FUNC_18(VAR_24);

  VAR_25 = FUNC_17(VAR_24, 0);
  if (VAR_25)
   goto out;

  FUNC_22(VAR_24, VAR_2, 0, VAR_11);
  FUNC_25(VAR_24, VAR_3, FUNC_2(VAR_14 - 12));

  VAR_25 = FUNC_14(VAR_24);
  if (VAR_25)
   goto out;

  FUNC_13(VAR_24);
  if (!(VAR_24->flags & VAR_13))
   FUNC_7(VAR_24);

  FUNC_24(VAR_24);
  VAR_24->flags |= VAR_5;
 }

 FUNC_18(VAR_24);

 if (VAR_24->flags & VAR_22) {
  FUNC_10(VAR_24);
  VAR_25 = FUNC_11(VAR_24->msix_info[0].vec,
      VAR_23, 0,
      VAR_24->msix_info[0].desc, VAR_24);
  if (VAR_25)
   goto irq_err;

  VAR_25 = FUNC_12(VAR_24);
  if (VAR_25) {
   FUNC_5(VAR_24->msix_info[0].vec, VAR_24);
   goto irq_err;
  }
 } else if ((VAR_25 = FUNC_11(VAR_24->pdev->irq,
          FUNC_21(VAR_24,
            VAR_24->sge.qs[0].rspq.
            polling),
          (VAR_24->flags & VAR_21) ?
           0 : VAR_12,
          VAR_24->name, VAR_24)))
  goto irq_err;

 FUNC_4(VAR_24);
 FUNC_23(VAR_24);
 FUNC_20(VAR_24);

 if (VAR_24->params.rev >= VAR_16 && !(VAR_24->flags & VAR_17) &&
     FUNC_9(VAR_24) && FUNC_8(VAR_24) == 0)
  VAR_24->flags |= VAR_17;

 if (VAR_24->flags & VAR_17) {
  FUNC_25(VAR_24, VAR_0,
        VAR_10 | VAR_9);
  FUNC_25(VAR_24, VAR_1, 0x7fbfffff);
 }

 if (!(VAR_24->flags & VAR_15)) {
  int VAR_26 = FUNC_3(VAR_24);

  if (VAR_26 < 0) {
   FUNC_0(VAR_24, "failed to bind qsets, err %d\n", VAR_26);
   FUNC_19(VAR_24);
   FUNC_6(VAR_24);
   VAR_25 = VAR_26;
   goto out;
  }
  VAR_24->flags |= VAR_15;
 }

out:
 return VAR_25;
irq_err:
 FUNC_0(VAR_24, "request_irq failed, err %d\n", VAR_25);
 goto out;
}
