
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {scalar_t__* rxlink; } ;
struct ath_softc {TYPE_1__ rx; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_desc {scalar_t__ ds_link; int ds_vdata; int ds_data; } ;
struct ath_common {int rx_bufsize; } ;
struct ath_buf {scalar_t__ bf_daddr; struct sk_buff* bf_mpdu; int bf_buf_addr; struct ath_desc* bf_desc; } ;


 int FUNC_0 (struct ath_buf*) ;
 int FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,scalar_t__) ;
 int FUNC_4 (struct ath_hw*,struct ath_desc*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_0, struct ath_buf *VAR_1)
{
 struct ath_hw *VAR_2 = VAR_0->sc_ah;
 struct ath_common *VAR_3 = FUNC_2(VAR_2);
 struct ath_desc *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_0(VAR_1);

 VAR_4 = VAR_1->bf_desc;
 VAR_4->ds_link = 0;
 VAR_4->ds_data = VAR_1->bf_buf_addr;


 VAR_5 = VAR_1->bf_mpdu;
 FUNC_1(VAR_5 == ((void*)0));
 VAR_4->ds_vdata = VAR_5->data;






 FUNC_4(VAR_2, VAR_4,
        VAR_3->rx_bufsize,
        0);

 if (VAR_0->rx.rxlink == ((void*)0))
  FUNC_3(VAR_2, VAR_1->bf_daddr);
 else
  *VAR_0->rx.rxlink = VAR_1->bf_daddr;

 VAR_0->rx.rxlink = &VAR_4->ds_link;
}
