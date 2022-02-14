
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int flags; int bh; int rxq; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct usbnet*,int *) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_2)
{
 if (!FUNC_3(VAR_0, &VAR_2->flags))
  return;

 if (!FUNC_1(VAR_2->net)) {

  FUNC_4(VAR_2, &VAR_2->rxq);





 } else {

  FUNC_2(&VAR_2->bh);
 }

 FUNC_0(VAR_1, &VAR_2->flags);
}
