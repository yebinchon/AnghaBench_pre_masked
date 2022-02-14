
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int xq; } ;
struct ppp {int dev; TYPE_1__ file; int xmit_pending; int closing; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ppp*) ;
 int FUNC_2 (struct ppp*,struct sk_buff*) ;
 int FUNC_3 (struct ppp*) ;
 int FUNC_4 (struct ppp*) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ppp *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_3(VAR_0);
 if (!VAR_0->closing) {
  FUNC_1(VAR_0);
  while (!VAR_0->xmit_pending
         && (VAR_1 = FUNC_5(&VAR_0->file.xq)))
   FUNC_2(VAR_0, VAR_1);


  if (!VAR_0->xmit_pending && !FUNC_6(&VAR_0->file.xq))
   FUNC_0(VAR_0->dev);
 }
 FUNC_4(VAR_0);
}
