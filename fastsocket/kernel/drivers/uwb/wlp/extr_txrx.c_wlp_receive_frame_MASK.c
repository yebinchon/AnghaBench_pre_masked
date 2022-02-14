
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_frame_std_abbrv_hdr {int dummy; } ;
struct wlp_frame_hdr {int type; int mux_hdr; } ;
struct wlp_frame_assoc {int dummy; } ;
struct wlp {int dummy; } ;
struct uwb_dev_addr {int * data; } ;
struct sk_buff {unsigned int len; void* data; } ;
struct device {int dummy; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct wlp*,struct sk_buff*,struct uwb_dev_addr*) ;
 int FUNC_5 (struct wlp*,struct sk_buff*,struct uwb_dev_addr*) ;

int FUNC_6(struct device *VAR_2, struct wlp *VAR_3, struct sk_buff *VAR_4,
        struct uwb_dev_addr *VAR_5)
{
 unsigned VAR_6 = VAR_4->len;
 void *VAR_7 = VAR_4->data;
 struct wlp_frame_hdr *VAR_8;
 int VAR_9 = 0;

 if (VAR_6 < sizeof(*VAR_8)) {
  FUNC_0(VAR_2, "Not enough data to parse WLP header.\n");
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_8 = VAR_7;
 if (FUNC_2(VAR_8->mux_hdr) != VAR_1) {
  FUNC_0(VAR_2, "Not a WLP frame type.\n");
  VAR_9 = -VAR_0;
  goto out;
 }
 switch (VAR_8->type) {
 case 128:
  if (VAR_6 < sizeof(struct wlp_frame_std_abbrv_hdr)) {
   FUNC_0(VAR_2, "Not enough data to parse Standard "
    "WLP header.\n");
   goto out;
  }
  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5);
  if (VAR_9 < 0) {
   if (FUNC_3())
    FUNC_0(VAR_2, "WLP: Verification of frame "
     "from neighbor %02x:%02x failed.\n",
     VAR_5->data[1], VAR_5->data[0]);
   goto out;
  }
  VAR_9 = 1;
  break;
 case 131:
  FUNC_0(VAR_2, "Abbreviated frame received. FIXME?\n");
  FUNC_1(VAR_4);
  break;
 case 129:
  FUNC_0(VAR_2, "Control frame received. FIXME?\n");
  FUNC_1(VAR_4);
  break;
 case 130:
  if (VAR_6 < sizeof(struct wlp_frame_assoc)) {
   FUNC_0(VAR_2, "Not enough data to parse Association "
    "WLP header.\n");
   goto out;
  }
  FUNC_4(VAR_3, VAR_4, VAR_5);
  break;
 default:
  FUNC_0(VAR_2, "Invalid frame received.\n");
  VAR_9 = -VAR_0;
  break;
 }
out:
 if (VAR_9 < 0) {
  FUNC_1(VAR_4);
  VAR_9 = 0;
 }
 return VAR_9;
}
