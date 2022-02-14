
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; long len; long truesize; } ;
struct TYPE_4__ {int (* l1l2 ) (TYPE_2__*,int,void*) ;} ;
struct TYPE_3__ {TYPE_2__ ifc; } ;
struct hfc4s8s_l1 {int l1_state; int st_num; long tx_cnt; int hw; int d_tx_queue; TYPE_1__ d_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,unsigned long,...) ;
 int FUNC_6 (int ,int ,...) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int,void*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct hfc4s8s_l1 *VAR_8)
{
 struct sk_buff *VAR_9;
 u_char VAR_10, VAR_11;
 u_char *VAR_12;
 long VAR_13;

 if (VAR_8->l1_state != 7)
  return;


 FUNC_3(VAR_8->hw, VAR_7, (VAR_8->st_num * 8 + 4));
 FUNC_9(VAR_8->hw);

 VAR_10 = FUNC_0(VAR_8->hw, VAR_0);
 VAR_11 = FUNC_1(VAR_8->hw, VAR_1);

 if ((VAR_10 ^ VAR_11) & VAR_5)
  return;

 if (VAR_8->tx_cnt > 0) {
  VAR_13 = VAR_8->tx_cnt;
  VAR_8->tx_cnt = 0;
  VAR_8->d_if.ifc.l1l2(&VAR_8->d_if.ifc, VAR_6 | VAR_4,
       (void *) VAR_13);
 }

 if ((VAR_9 = FUNC_7(&VAR_8->d_tx_queue))) {
  VAR_12 = VAR_9->data;
  VAR_13 = VAR_9->len;

  FUNC_2(VAR_8->hw, VAR_2);


  while (VAR_13 >= 4) {




   FUNC_2(VAR_8->hw, VAR_2);
   FUNC_5(VAR_8->hw, *(unsigned long *) VAR_12);

   VAR_12 += 4;
   VAR_13 -= 4;
  }





  while (VAR_13--)
   FUNC_6(VAR_8->hw, *VAR_12++);


  VAR_8->tx_cnt = VAR_9->truesize;
  FUNC_3(VAR_8->hw, VAR_3, 1);
  FUNC_9(VAR_8->hw);

  FUNC_4(VAR_9);
 }
}
