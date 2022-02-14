
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct udc_ep {int num; int txfifo; struct udc* dev; int in; } ;
struct udc {TYPE_2__* ep; int txfifo; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int bufin_framenum; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct udc_ep *VAR_2)
{
 struct udc *VAR_3;
 u32 VAR_4;
 int VAR_5;

 if (!VAR_2 || !(VAR_2->in))
  return -VAR_0;

 VAR_3 = VAR_2->dev;
 VAR_2->txfifo = VAR_3->txfifo;


 for (VAR_5 = 0; VAR_5 < VAR_2->num; VAR_5++) {
  if (VAR_3->ep[VAR_5].regs) {

   VAR_4 = FUNC_1(&VAR_3->ep[VAR_5].regs->bufin_framenum);
   VAR_4 = FUNC_0(VAR_4, VAR_1);
   VAR_2->txfifo += VAR_4;
  }
 }
 return 0;
}
