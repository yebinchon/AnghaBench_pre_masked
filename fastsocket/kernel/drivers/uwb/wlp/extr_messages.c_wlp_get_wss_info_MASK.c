
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_wss_tmp_info {int dummy; } ;
struct wlp_uuid {int dummy; } ;
struct wlp_attr_wss_info {int dummy; } ;
struct wlp_attr_hdr {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 size_t FUNC_1 (struct wlp*,struct wlp_attr_hdr*,size_t) ;
 size_t FUNC_2 (struct wlp*,void*,struct wlp_wss_tmp_info*,size_t) ;
 size_t FUNC_3 (struct wlp*,void*,struct wlp_uuid*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct wlp *VAR_1, struct wlp_attr_wss_info *VAR_2,
    size_t VAR_3, struct wlp_uuid *VAR_4,
    struct wlp_wss_tmp_info *VAR_5)
{
 struct device *VAR_6 = &VAR_1->rc->uwb_dev.dev;
 ssize_t VAR_7;
 size_t VAR_8;
 size_t VAR_9 = 0;
 void *VAR_10;

 VAR_7 = FUNC_1(VAR_1, (struct wlp_attr_hdr *)VAR_2,
          VAR_3);
 if (VAR_7 < 0)
  goto out;
 VAR_8 = VAR_7;
 VAR_9 = sizeof(*VAR_2);
 VAR_10 = VAR_2;

 VAR_7 = FUNC_3(VAR_1, VAR_10 + VAR_9, VAR_4, VAR_3 - VAR_9);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain WSSID from WSS info.\n");
  goto out;
 }
 VAR_9 += VAR_7;
 VAR_7 = FUNC_2(VAR_1, VAR_10 + VAR_9, VAR_5,
     VAR_3 - VAR_9);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain WSS information "
   "from WSS information attributes. \n");
  goto out;
 }
 VAR_9 += VAR_7;
 if (VAR_8 + sizeof(*VAR_2) != VAR_9) {
  FUNC_0(VAR_6, "WLP: Amount of data parsed does not "
   "match length field. Parsed %zu, length "
   "field %zu. \n", VAR_9, VAR_8);
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = VAR_9;
out:
 return VAR_7;
}
