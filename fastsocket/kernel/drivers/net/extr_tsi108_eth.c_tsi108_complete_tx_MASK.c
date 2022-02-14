
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi108_prv_data {int txhead; int txtail; scalar_t__ link_up; TYPE_1__* txring; int txfree; struct sk_buff** txskbs; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; int name; } ;
struct TYPE_2__ {int misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct tsi108_prv_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 struct tsi108_prv_data *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8 = 0;

 while (!VAR_5->txfree || VAR_5->txhead != VAR_5->txtail) {
  VAR_6 = VAR_5->txtail;

  if (VAR_5->txring[VAR_6].misc & VAR_3)
   break;

  VAR_7 = VAR_5->txskbs[VAR_6];

  if (!(VAR_5->txring[VAR_6].misc & VAR_2))
   FUNC_4("%s: bad tx packet, misc %x\n",
          VAR_4->name, VAR_5->txring[VAR_6].misc);

  VAR_5->txtail = (VAR_5->txtail + 1) % VAR_0;
  VAR_5->txfree++;

  if (VAR_5->txring[VAR_6].misc & VAR_1) {
   FUNC_0(VAR_7);
   VAR_8++;
  }
 }

 if (VAR_8) {
  if (FUNC_1(VAR_4->dev_addr) && VAR_5->link_up)
   FUNC_3(VAR_4);
 }
}
