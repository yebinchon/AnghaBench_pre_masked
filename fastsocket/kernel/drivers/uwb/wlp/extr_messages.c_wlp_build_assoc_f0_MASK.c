
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct wlp_nonce {int dummy; } ;
struct TYPE_6__ {int type; int mux_hdr; } ;
struct wlp_frame_assoc {int msg_type; int version; int type; TYPE_3__ hdr; } ;
struct wlp_attr_wlp_assc_err {int dummy; } ;
struct wlp_attr_rnonce {int dummy; } ;
struct wlp_attr_enonce {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
typedef enum wlp_assc_error { ____Placeholder_wlp_assc_error } wlp_assc_error ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct wlp_nonce*,int ,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct wlp_attr_enonce*,struct wlp_nonce*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct wlp_attr_rnonce*,struct wlp_nonce*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct wlp_attr_wlp_assc_err*,int) ;

__attribute__((used)) static
int FUNC_10(struct wlp *VAR_5, struct sk_buff **VAR_6,
         enum wlp_assc_error VAR_7)
{
 struct device *VAR_8 = &VAR_5->rc->uwb_dev.dev;
 int VAR_9 = -VAR_0;
 struct {
  struct wlp_frame_assoc f0_hdr;
  struct wlp_attr_enonce enonce;
  struct wlp_attr_rnonce rnonce;
  struct wlp_attr_wlp_assc_err assc_err;
 } *VAR_10;
 struct sk_buff *VAR_11;
 struct wlp_nonce VAR_12;

 VAR_11 = FUNC_1(sizeof(*VAR_10));
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_8, "WLP: Unable to allocate memory for F0 "
   "association frame. \n");
  goto error_alloc;
 }
 VAR_10 = (void *) VAR_11->data;
 VAR_10->f0_hdr.hdr.mux_hdr = FUNC_0(VAR_3);
 VAR_10->f0_hdr.hdr.type = VAR_2;
 VAR_10->f0_hdr.type = VAR_1;
 FUNC_8(&VAR_10->f0_hdr.version, VAR_4);
 FUNC_6(&VAR_10->f0_hdr.msg_type, VAR_1);
 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 FUNC_5(&VAR_10->enonce, &VAR_12);
 FUNC_7(&VAR_10->rnonce, &VAR_12);
 FUNC_9(&VAR_10->assc_err, VAR_7);
 FUNC_4(VAR_11, sizeof(*VAR_10));
 *VAR_6 = VAR_11;
 VAR_9 = 0;
error_alloc:
 return VAR_9;
}
