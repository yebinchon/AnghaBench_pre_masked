
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct solos_card {TYPE_2__* dev; } ;
struct sk_buff {int dummy; } ;
struct pkt_hdr {void* type; void* vci; void* vpi; void* size; } ;
struct TYPE_4__ {int aal; } ;
struct atm_vcc {int flags; TYPE_3__* dev; int vci; int vpi; TYPE_1__ qos; } ;
struct TYPE_6__ {struct solos_card* dev_data; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct solos_card*,int ,struct sk_buff*,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct atm_vcc *VAR_7)
{
 struct solos_card *VAR_8 = VAR_7->dev->dev_data;
 struct sk_buff *VAR_9;
 struct pkt_hdr *VAR_10;

 if (VAR_7->qos.aal != VAR_0) {
  FUNC_3(&VAR_8->dev->dev, "Unsupported ATM type %d\n",
    VAR_7->qos.aal);
  return -VAR_3;
 }

 VAR_9 = FUNC_1(sizeof(*VAR_10), VAR_5);
 if (!VAR_9 && FUNC_6()) {
  FUNC_3(&VAR_8->dev->dev, "Failed to allocate sk_buff in popen()\n");
  return -VAR_4;
 }
 VAR_10 = (void *)FUNC_8(VAR_9, sizeof(*VAR_10));

 VAR_10->size = FUNC_2(0);
 VAR_10->vpi = FUNC_2(VAR_7->vpi);
 VAR_10->vci = FUNC_2(VAR_7->vci);
 VAR_10->type = FUNC_2(VAR_6);

 FUNC_4(VAR_8, FUNC_0(VAR_7->dev), VAR_9, ((void*)0));

 FUNC_7(VAR_1, &VAR_7->flags);
 FUNC_7(VAR_2, &VAR_7->flags);
 FUNC_5(0);


 return 0;
}
