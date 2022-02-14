
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct solos_card {TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct pkt_hdr {void* type; void* vci; void* vpi; void* size; } ;
struct atm_vcc {int flags; TYPE_2__* dev; int vci; int vpi; } ;
struct TYPE_4__ {struct solos_card* dev_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct solos_card*,int ,struct sk_buff*,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct atm_vcc *VAR_4)
{
 struct solos_card *VAR_5 = VAR_4->dev->dev_data;
 struct sk_buff *VAR_6;
 struct pkt_hdr *VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_6) {
  FUNC_4(&VAR_5->dev->dev, "Failed to allocate sk_buff in pclose()\n");
  return;
 }
 VAR_7 = (void *)FUNC_6(VAR_6, sizeof(*VAR_7));

 VAR_7->size = FUNC_3(0);
 VAR_7->vpi = FUNC_3(VAR_4->vpi);
 VAR_7->vci = FUNC_3(VAR_4->vci);
 VAR_7->type = FUNC_3(VAR_3);

 FUNC_5(VAR_5, FUNC_0(VAR_4->dev), VAR_6, ((void*)0));

 FUNC_2(VAR_0, &VAR_4->flags);
 FUNC_2(VAR_1, &VAR_4->flags);

 return;
}
