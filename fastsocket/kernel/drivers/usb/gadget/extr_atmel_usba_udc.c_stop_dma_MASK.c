
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int name; } ;
struct usba_ep {TYPE_1__ ep; TYPE_2__* udc; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_3__* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usba_ep*,int ) ;
 int FUNC_3 (struct usba_ep*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usba_ep *VAR_4, u32 *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;





 FUNC_3(VAR_4, VAR_0, 0);


 for (VAR_6 = 40; VAR_6; --VAR_6) {
  VAR_7 = FUNC_2(VAR_4, VAR_2);
  if (!(VAR_7 & VAR_3))
   break;
  FUNC_1(1);
 }

 if (VAR_5)
  *VAR_5 = VAR_7;

 if (VAR_6 == 0) {
  FUNC_0(&VAR_4->udc->pdev->dev,
   "%s: timed out waiting for DMA FIFO to empty\n",
   VAR_4->ep.name);
  return -VAR_1;
 }

 return 0;
}
