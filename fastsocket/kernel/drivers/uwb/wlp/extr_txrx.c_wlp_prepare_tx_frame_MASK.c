
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp {int eda; } ;
struct uwb_dev_addr {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_dest; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ,struct sk_buff*) ;
 int FUNC_6 (int *,int ,struct uwb_dev_addr*,int ,struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_7(struct device *VAR_3, struct wlp *VAR_4,
    struct sk_buff *VAR_5, struct uwb_dev_addr *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct ethhdr *VAR_8 = (void *) VAR_5->data;

 if (FUNC_2(VAR_8->h_dest)) {
  VAR_7 = FUNC_5(&VAR_4->eda, VAR_2, VAR_5);
  if (VAR_7 < 0) {
   if (FUNC_3())
    FUNC_0(VAR_3, "Unable to handle broadcast "
     "frame from WLP client.\n");
   goto out;
  }
  FUNC_1(VAR_5);
  VAR_7 = 1;

 } else {
  VAR_7 = FUNC_6(&VAR_4->eda, VAR_8->h_dest, VAR_6,
          VAR_1, VAR_5);
  if (FUNC_4(VAR_7 < 0)) {
   if (FUNC_3())
    FUNC_0(VAR_3, "Unable to prepare "
     "skb for transmission. \n");
   goto out;
  }
 }
out:
 return VAR_7;
}
