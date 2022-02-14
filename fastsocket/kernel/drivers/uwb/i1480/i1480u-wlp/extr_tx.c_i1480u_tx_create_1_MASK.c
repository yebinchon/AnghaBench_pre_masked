
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_tx_hdr {int dummy; } ;
struct TYPE_3__ {int len; } ;
struct untd_hdr_cmp {scalar_t__ padding; TYPE_1__ hdr; } ;
struct sk_buff {scalar_t__ len; } ;
struct i1480u_tx {struct wlp_tx_hdr* wlp_tx_hdr; struct sk_buff* skb; int * buf; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static
int FUNC_6(struct i1480u_tx *VAR_1, struct sk_buff *VAR_2,
         gfp_t VAR_3)
{
 struct untd_hdr_cmp *VAR_4;
 struct wlp_tx_hdr *VAR_5;

 VAR_1->buf = ((void*)0);
 VAR_1->skb = VAR_2;
 FUNC_0(FUNC_3(VAR_2) < sizeof(*VAR_5));
 VAR_5 = (void *) FUNC_1(VAR_2, sizeof(*VAR_5));
 VAR_1->wlp_tx_hdr = VAR_5;
 FUNC_0(FUNC_3(VAR_2) < sizeof(*VAR_4));
 VAR_4 = (void *) FUNC_1(VAR_2, sizeof(*VAR_4));

 FUNC_5(&VAR_4->hdr, VAR_0);
 FUNC_4(&VAR_4->hdr, 0);
 VAR_4->hdr.len = FUNC_2(VAR_2->len - sizeof(*VAR_4));
 VAR_4->padding = 0;
 return 0;
}
