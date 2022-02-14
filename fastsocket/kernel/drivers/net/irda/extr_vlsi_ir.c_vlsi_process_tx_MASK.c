
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vlsi_ring {int dir; int len; int pdev; } ;
struct ring_descr {TYPE_1__* skb; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ring_descr*) ;
 int FUNC_3 (struct ring_descr*) ;
 int FUNC_4 (struct ring_descr*) ;
 int FUNC_5 (struct ring_descr*,int ) ;
 int FUNC_6 (struct ring_descr*,int ) ;

__attribute__((used)) static int FUNC_7(struct vlsi_ring *VAR_2, struct ring_descr *VAR_3)
{
 u16 VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_1(VAR_2->pdev, FUNC_2(VAR_3), VAR_2->len, VAR_2->dir);

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 & VAR_0)
  VAR_6 = VAR_1;
 else
  VAR_6 = 0;
 FUNC_6(VAR_3, 0);

 if (VAR_3->skb) {
  VAR_5 = VAR_3->skb->len;
  FUNC_0(VAR_3->skb);
  VAR_3->skb = ((void*)0);
 }
 else
  VAR_5 = FUNC_3(VAR_3);

 FUNC_5(VAR_3, 0);


 return (VAR_6) ? -VAR_6 : VAR_5;
}
